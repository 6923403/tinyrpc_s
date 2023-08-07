# tinyrpc_s

tinyrpc_s

---

## protobuf install

1. abseil https://abseil.io/docs/cpp/tools/cmake-installs
 
```
git clone -j4 https://github.com/abseil/abseil-cpp.git
cd abseil-cpp
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=/usr/local
cmake --build . --target install
```
2. https://github.com/protocolbuffers/protobuf.git
```
git clone -j4 https://github.com/protocolbuffers/protobuf.git
git checkout v22.3
git submodule update --init --recursive
cmake . -DCMAKE_CXX_STANDARD=14
cmake --build . --parallel 10
ctest --verbose
sudo cmake --install .
```
