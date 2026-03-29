#include<stdio.h>
void big(int x,int y,int z){
    if(x>y&&x>z){
        printf("1st number is big : %d",x);
    }else if (x<y&&z<y){
        printf("2nd number is big : %d",y);
    }else if (x==y&&y==z){
        printf("The numbers are same :%d = %d = %d",x,y,z);
    }else{
         printf("3rd number is big : %d",z);
    }
}
int main(){
    int x,y,z;
    printf("enter your X & Y & z: ");
    scanf("%d %d %d",&x, &y, &z);
    big(x,y,z);
}
