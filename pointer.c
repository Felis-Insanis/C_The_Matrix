#include <stdio.h>

int main()
{
    int number = 10;
    char attila = 'a'; 
    char navn[] = "attila";

    printf("%c",  attila);

    char *ptr = &attila;

    printf("%s", ptr);


    return 0;
}