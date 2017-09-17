# lma_is_on_fire
Include file of LMA without LIBV, without any examples or unit tests

- cmake path_to_lma_is_on_fire && cmake -DCMAKE_INSTALL_PREFIX=path_to_install && make install

# LMA : Levenberg-Marquardt Algorithm

The dependencies are Eigen-3.2, Boost >= 1.51, g++ >= 4.8, c++11.

The following procedure should work for a local installation:
-
git clone https://github.com/bezout/lma_is_on_fire.git lma

mkdir build_lma && cd build_lma

cmake ../lma -DCMAKE_PREFIX_PATH=../ROOT -DCMAKE_INSTALL_PREFIX=../ROOT

make && make install
