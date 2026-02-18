#include<stdio.h>
int main(){
 float pi=3.1416;
 float r, h;
 printf("enter your radius:");
 scanf("%f",&r);
 printf("enter your height:");
 scanf("%f",&h);
float volume = pi*r*r*h;
printf(" whan radius is %.3f and height is %.3f  volume is: %.5f", r, h, volume);
 
 return 0;
}
