#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

void forkExample(){
	int x = 1;
	pid_t p = fork();
	if(p<0){
		perror("Fork Fail");
		exit(1);
	}
	else if(p==0) printf("Child Process, x = %d", ++x);
	else printf("Parent Process, x= %d", --x);
}

int main(){
	forkExample();
	return 0;
}
