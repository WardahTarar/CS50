#include <stdio.h>
#include <cs50.h>

int main(void)
{
    for (int i = 0;i <= 10; i++)
    {
        printf("#\n");
        eprintf("i is not %i\n", i);
    }
}