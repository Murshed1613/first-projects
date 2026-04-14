#include<stdio.h>
long long fact(long long n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main(){
    long long m;
    printf("enter your facturial: ");
    scanf("%lld",&m);
    printf(" (%lld!) or %lld facturial is =%lld", m, m, fact(m));
}
