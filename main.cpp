#include <fstream>
#include <iostream>
#include <filesystem>  // C++17 for creating directories

int main() {
    // Create the 'output' directory if it doesn't exist
    std::filesystem::create_directory("output");

    // Generate 50 txt files in the 'output' folder
    for (int i = 0; i < 50; ++i) {
        std::ofstream file("output/file" + std::to_string(i) + ".txt");
        file << "This is file " << i;
        file.close();
    }

    std::cout << "Created 50 .txt files in the 'output' folder." << std::endl;

    return 0;
}
