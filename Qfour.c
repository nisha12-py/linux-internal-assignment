#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd, fd1, len, sz;
	char write_buf[50] = "Hii. How are you?";
	char read_buf[50];
	char c[50];
	
	fd1 = open("read.txt", O_RDONLY);
	sz = read(fd1, c, 10);
	
	fd = open("lk.txt", O_CREAT | O_RDWR, 777);
	
	len = write(fd, write_buf,50);
	printf("return value from write optn = %d\n", len);
	
	lseek(fd1, 4, SEEK_SET);
	
	lseek(fd1, 2, SEEK_CUR);
	
	lseek(fd1, 2, SEEK_END);
		
	read(fd1, c, len);
	
	printf("read buffer data is : \n%s\n", c);

	close(fd);
	
return 0;
}
