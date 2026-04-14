#include <stdio.h>
long long power(int x, int n)
{
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}
int main()
{
    long long m;
    long long z;
    printf("Enter your base number: ");
    scanf("%lld", &m);
    printf("Enter your power number: ");
    scanf("%lld", &z);
    printf("Eqoual =%lld", power(m,z));
}
