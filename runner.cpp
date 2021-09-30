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
     cout<<"Enter your name: "<<endl;
        getline(cin,str);


                for(int i=0;i<str.length();++i)
                {

                        if(isalpha(str[i]) == true)
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

int main(){
        app();
        cout << "next method call goes here" << endl;
        return 0;
}

