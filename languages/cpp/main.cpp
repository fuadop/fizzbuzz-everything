#include <iostream>

int ITERATIONS = 100000;

int main() {
    std::string output;

    for (int i = 1; i <= ITERATIONS; i++) {
        output = "";

        if (i % 3 == 0) output += "Fizz";
        if (i % 5 == 0) output += "Buzz";
        if (output.empty()) output += std::to_string(i);

        std::cout << output << std::endl;
    }

    return 0;
}
