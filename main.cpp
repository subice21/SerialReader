#include "Serial.cpp"
#include <iostream>
#include <windows.h>

int main(){

    CSerial serial;
    int port;
    int baund;
    int bufferI;

    std::cout << "port?" <<std::endl;
    std::cin >> port;
    std::cout << "baund ?"<< std::endl;
    std::cin>> baund;
    std::cout << "what size the buffer ?"<< std::endl;
    std::cin>> bufferI;
    
    if (serial.Open(port, baund)){
        for(;;){
         Sleep(1000);
         char* lpBuffer = new char[bufferI];
         int nBytesRead = serial.ReadData(lpBuffer, bufferI);
         printf(lpBuffer);
         delete []lpBuffer;
        }   
    }
    else
        std::cout << "Failed to open port!" << std::endl;

    return 0;
}
