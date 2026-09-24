#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("lyrics.txt");
    if (!file) return std::cerr << "Error opening file!\n", 1;

    std::string line;
    int count = 0;

    std::cout << "--- FIRST 10 LINES ---\n";
    while (std::getline(file, line)) {
        if (++count <= 10) std::cout << line << '\n';
    }

    std::cout << "\n-------------------------\nTotal number of lines: " << count << '\n';
    return 0;
}
