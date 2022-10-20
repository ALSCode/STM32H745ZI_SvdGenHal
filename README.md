1. git clone --recurse-submodules -j8 https://github.com/ALSCode/STM32H745ZI_SvdGenHal.git STM32H745ZI_SvdGenHal
2. cd STM32H745ZI_SvdGenHal
4. cd tt-hal && git checkout als
5. cd ..
6. python3 reg_wrappers_generator.py STM32H745_CM7.svd

# standalone
7. mkdir -p build && cd build
8. cmake -DCMAKE_BUILD_TYPE=Release ..
9. cmake --build .
10. openocd -f ../openocd/openocd.cfg -c 'program SvdGenHal.elf verify reset exit'

# in vscode
7. mkdir -p build
8. Ctrl+Shift+P -> Tasks::Run Task -> CMake Release (Debug)
9. Ctrl+Shift+P -> Tasks::Run Task -> Build
10. Ctrl+Shift+P -> Tasks::Run Task -> Flash

