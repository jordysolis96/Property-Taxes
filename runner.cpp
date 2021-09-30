#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int ACCOUNT_LENGTH = 6;
string accountNumber;
string str;
int input;

enum Property
{
    Commercial = 1,
    Residual = 2
};

void app()
{
     cout<<"Enter your name: "<<endl;
        getline(cin,str);


                for(int i=0;i<str.length();++i)
                {

                        if(isalpha(str.at(i)))
                        {
                        cout<< "Welcome " + str<<endl;
                        break;
                        }           
                        else
                        {
                                cout<<"Your name can only have alphabets or spaces. Enter again."<<endl;
                                app();
                        }
}
}

void accountNum(){
        cout << "Enter your account number:" << endl;
        cin >> accountNumber;
        if(accountNumber.size() == ACCOUNT_LENGTH){
                cout << "How many properties do you want to process?" << endl;
        }else if(accountNumber.size() > ACCOUNT_LENGTH){
                cout << "Input was too big. Your Account number should be 6 characters" << endl;
                accountNum();
        }else if(accountNumber.size() < ACCOUNT_LENGTH){
                cout << "Input too small. Your Account number should be 6 characters" << endl;
                accountNum();
        }else{
                cout << "unexpected error. Please make sure your Account number is 6 characters" << endl;
                accountNum();
        }
    

}


int main(){
        app();
        accountNum();
        cout << "next method call goes here" << endl;
        return 0;
}

