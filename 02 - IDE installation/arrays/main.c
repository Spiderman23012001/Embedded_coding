#include <stdio.h>
#include <stdint.h>
#include <unistd.h>  // For sleep function

int main(void)
{
    printf("Running Program\n");

    // Add a delay of 30 seconds
    printf("Waiting for 30 seconds...\n");

    int i;
    for (i = 0; i < 100; i++) {
        printf("%d ", i);
        sleep(1);
    }
    sleep(30);
    return 0;
}
