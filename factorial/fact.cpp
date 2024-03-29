#include<iostream>
int fact(int n)
{
if(n==0)
    {
        return 1;
    }
    else
    {
        int j=n*fact(n-1);
        std::cout<<j;
    }
}
int main()
{
    int n,j;
    std::cout<<"Enter a number to find factorial: ";
    std::cin>>n;
    fact(n);
    return 0;
}
