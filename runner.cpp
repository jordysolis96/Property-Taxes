#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

const int ACCOUNT_LENGTH = 6;
string accountNumber;
string str;
int input;
bool alphaNum;
bool valid;

enum Property
{
        Commercial = 1,
        Residual = 2
};


int main()
{
        //needs to check for spaces and set boolean to true if space or alphabetical inputs are inserted. If input what non-alphabetical then boolean equals false recursively executing the do. When boolean is true, loop will break free
        do{
                cout<<"Enter your name: "<<endl;
                getline(cin,str);
                for (int i = 0; i < str.length(); i++)
                {
                        if(isspace(str.at(i))){
                                valid = true;
                        }else if(!isalpha(str[i])){
                        cout << "Your name can only have alphabets or spaces. Enter again." << endl;
                        valid = false;
                        break;
                        }else{
                                valid = true;
                        }
                }
                
        }while(valid == false);

 
        //having boolean set to false but when right conditions are met set to true and while loop checks to see if false
         do{
        cout << "Enter your account number:" << endl;
        cin >> accountNumber;
        for(int i=0;i<accountNumber.length();i++){ 
        if(!isalnum(accountNumber[i])){
               
                cout << "can only accept alphanumric values" << endl;
                alphaNum = false;
                break;
        
        }
        else if (accountNumber.size() > ACCOUNT_LENGTH)
        {
               
                cout << "Your account number must have 6 alphanumeric characters. Please enter again." << endl;
                break;
        }
        else if (accountNumber.size() < ACCOUNT_LENGTH)
        {
              
                cout << "Your account number must have 6 alphanumeric characters. Please enter again." << endl;

               break;
        }else{
                alphaNum = true;
        }
        }

        }while (accountNumber.size() != ACCOUNT_LENGTH || alphaNum == false);
        cout << "next method call goes here" << endl;
        return 0;
}
