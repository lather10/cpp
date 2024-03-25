#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    int n;

    cout<<"\n$$$ ENTER NUMERICAL VALUES ONLY TO PERFORM OPERATION AS IT IS CALCULATOR: $$$"<<endl;
    cout<<"----------------------------------------------------------------------------------------\n";


    cout<<"Enter First Number"<<endl;
    cin>>a;

    cout<<"Enter second Number"<<endl;
    cin>>b;

    cout<<"----------------------------------------------------------------------------------------\n";


    cout<<"First number is: "<<a<<endl;
    cout<<"Second number is: "<<b<<endl;

    cout<<"----------------------------------------------------------------------------------------\n";

    cout<<"Press 1 for Addition \n"<<endl;
    cout<<"Press 2 for Subtraction \n"<<endl;
    cout<<"Press 3 for Multiplication \n"<<endl;
    cout<<"Press 4 for Division \n"<<endl;
    cout<<"Enter 5 to exit\n";
    cout<<"----------------------------------------------------------------------------------------\n";
    cin>>n;
    cout<<"\n";
    cout<<"You have chosen option: "<<"***"<<n<<"***";
    //cout<<"----------------------------------------------------------------------------------------\n";
    cout<<" And Here is the result printed below: \n"<<endl;
    while(n!=5)
    {
    switch(n)
    {
    case 1:
        cout<<"Addition of numbers is: ";
        c=a+b;
        cout<<c<<endl<<endl;
        break;
    case 2:
        cout<<"Subtraction of numbers is: ";
        c=a-b;
        cout<<c<<endl<<endl;
        break;

    case 3:
        cout<<"Multiplication of numbers is: ";
        c=a*b;
        cout<<c<<endl<<endl;
        break;

    case 4:

        cout<<"Division of numbers is: ";
        c=a/b;
        cout<<c<<endl<<endl;
        break;

    case 5:
        break;

    default:
        cout<<" Wrong choice,Choose from given options only: "<<endl;
        break;
    }
    cout<<"**************************************************************************************"<<endl;
    cout<<"Enter choice again \n:: ";
    cin>>n;

    }
       return 0;
}

