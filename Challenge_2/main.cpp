// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>

using namespace std;
    
const int table_width {25};
const int field1_width {15};
const int field2_width {10};

void hr() {
    std::cout << std::setfill('-') << std::setw(table_width) << "" << std::endl;
    std::cout << std::setfill(' ');
}

int main() {
    std::ifstream in_file {"responses.txt"};
    
    if (!in_file) {
        std::cerr << "Couldn't open responses.txt" << std::endl;
        return 1;
    }
    
    std::cout << std::setw(field1_width) << std::left << "Student";
    std::cout << std::setw(field2_width) << std::right << "Score";
    std::cout << endl;
    
    hr();
    
    std::string key;
    in_file >> key;
    
    int score_count {0};
    int score_sum {0};
    std::string name;
    std::string responses;
    
    while (in_file >> name >> responses) {
        int score {0};
        
        for (size_t i = 0; i < std::min(key.length(), responses.length()); ++i) {
            if (responses[i] == key[i]) {
                ++score;
            }
        }
        
        std::cout << std::setw(field1_width) << std::left << name;
        std::cout << std::setw(field2_width) << std::right << score;
        std::cout << std::endl;
        
        ++score_count;
        score_sum += score;
    }
    
    hr();
    
    std::cout << std::setw(field1_width) << std::left << "Average score";
    std::cout << std::setw(field2_width) << std::right << (static_cast<double>(score_sum) / score_count);
    std::cout << std::endl;
    
    std::cout << std::endl;
    
    return 0;
}
