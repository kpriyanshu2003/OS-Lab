#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid1, pid2, pid3;

    pid1 = fork();

    if (pid1 < 0)
    {
        fprintf(stderr, "Fork failed\n");
        return 1;
    }
    else if (pid1 == 0)
    {
        printf("Child 1 PID: %d\n", getpid());
        return 0;
    }

    pid2 = fork();
    if (pid2 < 0)
    {
        fprintf(stderr, "Fork failed\n");
        return 1;
    }
    else if (pid2 == 0)
    {
        printf("Child 2 PID: %d\n", getpid());
        return 0;
    }

    pid3 = fork();
    if (pid3 < 0)
    {
        fprintf(stderr, "Fork failed\n");
        return 1;
    }
    else if (pid3 == 0)
    {
        printf("Child 3 PID: %d\n", getpid());
        return 0;
    }

    waitpid(pid1, NULL, 0);
    waitpid(pid2, NULL, 0);
    waitpid(pid3, NULL, 0);

    printf("All child processes have finished. Parent process exiting.\n");

    return 0;
}
