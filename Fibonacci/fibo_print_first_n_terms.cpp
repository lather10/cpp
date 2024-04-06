#include<iostream>
uint64_t fibo(int n)
{
    uint64_t a=0;
    uint64_t b=1;
    uint64_t c;
    int i=3;
    std::cout<<"\nFollowing are the initial "<<n<<" terms of Fibonacci series with serial number: \n";
    if(n==1)
    {
        std::cout<<"---------------------------------------------------------------------------------\n";
        std::cout<<"1"<<"------>"<<a<<"\n";
    }
    else if(n==2)
    {
        std::cout<<"---------------------------------------------------------------------------------\n";
        std::cout<<"1"<<"------>"<<a<<"\n"<<"2"<<"------>"<<b<<"\n";
    }
    else
    {
         std::cout<<"---------------------------------------------------------------------------------\n";
         std::cout<<"1"<<"----->"<<a<<"\n"<<"2"<<"------>"<<b<<"\n";
         while(n!=2)
            {
                c=b+a;
                std::cout<<i<<"------>";
                std::cout<<c<<"\n";
                a=b;
                b=c;
                c=a+b;
                n=n-1;
                i=i+1;
        }
    }
}
int main()
{
    int num;
    std::cout<<"How many Fibonacci terms you want to print from starting: ";
    while(!(std::cin>>num))
    {
        std::cout<<"\nEnter a number \n";
        std::cin.clear();
        std::cin.ignore(123,'\n');
    }
    if(num>0)
    {
        fibo(num);
    }
    else
        {
            std::cout<<"\nEnter value greater than 0:\n";
        }
    return 0;
}
