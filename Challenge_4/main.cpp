// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>

int main() {
    std::ofstream out_file {"romeoandjuliet_out"};
    
    if (!out_file) {
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }
    
    std::ifstream in_file {"romeoandjuliet"};
    
    if (!in_file) {
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }
    
    int line_number {0};
    std::string line;
    
    while (std::getline(in_file, line)) {
        if (line.length() > 1) {
            out_file << std::setw(4) << std::left << (++line_number) << " " << line;
        }
        
        out_file << std::endl;
    }
    
    in_file.close();
    out_file.close();
    
    return 0;
}

