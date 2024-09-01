#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int reduce(int num, int denom) {
    int com_divisor = gcd(num, denom);
    return num / com_divisor;
}

int main()
{
    int num;
    int denom;
    std::cout<<"Enter the numerator: ";
    std::cin>>num;
    std::cout<<"Enter the denominator: ";
    std::cin>>denom;

if(num%denom==0){ std::cout<<1;}
else if(num||denom<=0 && num%denom!=0){
        std::cout<<0;
}
}
