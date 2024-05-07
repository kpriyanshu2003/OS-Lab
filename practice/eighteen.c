#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t pid_parent, pid_child, pid_grandchild;

    pid_parent = getpid();
    printf("Parent PID: %d\n", pid_parent);

    pid_child = fork();
    if (pid_child < 0)
    {
        fprintf(stderr, "Fork failed\n");
        return 1;
    }
    else if (pid_child == 0)
    {
        printf("Child PID: %d\n", getpid());
        pid_grandchild = fork();
        if (pid_grandchild < 0)
        {
            fprintf(stderr, "Fork failed\n");
            return 1;
        }
        else if (pid_grandchild == 0)
        {
            printf("Grandchild PID: %d\n", getpid());
            return 0;
        }
        return 0;
    }
    return 0;
}
