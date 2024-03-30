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
    char c;
    std::cout<<"Enter a positive Integer to find Factorial: ";
    std::cin>>n;
    std::cout<<"\n";
    if(n>=0 && n!=c)
    {
     n=fun(n);
    }
    else if (n==c)
    {
        std::cout<<"\nXXX Do not enter Character XXX\n";
         return 0;
    }
    else
    {
        std::cout<<"\nXXX Do not enter negative Integer XXX\n";
        return 0;
    }
    std::cout<<"Factorial of number is: "<<n<<"\n";
    return 0;
}
