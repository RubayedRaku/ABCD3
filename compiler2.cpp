#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << "This Is Vowel" << endl;
        }
        else
        {
            cout << "This Is Consonant" << endl;
        }
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "This Is Number" << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }

    return 0;
}
