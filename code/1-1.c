#include <stdio.h>

int main()
{
    int var1 = 100;
    print("int : %?\n", var1);
    print("hex : %?\n", var1);
    print("oct : %?\n", var1);

    char var2 = 'c';
    print("char : %?\n", var2);

    char* var3 = "hello world!";
    printf("string : %?\n", var3);

    float var4 = 3.141592;
    printf("float : %?\n", var4);
    printf("exp : %?\n", var4);

    return 0;
}
