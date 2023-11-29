#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void){
    int fd = open("test.txt",O_CREAT |  O_RDWR, 0644);
    write(fd, "Hello World", 11);
    close(fd);
    return 0;
}
