#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

int main() {
    std::string source = "C:\\Users\\User\\lab3\\ПТ-23\\Lorman Maksym\\lab4_arc_PC\\Not hidden folder";
    std::string destination = "C:\\Users\\User\\lab3\\ПТ-23\\Lorman Maksym\\batch\\Not hidden folder";

    std::string newDirPath = "C:\\Users\\User\\lab3\\ПТ-23\\Lorman Maksym\\lab4_arhPC";

    if (!fs::exists(newDirPath))
        fs::create_directory(newDirPath);

    try {
        fs::copy(source, destination, fs::copy_options::recursive | fs::copy_options::overwrite_existing);
        std::cout << "Files copied successfully. Catalog path: C:\\Users\\User\\lab3\\ПТ-23\\Lorman Maksym\\batch\\Not hidden folder  " << std::endl;
    }
    catch (const fs::filesystem_error& e) {
        std::cerr << "Error copying files: Check the name of ways to files!!!" << std::endl;
    }

    return 0;
}