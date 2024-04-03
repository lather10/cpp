#include<iostream>
#include<limits>
void table(int n)
{
    int i=1,e;
    std::cout<<"\nEnter a number up to you want multiples: ";
    std::cin>>e;
    while(i<=e)
    {
        int r=n*i;
        std::cout<<n<<" X "<<i<<" = "<<r<<"\n";
        i=i+1;
    }
}
int main()
{
    int num;
    std::cout<<"Enter a number to print it's table: ";
    while(!(std::cin>>num))
    {
        std::cout<<"\nEnter Number only \n";
        std::cin.clear();
        std::cin.ignore(123,'\n');
    }
    table(num);
    return 0;
}
