// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    std::cout << "Enter the substring to search for: ";
    
    std::string substring;
    std::cin >> substring;
    
    std::ifstream in_file {"romeoandjuliet.txt"};
    
    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    
    int searched {0};
    int found {0};
    std::string word;
    
    while (in_file >> word) {
        ++searched;
        
        if (word.find(substring) != std::string::npos)
            ++found;
    }
    
    std::cout << searched << " words were searched..." << std::endl;
    std::cout << "The substring " << substring << " was found " << found << " times" << std::endl;
    
    std::cout << std::endl;
    return 0;
}

