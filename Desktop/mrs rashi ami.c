#include <stdio.h>

int main()
{
    // initialization expression
    char ans= 'y';

    // test expression
    while (ans == 'y')
    {
        printf( "Hello World\n");
        printf("Do u want to continue?");
        scanf("%c",&ans);
    }
    return 0;
}

