#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("text.txt");
    file << "Hello, \n";
    file << "I \n";
    file << "am \n";
    file << "Victoria \n";
    file.close();

    std::ifstream readFile("text.txt");
    std::string name;

    while(std::getline(readFile, name)) {
        std::cout << name << std::endl;
    }

    readFile.close();

}