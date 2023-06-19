#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> scores;

    scores["Alice"] = 95;
    scores["Bob"] = 80;
    scores["Charlie"] = 70;
    scores["David"] = 90;

    std::cout << "Alice's score: " << scores["Alice"] << std::endl;

    std::cout << "Scores:" << std::endl;
    for (const auto& pair : scores) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
