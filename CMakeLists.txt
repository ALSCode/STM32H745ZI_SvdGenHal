cmake_minimum_required(VERSION 3.20)

set(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")

project(SvdGenHal C CXX ASM)

set(CMAKE_SYSTEM_NAME Generic)

set(CMAKE_C_COMPILER arm-none-eabi-gcc)
set(CMAKE_CXX_COMPILER arm-none-eabi-g++)
set(CMAKE_ASM_COMPILER  arm-none-eabi-gcc)
set(CMAKE_AR arm-none-eabi-ar)
set(CMAKE_OBJCOPY arm-none-eabi-objcopy)
set(CMAKE_OBJDUMP arm-none-eabi-objdump)
set(SIZE arm-none-eabi-size)


set(CMAKE_SYSTEM_PROCESSOR cortex-m7)
set(CMAKE_EXECUTABLE_SUFFIX ".elf")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 11)

set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(LINKER_SCRIPT_NAME STM32H745ZITX_FLASH)
set(LINKER_SCRIPT ${CMAKE_SOURCE_DIR}/startup/${LINKER_SCRIPT_NAME}.ld)


set(ARM_OPTIONS -mcpu=${CMAKE_SYSTEM_PROCESSOR} -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb --specs=nano.specs)
set(C_CXX_COMMON_OPTIONS -ffunction-sections -fdata-sections -fstack-usage)
set(WARNING_OPTIONS -Wall -Wextra -Wconversion -Wsign-conversion)

add_compile_options(
  ${ARM_OPTIONS}
  ${C_CXX_COMMON_OPTIONS}
  ${WARNING_OPTIONS}
  "$<$<CONFIG:DEBUG>:-g3>"
  "$<$<CONFIG:DEBUG>:-O0>"
  "$<$<CONFIG:RELEASE>:-O2>"
)

add_link_options(
  ${ARM_OPTIONS}
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit")
set(CMAKE_EXE_LINKER_FLAGS "-T ${LINKER_SCRIPT} --specs=nosys.specs -Wl,-Map=${PROJECT_NAME}.map  -Wl,--gc-sections -static -Wl,--start-group -lc -lm -lstdc++ -lsupc++ -Wl,--end-group")
set(CMAKE_ASM_FLAGS "-c -x assembler-with-cpp")


set(CMAKE_C_LINK_EXECUTABLE "<CMAKE_C_COMPILER> <LINK_FLAGS> -o <TARGET> <OBJECTS>")
set(CMAKE_CXX_LINK_EXECUTABLE "<CMAKE_CXX_COMPILER> <LINK_FLAGS> -o <TARGET> <OBJECTS>")

set(STARTUP_FILE_NAME startup_stm32h745zitx)
set(STARTUP_LOCATION "${CMAKE_SOURCE_DIR}/startup/${STARTUP_FILE_NAME}.s")

add_subdirectory(tt-hal)

file(GLOB SYSTEM_CALLS_SOURCES "system_calls/*.c")
file(GLOB CORE_SOURCES "core/*.cpp")

add_executable(${PROJECT_NAME} ${STARTUP_LOCATION} ${SYSTEM_CALLS_SOURCES} ${CORE_SOURCES})
target_link_libraries(${PROJECT_NAME} PUBLIC tt_hal)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/tt-hal/registers)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/STM32H745_CM7)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/STM32H745_CM7/FieldValues)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/core/inc)


add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND ${CMAKE_OBJCOPY} ARGS -Oihex ${PROJECT_NAME}.elf ${PROJECT_NAME}.hex)
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND ${CMAKE_OBJCOPY} ARGS -Obinary ${PROJECT_NAME}.elf ${PROJECT_NAME}.bin)
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND ${SIZE} ARGS --format=berkeley ${PROJECT_NAME}.elf)