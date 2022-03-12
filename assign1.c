#include<stdio.h>
#include<fcntl.h>

int main(){
int fd1,fd2;
fd2=open("read.txt",O_RDWR,777);
fd1=open("write.txt",O_CREAT|O_RDWR,777);
char buf[15];
//write(fd2,buf,15);
//lseek(fd2,0,SEEK_SET);
read(fd2,buf,15);
write(fd1,buf,15);
close(fd1);
close(fd2);



return 0;
 }
