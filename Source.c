#include <stdio.h>
int fun1()
{
    printf("fun1\n");
    return 0;

}

int fun2()
{
    printf("fun2\n");
    return 0;

}

int fun3(int a, int b, int c)
{
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    return 0;
}

void main()
{
    int a = 1;
    printf("%p\n", &a);
    fun3(0, 0, 0);
    printf("%d %d\n", fun1(), fun2());
    getchar();
}
