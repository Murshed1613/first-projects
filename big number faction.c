#include<stdio.h>

int big(int x,int y){
    if(x>y){
        printf("1st is big.");
    }else if (x<y){
        printf("2nd is big.");
    }else{
        printf("X=Y");
    }
    return 0;
}
int main(){
    int x,y;
    printf("enter your X & Y: ");
    scanf("%d %d",&x, &y);
    big(x,y);
}
