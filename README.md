1. git clone --recurse-submodules -j8 https://github.com/ALSCode/STM32H745ZI_SvdGenHal.git STM32H745ZI_SvdGenHal
2. cd STM32H745ZI_SvdGenHal
4. cd tt-hal && git checkout als
5. cd ..
6. python3 reg_wrappers_generator.py STM32H745_CM7.svd
7. mkdir -p build && cd build
8. cmake -DCMAKE_BUILD_TYPE=Release ..
9. cmake --build .