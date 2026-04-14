#include <stdio.h>
int rev(int n, int r){
    if(n==0) return r;
    return rev(n/10, r*10+n%10);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);   
    int result = rev(n, 0);
    printf("Reversed: %d\n", result);
    return 0;
}
