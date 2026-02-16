#include <stdio.h>
int main()
{
    int n , first, last, pow10=1, temp;
    printf("Enter a number:");
    scanf("%d", &n);
    temp =n;
    last =temp%10;
    while(temp>=10){
        temp/=10;
        pow10*=10;
    }
    first=temp;
    int middle=(n%pow10)/10;
    int ans= last*pow10+middle*10+first;
    printf("swap=%d\n",ans);

    return 0;
}
