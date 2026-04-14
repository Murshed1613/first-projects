#include<stdio.h>
long long fib(long long n){
    if(n<=1)
    return n;
    return fib(n-1)+fib(n-2);
}
int main(){
    long long m;
    printf("Enter your Fibonacci path: ");
    scanf("%lld",&m);
    printf("%lld Path Fibonacci is =%lld",m, fib(m));
}
