#include <stdio.h>
#include <stdlib.h>
// POSIX API
#include <unistd.h>

// Manipulate file descriptor.
#include <fcntl.h>
#include <sys/wait.h>

#define CWD "/home/katy/C++/pipe"

int main(){
    pid_t pid = fork();
    if(pid == -1){
        perror("Fork");
        exit(EXIT_FAILURE);
    }

    // Child
    if(pid == 0){
        // int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
        //dup2(fd, STDOUT_FILENO);


        //char *args[] = {"/bin/ls", "-l", NULL};
        //execve("/bin/ls", args, NULL);
        char* args = {"/test2/Build/script.sh", "", NULL};
        perror("execve");
        exit(EXIT_FAILURE)
    }else{

    }

    return 0;
}