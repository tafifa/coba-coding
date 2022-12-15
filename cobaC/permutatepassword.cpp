#include <iostream>
#include <string>
#include <algorithm>

int count = 0;
// Function to generate all possible permutations of the password
void generatePermutations(std::string password, int start, int end)
{
    // If we have reached the end of the password, print it
    if (start == end)
        // std::cout << password << std::endl;
        count++;

    // Generate all possible permutations for the rest of the password
    for (int i = start; i <= end; i++)
    {
        // Swap the current character with the first character
        std::swap(password[start], password[i]);

        // Generate permutations for the rest of the password
        generatePermutations(password, start + 1, end);

        // Swap the characters back to their original positions
        std::swap(password[start], password[i]);
    }
}

int main()
{
    // Ask the user to enter a password
    std::string password;
    std::cout << "Enter a password: ";
    std::cin >> password;

    // Generate all possible permutations of the password
    std::cout << "All possible permutations: ";
    generatePermutations(password, 0, password.length() - 1);
    std::cout << count << '\n';

    return 0;
}