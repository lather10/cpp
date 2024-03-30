#include<iostream>
int fun(int n)
{
if(n==0)
    {
        return 1;
    }
    else
    {
            n=n*fun(n-1);
    }
}
int main()
{
    int n;
    char A,N;
    std::cout<<"Enter a number to find Factorial: ";
    std::cin>>n;
    std::cout<<"\n";
    if(n==0)
    {
        return 1;
    }
    else if(n>0)
    {
        n=fun(n);
        std::cout<<"Factorial of entered number is: ";
        std::cout<<n<<"\n";
    }
    else
    {
        std::cout<<"\nEnter positive integer only\n";
    }
    std::cout<<"\nEnter A to find again for new number and N to exit: ";

    //std::cin>>n;
    //std::cout<<"\n";
    return 0;
}
