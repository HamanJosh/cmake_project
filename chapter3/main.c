#include <stdio.h>
#include <adder.h>

int main()
{
    float res = 0.0f;

    printf("==================================\n");
    printf("=========== Chapter. 1 ===========\n");
    printf("==================================\n");
    printf("Hello World!\n");
    printf("\n");

    printf("==================================\n");
    printf("=========== Chapter. 2 ===========\n");
    printf("==================================\n");
    res = add(3.4, 2.2);
    printf("%3.3f\n", res);
    printf("\n");

    return 0;
}
