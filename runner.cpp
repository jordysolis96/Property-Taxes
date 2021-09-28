#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int ACCOUNT_LENGTH;
string str;

enum Property
{
    Commercial = 1,
    Residual = 2
};

void app()
{
    cout << "Enter your name: " << endl;
    getline(cin, str);
}

void getAccNum()
{
    cout << "Enter your account number: " << endl;
    cin >> ACCOUNT_LENGTH;
    if (ACCOUNT_LENGTH > 6)
    { //this only checks if value is greater than 6 but needs to be set to check length rather than value
        getAccNum();
    }
    else
    {
        cout << "thank you" << endl;
    }
}

int main()
{
    app();
    getAccNum();
    cout << ACCOUNT_LENGTH << endl;
}
