
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<time.h>

int main(){

struct stat st;
struct tm dt;
stat("filesys1.c",&st);
printf("inode : %lu\n",st.st_ino);
printf("size : %lu\n",st.st_size);
printf((st.st_mode & S_IRUSR) ? "r" : "-");
printf((st.st_mode & S_IWUSR) ? "w" : "-");
printf((st.st_mode & S_IXUSR) ? "x" : "-");
printf((st.st_mode & S_IRGRP) ? "r" : "-");
printf((st.st_mode & S_IWGRP) ? "w" : "-");
printf((st.st_mode & S_IXGRP) ? "x" : "-");
printf((st.st_mode & S_IROTH) ? "r" : "-");
printf((st.st_mode & S_IWOTH) ? "w" : "-");
printf((st.st_mode & S_IXOTH) ? "x" : "-");
printf("\n");

dt=*(gmtime(&st.st_ctime));
printf("created on: %d-%d-%d  %d:%d:%d\n",dt.tm_mday,dt.tm_mon,dt.tm_year+1900,dt.tm_hour,dt.tm_min,dt.tm_sec);

dt=*(gmtime(&st.st_mtime));
printf("modified on: %d-%d-%d  %d:%d:%d\n",dt.tm_mday,dt.tm_mon,dt.tm_year+1900,dt.tm_hour,dt.tm_min,dt.tm_sec);



return 0;
}
