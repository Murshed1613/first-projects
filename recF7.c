#include<stdio.h>
int digitSum(long long n){
    if(n==0) return 0;
    return n%10 + digitSum(n/10);
}
int main(){
    long long m;
    printf("Enter your natural numbers: ");
    scanf("%lld",&m);
    printf("%d",digitSum(m));
}
