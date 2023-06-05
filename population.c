#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int start, end;
    do
    {
        //getting a start value that is > 9
        start = get_int("Start size: ");

    }
    while (start  < 9);
    do
    {
        //getting a end value > start value
        end = get_int("End size: ");
    }
    while (end < start);
    int x = start;
    int i;
    for (i = 0 ; x < end ; i++)
    {
        //calculating years to reach end value
        x = x + (x / 3) - (x / 4);
    }
    printf("Years: %i\n", i);
}
