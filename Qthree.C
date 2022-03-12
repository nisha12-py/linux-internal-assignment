#include<stdio.h>
#include<fcntl.h>

int main(){
int fd1,fd2,fd3;
fd2=open("new.txt",O_CREAT|O_RDWR,777);
printf("fd returned by kernel %d",fd2);
char buf[15]="Hello chipmates";
char buff1[15];
write(fd2,buf,15);
lseek(fd2,0,SEEK_SET);
read(fd2,buff1,15);
printf("\ndata from buffer %s\n",buff1);

