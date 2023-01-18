#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include <stdio.h>
#include <stdlib.h>

// Generate a random integer between 1 and 100
int random(void) {
    int randomNumber = rand() % 100 + 1;
    printf (" The random number is: %d", randomNumber);
    return randomNumber;
}

int slowCalculus(void) {
    int k, l = 1;
    for(k = 0; k < 8000000; k += l){
        int randomCalculus = 3.14 * 89.64;
    }
}

int main(int argc, char *argv[]) {
    int i, j = 1, id;

    for(i = 0; i < j; i++){
        id = fork(random());
        if (id < 0) {
            // Fork failed
            printf(1, "Fork failed\n", getpid());
            break;
        } else if (id > 0) {
            // Parent process
            printf(1, "Parent %d creating child %d\n", getpid(), id);
            wait();
        } else {
            // Child process
            printf(1, "Child %d created, %d\n", getpid(), random());
            slowCalculus();
            break;
        }
    }
}