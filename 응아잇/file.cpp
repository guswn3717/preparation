#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int countWords(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "파일을 열 수 없습니다: " << filename << std::endl;
        return -1;
    }

    std::string word;
    int wordCount = 0;
    while (file >> word) {
        ++wordCount;
    }

    file.close();
    return wordCount;
}

int main() {
    std::string filename;
    std::cout << "파일 이름을 입력하세요: ";
    std::cin >> filename;

    int result = countWords(filename);
    if (result >= 0) {
        std::cout << "총 단어 수: " << result << std::endl;
    }

    return 0;
}
