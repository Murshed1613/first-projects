#include<stdio.h>
int main(){
    float a;
    printf("enter your number:");
    scanf("%f",&a);
    if (a>=0){
        printf( "%f number is positive",a);
    }else{
        printf( "%f number is negetive",a);
    }
}
