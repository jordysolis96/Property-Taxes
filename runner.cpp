#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int ACCOUNT_LENGTH = 6;
string accountNumber;
string str;
int input;
bool alphaNum;

enum Property
{
        Commercial = 1,
        Residual = 2
};

void app()
{


        // do{
        //         cout << "Enter your name: " << endl;
        // getline(cin, str);
        // }while (/* condition */)
        // {
        //         /* code */
        // }
        
        cout << "Enter your name: " << endl;
        getline(cin, str);

        for (int i = 0; i < str.length(); ++i)
        {

                if (isalpha(str[i]))
                {
                        cout << "Welcome " + str << endl;
                        break;
                }else if(!isalpha(str[i])){
                        cout << "This is not alphabetical" << endl;
                }else
                {
                        cout << "Your name can only have alphabets or spaces. Enter again." << endl;
                        app();
                }
        }
}

void accountNum()
{

              //having boolean set to false but when right conditions are met set to true and while loop checks to see if false
       while(alphaNum == false){
        do{

        cout << "Enter your account number:" << endl;
        cin >> accountNumber;
        for(int i=0;i<accountNumber.length();i++){ 
      
        if(!isalnum(accountNumber[i])){
                alphaNum = false;
                cout << "can only accept alphanumric values" << endl;
                
                break;
        }                
        else if (accountNumber.size() > ACCOUNT_LENGTH)
        {
                alphaNum = false;
                cout << "Your account number must have 6 alphanumeric characters. Please enter again." << endl;
                
               break;
        }
        else if (accountNumber.size() < ACCOUNT_LENGTH)
        {
                alphaNum = false;
                cout << "Your account number must have 6 alphanumeric characters. Please enter again." << endl;
  
               break;
        }else{
                alphaNum = true;
                cout << "success" << endl;
                break;
        }
        }
        }while (accountNumber.size() != ACCOUNT_LENGTH);
       }
        
}

int main()
{
        app();
        accountNum();
        cout << "next method call goes here" << endl;
        return 0;
}
