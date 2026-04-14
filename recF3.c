#include<stdio.h>
long long sum(long long n){
    if(n==0) return 0;
    return n + sum(n-1);
}
int main(){
    long long m;
    printf("Enter your path of natural numbers: ");
    scanf("%lld",&m);
    printf("%lld",sum(m));
}
