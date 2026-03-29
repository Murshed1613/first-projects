#include<stdio.h>
void big(int x,int y){
    if(x>y){
        printf("1st number is big: %d",x);
    }else if (x<y){
        printf("2nd number is big: %d",y);
    }else{
        printf("The numbers are same: %d = %d",x,y);
    }
}
int main(){
    int x,y;
    printf("enter your X & Y: ");
    scanf("%d %d",&x, &y);
    big(x,y);
}
