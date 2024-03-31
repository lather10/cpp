#include<iostream>
uint64_t fact(int n)
{
if(n==0)
    {
        return 1;
    }
    else
    {
            return n*fact(n-1);
    }

}
int main()
{
    uint64_t result;
    int input;
    std::cout<<"Enter a positive Integer to find Factorial: ";
    while(!(std::cin>>input))
    {
        std::cout<<"\nEnter positive Integer: ";
        std::cin.clear();
        std::cin.ignore(123,'\n');
    }
    if(input<0)
    {
    std::cout<<"\nEnter positive number only\n";
    }
    else
    {
    result=fact(input);
    std::cout<<"\nNumber entered to find the factorial is: "<<input<<"\n";
    std::cout<<"\nFactorial of number is: "<<result<<"\n";
    }
    return 0;
}
