//(1) Create a text file and write some data into it. Then, read every other 5 bytes of data 
//from this file and display it onto the output screen.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream opfile("file.txt");
    string data = "This is a sample text file. Read every other 5 bytes of data.";
    opfile << data;
    opfile.close();

    ifstream ipfile("file.txt");
    char buffer[6];
    int bytesRead = 0;

    while (ipfile) {
        ipfile.read(buffer, 5);
        int bytesReadInChunk = ipfile.gcount();
        buffer[bytesReadInChunk] = '\0';
		
        if (bytesRead % 10 == 0) {
            cout << buffer << " ";
        }
		
        bytesRead += bytesReadInChunk;
    }

    ipfile.close();
    return 0;
}

