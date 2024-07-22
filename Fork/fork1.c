#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid;

    
    pid = fork();

    if (pid < 0) {
        
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        
        printf("Hello from the Child process! PID: %d\n", getpid());
    } else {
        
        printf("Hello from the Parent process! PID: %d\n", getpid());
        printf("Child process has PID: %d\n", pid);
    }

    return 0;
}
