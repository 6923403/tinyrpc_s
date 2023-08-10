# tinyrpc_s

tinyrpc_s 练习项目

---

## Install

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
sudo apt-get install autoconf automake libtool curl make g++ unzip
git clone -j4 https://github.com/protocolbuffers/protobuf.git
git checkout v3.19.4
git submodule update --init --recursive
./autogen.sh
./configure
make
make check
sudo make install
sudo ldconfig
```

3. tinyxml

```
下载地址：https://sourceforge.net/projects/tinyxml/
# 84 行修改为如下
OUTPUT := libtinyxml.a 

# 104, 105 行修改如下
${OUTPUT}: ${OBJS}
	${AR} $@ ${LDFLAGS} ${OBJS} ${LIBS} ${EXTRA_LIBS}

make -j4

# copy 库文件到系统库文件搜索路径下
cp libtinyxml.a /usr/lib/

# copy 头文件到系统头文件搜索路径下 
mkdir /usr/include/tinyxml
cp *.h /usr/include/tinyxml
```

4. tinyrpc, https://github.com/Gooddbird/tinyrpc

```
git clone -j4 https://github.com/Gooddbird/tinyrpc

cd tinyrpc

mkdir bin && mkdir lib && mkdir obj

// 生成测试pb桩文件
cd testcases
protoc --cpp_out=./ test_tinypb_server.proto

cd ..
// 先执行编译
make -j4

// 编译成功后直接安装就行了
make install
```

---

