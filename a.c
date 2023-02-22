#include <unistd.h>
#include <stdio.h>

int main()
{
    printf("42\n");
    write(1, "43", 2);
}