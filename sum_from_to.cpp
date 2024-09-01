#include <iostream>

int sum_from_to(int first, int last) {
    int sum = 0;
    if (first > last) {
        std::swap(first, last);
    }
    
    
    
    
    for (int i = first; i <= last; ++i) {
        sum += i;
    } 
    
    return sum;
}

int main() {
    int first, last;
    std::cout << "Enter the first number: ";
    std::cin >> first;
    std::cout << "Enter the last number: ";
    std::cin >> last;

    int result = sum_from_to(first, last);
    std::cout << "The sum from " << first << " to " << last << " is: " << result << std::endl;

    return 0;
}

