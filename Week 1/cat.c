#include<cs50.h>
#include<stdio.h>

//Prototype
void meow(void);

int main (void)
{
    int n = get_int("what's n?");
    meow();
}


void meow(void)
{
    for (int i = 0; i < n; i++)
{
    printf("meow\n");
}
}
