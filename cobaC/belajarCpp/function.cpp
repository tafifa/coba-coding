#include <iostream>

std::string get_element(std::string name_id)
{
    return name_id + " has been created.";
}

int main()
{
    std::string name;

    std::cout << "Create element for header: ";
    std::cin >> name;
    
    std::cout << get_element(name) << std::endl;

}

