#include <stdio.h>
#include "file1.c"
void my_func1(void);

// Nếu muốn biến đó chỉ được truy cập trong tệp  này thì thêm static (static int value)
// Nếu muốn biến đó chỉ truy cập trong hàm này thì cũng thêm static trước biến đó 
int value;
int main()
{
    value = 100;
    printf("Value: %d\n",value);

    my_func1();
    printf("Value: %d\n",value);


    return 0;
}