## tinyrpc测试案例

mkdir build && cd build
cmake .. 
make -j4
./test_tinypb_server test_tinypb_server.xml
ps -elf | grep 'test_tinypb_server'
netstat -tln | grep 20999

