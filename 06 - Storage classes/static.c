#include <stdio.h>
void test_static();
int main()
{
    test_static();
    test_static();
    test_static();
    test_static();
    test_static();
    return 0;
}

// 
void test_static()
{
    static int x = 0;
    x += 1;
    printf("Value is %d \n",x);
}