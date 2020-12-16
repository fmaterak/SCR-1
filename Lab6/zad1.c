#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>


int main(){
	int pipe_fd;
	char *filename[64];		
	char *FIFO = "/tmp/potok";
	
	printf("tworze potok\n");		
	mkfifo(FIFO, 0666);
	printf("Utworzylem potok\n");
	pipe_fd = open(FIFO, O_WRONLY);
	printf("%d \n", pipe_fd);
	
	printf("Podaj nazwę pierwszego pliku do odczytu:\t");
	scanf("%s", *filename);

	return 0;
}
