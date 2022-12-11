#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers = {2,4,3,6,1,9};

    int __even__ = 0;
    int __odd__ = 1;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 == 0) __even__ += numbers[i];
        else __odd__ *= numbers[i];
    }

    std::cout << "Sum of even numbers is " << __even__ << std::endl;
    std::cout << "Product of odd numbers is " << __odd__ << std::endl;
}