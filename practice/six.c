#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *fun1(void *arg){
	char *n = (char *)arg;
	printf("Inside Thread\n");
	printf("My Name : %s\n", n);
}

int main(){
	char arr[] = "Priyanshu";
	pthread_t th1;
	pthread_create(&th1, NULL, fun1, arr);
	pthread_join(th1, NULL);
	printf("Exit from main\n");
	return 0;
}
