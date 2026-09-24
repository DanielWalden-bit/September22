#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename = "lyrics.txt";

    // Part 2: Read and print the first 10 lines using a for loop
    std::cout << "--- FIRST 10 LINES ---" << std::endl;

    std::ifstream inFileFor(filename);
    if (!inFileFor.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    std::string line;
    for (int i = 0; i < 10; ++i) {
        if (std::getline(inFileFor, line)) {
            std::cout << line << std::endl;
        }
        else {
            // Reached end of file before 10 lines
            break;
        }
    }
    inFileFor.close();

    // Part 3: Read and print ALL contents using a while loop

    std::cout << "\n--- ALL FILE CONTENTS ---" << std::endl;

    std::ifstream inFileWhile(filename);
    if (!inFileWhile.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    while (std::getline(inFileWhile, line)) {
        std::cout << line << std::endl;
    }
    inFileWhile.close();

    // Part 4: Print the total number of lines using a counter variable
    std::ifstream inFileCount(filename);
    if (!inFileCount.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    int totalLines = 0;
    while (std::getline(inFileCount, line)) {
        totalLines++;
    }
    inFileCount.close();

    std::cout << "\n-------------------------" << std::endl;
    std::cout << "Total number of lines: " << totalLines << std::endl;

    return 0;
}