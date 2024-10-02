#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define FIFO_NAME "f1"

int main() {
    // Open the FIFO for reading
    int fd = open("f1", O_RDONLY);
    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    int value;
    // Read integers from the FIFO
    while (read(fd, &value, sizeof(value)) > 0) {
        printf("Read: %d\n", value);
    }

    // Close the FIFO
    close(fd);

    return 0;
}