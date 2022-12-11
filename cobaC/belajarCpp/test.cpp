#include <iostream>
#include <algorithm>
using namespace std;

bool is_palindrome(string text)
{
    string rev = text;
    reverse(rev.begin(), rev.end());

    if (rev == text)
    {
        return true;
    }
    else return false;
}

int main()
{
    cout << is_palindrome("madam") << "\n";
    cout << is_palindrome("ada") << "\n";
    cout << is_palindrome("lovelace") << "\n";
    
}