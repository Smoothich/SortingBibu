#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main() {
    std::vector<std::string> names = { "John", "Alice", "Bob", "David", "Catherine" };

    // Sort the vector in alphabetical order
    std::sort(names.begin(), names.end());

    std::list<std::string> sortedNames(names.begin(), names.end());  // Create a list from the sorted vector

    // Print the sorted list
    for (const auto& name : sortedNames) {
        std::cout << name << std::endl;
    }

    return 0;
}
