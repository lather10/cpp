#include<iostream>
//using namespace std;
//void input(double a, double b)
   void sum()
    {
        double a,b;
        std::cout<<"\nEnter First Number\n";
        std::cin>>a;
        std::cout<<"\nEnter second Number\n";
        std::cin>>b;
        std::cout<<"----------------------------------------------------------------------------------------";
        std::cout<<"\nFirst number is: "<<a;
        std::cout<<"\nSecond number is: "<<b;
        std::cout<<"\naddition of numbers is: ";
        std::cout<<a+b;
    }
    void subtraction()
    {
        double a,b;
        std::cout<<"\nEnter First Number\n";
        std::cin>>a;
        std::cout<<"\nEnter second Number\n";
        std::cin>>b;
        std::cout<<"----------------------------------------------------------------------------------------";
        std::cout<<"\nFirst number is: "<<a;
        std::cout<<"\nSecond number is: "<<b;
        std::cout<<"\nSubtraction of numbers is: ";
        std::cout<<a-b;
    }
    void multiplication()
    {
        double a,b;
        std::cout<<"\nEnter First Number\n";
        std::cin>>a;
        std::cout<<"\nEnter second Number\n";
        std::cin>>b;
        std::cout<<"----------------------------------------------------------------------------------------";
        std::cout<<"\nFirst number is: "<<a;
        std::cout<<"\nSecond number is: "<<b;
        std::cout<<"\nMultiplication of numbers is: ";
        std::cout<<a*b;
    }
    void division()
    {
        double a,b;
        std::cout<<"\nEnter First Number\n";
        std::cin>>a;
        std::cout<<"\nEnter second Number\n";
        std::cin>>b;
        if(b==0)
        {
            std::cout<<"\nEnter non zero value to perform division:\n";
        }
        else
        {
        std::cout<<"----------------------------------------------------------------------------------------";
        std::cout<<"\nFirst number is: "<<a;
        std::cout<<"\nSecond number is: "<<b;
        std::cout<<"\ndivision of numbers is: ";
        std::cout<<a/b;
        }
    }
    void choice()
    {
    int n;
    std::cout<<"\n$$$ ENTER NUMERICAL VALUES ONLY TO PERFORM OPERATION AS IT IS CALCULATOR: $$$";
    std::cout<<"\n----------------------------------------------------------------------------------------\n";
    std::cout<<"Press 1 for Addition \n";
    std::cout<<"\nPress 2 for Subtraction \n";
    std::cout<<"\nPress 3 for Multiplication \n";
    std::cout<<"\nPress 4 for Division \n";
    std::cout<<"\nEnter 5 to exit\n";
    std::cout<<"----------------------------------------------------------------------------------------\n";
    }
int main()
{
    int n;
    choice();
    std::cin>>n;
    std::cout<<"\n";
    std::cout<<"You have chosen option: "<<"***"<<n<<"***\n";
    while(n!=5)
    {
    switch(n)
    {
    case 1:
        sum();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        division();
        break;
    case 5:
        break;
    default:
        std::cout<<"Wrong choice,Choose from given options only: \n";
        break;
    }
    std::cout<<"\n**************************************************************************************\n";
    choice();
    std::cout<<"Enter choice again \n:: ";
    std::cin>>n;
    }
       return 0;
}
