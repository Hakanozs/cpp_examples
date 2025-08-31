#include <iostream>


int main()
 {
    int age;
    std::cin >> age;

    std::cout << "your age " << age << "\n";

    std::cin.get(); // Waits for user input to close the program
    std::cin.get();
    return 0;
}
