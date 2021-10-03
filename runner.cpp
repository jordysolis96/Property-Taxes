#include <iostream>
#include <string>
#include <ctype.h>
#include <ctime>

using namespace std;

const int ACCOUNT_LENGTH = 6;
string accountNumber;
string str;
int input;
bool alphaNum;
bool valid;
int process;
double value;
double comTax;
double resTax;
double calcResTax;

enum Property
{
        Commercial = 1,
        Residential = 2
};

Property property;




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

        cout << "How many properties do you want to process?"<< endl;
        cin>>process;
        while(process<0)
        {
                cout<<"You cannot enter a negative value. Enter again."<<endl;
                cout<<"How many properties do you want to process?"<<endl;
                cin>>process;
        }

        for(int i=1;i<=process;i++)
        {
                cout<<"Processing property#"<<i<<endl;
                cout<<"1.Commercial"<<endl<<"2.Residential"<<endl;
                cout<<"Enter property type: "; cin>>i;
                cout<<"Enter property value: "; cin>>value;
        }

        switch(property)
        {
                case Commercial:
                if(value<1000000)
                {
                       comTax =value * 0.035;
                }
                else if(value>=1000000)
                {
                        value=10000000.035+(value-1000000)*0.05;
                }
                break;
                case Residential:
                if(value<100000)
                {
                cout << "There is no tac on residual property below 100,000 dollars" << endl;           
                //        comTax = value * 0;
                }
                else if (value>=100000)
                {
                        resTax = value - 100000;
                        calcResTax = resTax * .035;
                        if(process==1)
                        {
                                srand(time(NULL));
                                resTax-=rand()%1001+1000;
                        }
                }
                break;
              
        }

        return 0;
}
