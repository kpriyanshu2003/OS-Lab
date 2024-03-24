#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void forkex()
{
    int x = 1;
    pid_t p = fork();
    if (p < 0)
    {
        perror("fork fail");
        exit(1);
    }
    else if (p == 0)
    {
        printf("Child has = %d\n", ++x);
    }
    else
        printf("Parent has x = %d\n", --x);
}

int main()
{
    forkex();
    return 0;
}