#include <stdio.h>
#include <sys/types.h>
int main() 
{
	pid_t pid;
	pid = fork();
	if(pid < 0) {
	fprintf(stderr, "Fork Failed");
	}
	else if(pid == 0) {
	printf("This is the child process!\n");
	execlp("./test",NULL);
	}
	else {
	wait(NULL);	
	printf("This is the parent process.\n");
	}
	return 0;
}
