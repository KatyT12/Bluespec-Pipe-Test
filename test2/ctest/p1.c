#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main(){
    if(mkfifo("f1", 0666) == -1){
        perror("mkfifo");
        exit(EXIT_FAILURE);
    }

    int fd = open("f1", O_WRONLY);
    if(fd == -1){
        perror("open");
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < 10; i++){
        write(fd, &i, sizeof(i));
        sleep(1);
    }
    close(fd);
}