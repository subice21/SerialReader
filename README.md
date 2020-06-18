# SerialReader
for stdafx.h use:
> g++ -c stdafx.h -o stdafx.h.gch
then :
g++ main.cpp -lws2_32 -lwsock32 -static-libgcc -static-libstdc++ -o reader
--             lib for sockets(using as global arg) ,  lib for windows           filename
