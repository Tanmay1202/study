#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main()
{
    char* fifo = "/tmp/myfifo";
    
    mikfifo(fifo, 0666);

    int fd;
    char data[100];

    fd = open(fd, O_WRONLY);
    write(fd, "Hello from writer.", sizeof("Hello from writer."));
    close(fd);
    
    return 0;

}