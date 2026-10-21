#include <iostream>
#include <string>

// RLE-кодирование
std::string rle_encode(const std::string& input) {
    std::string result;
    for (std::size_t i = 0; i < input.size(); ) {
        std::size_t j = i;
        while (j < input.size() && input[j] == input[i]) {
            ++j;
        }
        result += input[i];                    
        result += std::to_string(j - i);       
        i = j;
    }
    return result;
}

int main() {
    const std::string text = "aaabbbcccd";
    std::cout << "input:  " << text << '\n';
    std::cout << "output: " << rle_encode(text) << '\n';
    return 0;
}