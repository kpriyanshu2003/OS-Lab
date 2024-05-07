#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

void forkExample(){
	pid_t p = fork();
	if(p<0){
		perror("Fork Fail");
		exit(1);
	}
	else if ( p==0) printf("Child Process\n");
	else printf("Parent Process\n");
}

int main(){
	forkExample();
	return 0;
}
