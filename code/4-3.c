#include <stdio.h>

int main()
{
    int n;
    int i;
    int Prime = 1;

    scanf("%d", &n);

    if (n <= 1) {
        Prime = 0;
    }
    else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                Prime = 0;
                break;
            }
        }
    }

    if (Prime == 1) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }

    return 0;
}
