#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *fun1(void *arg)
{
    char *n = (char *)arg;
    printf("Inside thread \n");
    printf("My Name: %s\n", n);
}

int main()
{
    pthread_t th1;
    char name[] = "Priyanshu";
    pthread_create(&th1, NULL, fun1, name);
    pthread_join(th1, NULL);
    printf("Exit from main\n");
    return 0;
}