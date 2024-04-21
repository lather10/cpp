#include<iostream>
int fibo(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else if(n==-1)
    {
        return 0;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
int main()
{
    int num;
    std::cout<<"Enter nth term to print for Fibonacci: ";
    while(!(std::cin>>num))
    {
        std::cout<<"\nEnter a number \n";
        std::cin.clear();
        std::cin.ignore(123,'\n');
    }
    if(num>0)
    {
        int a=fibo(num-2);
        std::cout<<"\n"<<num<<"th number of Fibonacci series is----->";
        std::cout<<a<<"\n";
    }
    else
    {
        std::cout<<"\nXXXXXXXXXXXXX nth term must be greater than zero XXXXXXXXXXXXX \n";
    }
    return 0;
}
