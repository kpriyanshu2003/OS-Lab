#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *fun1(void *arg)
{
    // odd
    int *n = (int *)arg;
    printf("Inside thread \n");
    for (int i = 0; i < 5; i++)
        if (n[i] % 2)
            printf("%d ", n[i]);
    printf("\n");
}

void *fun2(void *arg)
{
    // even
    int *n = (int *)arg;
    printf("Inside thread \n");
    for (int i = 0; i < 5; i++)
        if (!(n[i] % 2))
            printf("%d ", n[i]);
    printf("\n");
}
int main()
{
    pthread_t th1, th2;
    int arr[] = {1, 2, 3, 4, 5};
    pthread_create(&th1, NULL, fun1, arr);
    pthread_join(th1, NULL);
    pthread_create(&th2, NULL, fun2, arr);
    pthread_join(th2, NULL);
    printf("Exit from main\n");
    return 0;
}