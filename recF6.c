#include<stdio.h>
int count(long long n){
    if(n==0) return 0;
    return 1 + count(n/10);
}
int main(){
    long long m;
    printf("Enter your natural numbers: ");
    scanf("%lld",&m);
    printf("%d",count(m));
}
