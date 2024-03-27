#include<iostream>
//using namespace std;
int main()
{
    double a,b,c;
    int n;

    std::cout<<"\n$$$ ENTER NUMERICAL VALUES ONLY TO PERFORM OPERATION AS IT IS CALCULATOR: $$$";
    std::cout<<"\n----------------------------------------------------------------------------------------\n";

    std::cout<<"Press 1 for Addition \n";
    std::cout<<"\nPress 2 for Subtraction \n";
    std::cout<<"\nPress 3 for Multiplication \n";
    std::cout<<"\nPress 4 for Division \n";
    std::cout<<"\nEnter 5 to exit\n";
    std::cout<<"----------------------------------------------------------------------------------------\n";
    std::cin>>n;
    std::cout<<"\n";
    std::cout<<"You have chosen option: "<<"***"<<n<<"***\n";
    //cout<<"----------------------------------------------------------------------------------------\n";
    std::cout<<"\nEnter First Number\n";
    std::cin>>a;

    std::cout<<"\nEnter second Number\n";
    std::cin>>b;

    std::cout<<"----------------------------------------------------------------------------------------";


    std::cout<<"\nFirst number is: "<<a;
    std::cout<<"\nSecond number is: "<<b;

    std::cout<<"\n----------------------------------------------------------------------------------------";
    std::cout<<"\nAnd Here is the result printed below: \n";
    while(n!=5)
    {
    switch(n)
    {
    case 1:
        std::cout<<"Addition of numbers is: ";
        c=a+b;
        std::cout<<c<<"\n";
        break;
    case 2:
        std::cout<<"Subtraction of numbers is: ";
        c=a-b;
        std::cout<<c<<"\n";
        break;

    case 3:
        std::cout<<"Multiplication of numbers is: ";
        c=a*b;
        std::cout<<c<<"\n";
        break;

    case 4:

        std::cout<<"Division of numbers is: ";
        c=a/b;
        std::cout<<c<<"\n";
        break;

    case 5:
        break;

    default:
        std::cout<<" Wrong choice,Choose from given options only: \n";
        break;
    }
    std::cout<<"**************************************************************************************\n";
    std::cout<<"Enter choice again \n:: ";
    std::cin>>n;

    }
       return 0;
}

