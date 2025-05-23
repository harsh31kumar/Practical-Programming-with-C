#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    pid_t childpid = 0;
    int i, n;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <number_of_processes>\n", argv[0]);
        return 1;
    }

    n = atoi(argv[1]);
    for (i = 1; i < n; i++) {
        if (childpid = fork() == -1) {
            break;
        }
    }
    fprintf(stderr, "i: %d process ID: %ld parent ID: %ld child ID: %ld\n", 
            i, (long) getpid(), (long) getppid(), (long) childpid);

    return 0;
}

