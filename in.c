#include <stdio.h>
#include <stdlib.h>
// POSIX API
#include <unistd.h>

// Manipulate file descriptor.
#include <fcntl.h>
#include <sys/wait.h>
#include "types.h"

#define SCRIPT_LOCATION "/home/katy/C++/pipe/test2/Build/script.sh"
#define SIM_FILE "/home/katy/C++/pipe/test2/Build/mkTestbench_bsim"

extern char **environ; 

char** add_to_environment(char* e1, char* e2){
    char** curr = environ; 
    
    int num_vars = 0;
    while(curr[num_vars] != NULL){
        num_vars++;
    }

    char** env = malloc((num_vars + 3) * sizeof(char*));
    env[num_vars] = e1;
    env[num_vars+1] = e2;
    env[num_vars+2] = NULL;

    return env;
}


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
        char *args[] = {SCRIPT_LOCATION, NULL};

        char inArg[20]; 
        char outArg[20];
        sprintf(inArg, "%s=%d", ENV_FIFO_IN, 10);
        sprintf(outArg, "%s=%d", ENV_FIFO_OUT, 12);

        char* env[] = {inArg, outArg, NULL};
        //char** env = add_to_environment(inArg, outArg);

        execve(SCRIPT_LOCATION, args, env);
        perror("execve");
        exit(EXIT_FAILURE);
    } else {
        printf("Parent\n");
    }

    return 0;
}