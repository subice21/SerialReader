# SerialReader
using Serial class from :
https://www.codeguru.com/cpp/i-n/network/serialcommunications/article.php/c2503/CSerial--A-C-Class-for-Serial-Communications.htm

for stdafx.h use:
> g++ -c stdafx.h -o stdafx.h.gch
then :
g++ main.cpp -lws2_32 -lwsock32 -static-libgcc -static-libstdc++ -o reader
--             lib for sockets(using as global arg) ,  lib for windows , filename
