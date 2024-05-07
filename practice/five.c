#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *fun1(void *arg){
	printf("Inside Thread\n");
}

int main(){
	pthread_t th1;
	pthread_create(&th1, NULL, fun1, NULL);
	pthread_join(th1, NULL);
	printf("Exit from main\n");
	return 0;
}
