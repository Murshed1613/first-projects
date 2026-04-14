#include <stdio.h>
long long gcd(long long a,long long b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    long long m;
    long long z;
    printf("Enter your frist number: ");
    scanf("%lld", &m);
    printf("Enter your second number: ");
    scanf("%lld", &z);
    printf("GCD is =%lld", gcd(m,z));
}
