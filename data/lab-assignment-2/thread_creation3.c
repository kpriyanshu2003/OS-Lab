#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *fun1(void *arg)
{
    int *n = (int *)arg;
    printf("Inside thread \n");
    for (int i = 0; i < 5; i++)
        printf("%d ", n[i]);
    printf("\n");
}

int main()
{
    pthread_t th1;
    int arr[] = {1, 2, 3, 4, 5};
    pthread_create(&th1, NULL, fun1, arr);
    pthread_join(th1, NULL);
    printf("Exit from main\n");

    return 0;
}