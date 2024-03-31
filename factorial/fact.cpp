#include<iostream>
uint64_t fact(uint64_t n)
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
    std::cin>>input;
    std::cout<<"\n";
    if(input>=0)
    {
     result=fact(input);
    }
    else
    {
        std::cout<<"\nXXX Do not enter negative Integer XXX\n";
        return 0;
    }
    std::cout<<"Factorial of number is: "<<result<<"\n";
    return 0;
}
