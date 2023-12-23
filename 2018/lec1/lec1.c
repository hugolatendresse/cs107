#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    bool x = argc > 2 && argv[argc - 1][0] != 'A';

    if (x)
    {
        printf("doesnt start with A\n");
    }
    else
    {
        printf("Starts with A\n");
    }
    return 0;
}