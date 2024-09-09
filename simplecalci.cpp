#include<iostream>
using namespace std;
int main()
{
    char choice;
    float a,b;
    cout<<"---------------HERE IS A SIMPLE CALCULATOR----------------";
    cout<<"Enter The Operation You want Perform : \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division :";
    cin>>choice;
    cout<<"Enter Two Numbers:";
    cin>>a>>b;
    switch (choice)
    {
    case '1':
        cout<<"Addition = "<<a+b<<endl;
        break;
    case '2':
        cout<<"Subtraction = "<<a-b<<endl;
        break;
    case '3':
        cout<<"Multiplication = "<<a*b<<endl;
        break;
    case '4':
    if(b!=0)
        cout<<"Division = "<<a/b<<endl;
    else
        cout<<"ENTER THE NON-ZERO NUMBER"<<endl;
    default:
        cout<<"Please Enter The Correct Choice";
        break;
    }
}
