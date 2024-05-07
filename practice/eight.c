#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *even(void *arg){
	int *a = (int *)arg;
	printf("Inside thread\n");
	for(int i=0; i < 5;i++)
		if(a[i]%2==0) printf("%d ", a[i]);
	printf("\n");
}

void *odd(void *arg){
	int *a = (int *)arg;
	printf("Inside thread\n");
	for(int i=0; i < 5;i++)
		if(a[i]%2==1) printf("%d ", a[i]);
	printf("\n");
}

int main(){
	pthread_t th1, th2;
	int arr[] = { 1, 2, 3, 4, 5 };
	pthread_create(&th1, NULL, even, arr);
	pthread_create(&th2, NULL, odd, arr);
	pthread_join(th1, NULL);
	pthread_join(th2, NULL);
	printf("Exited from main\n");
	return 0;
}
