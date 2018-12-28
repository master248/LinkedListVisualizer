#include <unistd.h>
#include <sys/wait.h>
//#include <limits.h>
#include <iostream>
#include "LinkedList.h"

int main() {
    int child = fork();
    if (child==0) {
        char* const args[] = {"python", "visualizer.py"};
        execvp("python", args);
    }
    else {
        wait(0);
    }
}