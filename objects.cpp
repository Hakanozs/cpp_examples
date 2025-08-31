#include <iostream> // for std::cout

int main()
{
    std::cout << 5 << "\n" ;       // print the literal number `5`
    std::cout << -6.7<< "\n";    // print the literal number `-6.7`
    std::cout << 'H'<< std::endl;     // print the literal character `H`
    std::cout << "Hello\n"; // print the literal text `Hello`

    std::cin.get(); // Waits for user input to close the program
    std::cin.get();
    return 0;
}