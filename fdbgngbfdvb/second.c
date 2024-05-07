#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>

int n;

void *input(void *arg)
{
    int *a = (int *)arg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
}

void *sum(void *arg)
{
    int *a = (int *)arg;
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += a[i];
    a[0] = sum;
}

int main()
{
    pthread_t th1, th2;
    int a[];
    pthread_create(&th1, NULL, input, NULL);
    pthread_join(th1, NULL);
    pthread_create(&th2, NULL, sum, NULL);
    pthread_join(th2, NULL);
    printf("Sum of the elements: %d\n", a[0]);
    return 0;
}
