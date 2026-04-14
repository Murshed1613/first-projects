#include <stdio.h>
int binary(int arr[], int l, int r, int x){
    if(l>r) return -1;
    int mid=(l+r)/2;
    if(arr[mid]==x) return mid;
    if(x<arr[mid]) return binary(arr,l,mid-1,x);
    return binary(arr,mid+1,r,x);
}
int main(){
    int n;
    printf("Enter size the Array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your array elements:\n");
    for(int i=0; i<n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);
    int result = binary(arr, 0, n-1, x);
    if(result == -1)
        printf("%d not finded \n", x);
    else
        printf("%d finded index at %d \n", x, result);
    return 0;
}
