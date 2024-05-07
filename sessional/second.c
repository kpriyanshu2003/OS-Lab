#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define MAX_SIZE 100

int n;
int elements[MAX_SIZE];
int sum = 0;

// Thread function to take input for 'n' elements
void *inputThread(void *arg)
{
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &elements[i]);
    }

    pthread_exit(NULL);
}

// Thread function to calculate the sum of 'n' elements
void *sumThread(void *arg)
{
    for (int i = 0; i < n; ++i)
    {
        sum += elements[i];
    }

    pthread_exit(NULL);
}

int main()
{
    pthread_t tid1, tid2;
    printf("Name: Kumar Priyanshu         Roll No: 22053178\n");
    // Create first thread to take input
    pthread_create(&tid1, NULL, inputThread, NULL);
    pthread_join(tid1, NULL); // Wait for input thread to finish

    // Create second thread to calculate sum
    pthread_create(&tid2, NULL, sumThread, NULL);
    pthread_join(tid2, NULL); // Wait for sum thread to finish

    printf("Sum of the elements: %d\n", sum);

    return 0;
}
