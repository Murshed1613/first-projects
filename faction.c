#include<stdio.h>
int fact(int x){
    int t=1;
    for (int i=1;i<=x;i++){
        t=t*i;
    }
    return t;
}
int main (){
    int n, r;
    printf("Enter your N: ");
    scanf("%d",&n);
    printf("Enter your R: ");
    scanf("%d",&r);
    printf(" Your P is: %d",fact(n)/fact(n-r));
    return 0;
}
