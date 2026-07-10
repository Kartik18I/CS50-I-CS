#include<cs50.h>
#include<stdio.h>

int main(void)
{
   int dollars = 1;
   while (true)
   {
    char c = get_char("Here's $%li. Double it and give to the next person ? ",dollars);
    if (c == 'y')

{
    dollars *= 2;
}
else
{
    break;
}
   }
}
