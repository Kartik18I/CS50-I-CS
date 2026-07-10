#include<stdio.h>

int main(void)
{
    const int n = 3;
    // For each row
   for (int row = 0; row < n;row++)
   {
    // for each column
    for (int column = 0; column < n; column++)
    {
        //print one brick

        printf("#");
    }
    printf("\n");
   }

}
