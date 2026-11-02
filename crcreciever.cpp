#include <iostream>
#include <string>
using namespace std;

int main()
{
    string received, generator, temp;

    cout << "Enter received codeword: ";
    cin >> received;

    cout << "Enter generator bits: ";
    cin >> generator;

    if (generator.length() < 2 ||
        received.length() < generator.length())
    {
        cout << "Invalid input." << endl;
        return 0;
    }

    temp = received;

    for (int i = 0;
         i <= (int)temp.length() - (int)generator.length();
         i++)
    {
        if (temp[i] == '1')
        {
            for (int j = 0; j < (int)generator.length(); j++)
            {
                temp[i + j] =
                    (temp[i + j] == generator[j]) ? '0' : '1';
            }
        }
    }

    string remainder = temp.substr(
        temp.length() - generator.length() + 1
    );

    cout << "Remainder: " << remainder << endl;

    if (remainder.find('1') == string::npos)
        cout << "No error detected." << endl;
    else
        cout << "Error detected." << endl;

    return 0;
}