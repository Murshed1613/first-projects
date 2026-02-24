#include <stdio.h>
int main() {
    int p, t, tk;
    printf("You have passport (Yes=1/No=0): ");
    scanf("%d", &p);
    if (p == 1) {
        printf("You have ticket (Yes=1/No=0): ");
        scanf("%d", &t);
        if (t == 1) {
            printf("You can proceed with immigration.\n");
        } 
        else {
            printf("You have 50,000 taka (Yes=1/No=0): ");
            scanf("%d", &tk);
            if (tk == 1)
                printf("You can proceed with immigration.\n");
            else
                printf("You cannot proceed with immigration.\n");
        }
    }
    else {
        printf("You cannot proceed with immigration.\n");
    }
    return 0;
}
