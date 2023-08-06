# tinyrpc_s

tinyrpc_s

---

## protobuf install

1. abseil https://abseil.io/docs/cpp/tools/cmake-installs
 
```
git clone -j4 https://github.com/abseil/abseil-cpp.git
cd abseil-cpp
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=~/usr/local
cmake --build . --target install
```
