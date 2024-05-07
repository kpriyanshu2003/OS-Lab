#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	pid_t p = fork();
	if(p<0){
		perror("Fork Fail");
		exit(1);
	}
	else printf("Hello World ! PID : %d", getpid());
	return 0;
}
