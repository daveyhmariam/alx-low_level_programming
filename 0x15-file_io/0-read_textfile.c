#include<stdlib.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t fd,rd,wr,len=0;
    char* buf;
    buf=malloc(sizeof(char)*letters);
if(!buf || !filename)
return(0);
fd=open(filename,O_RDONLY);
rd=read(fd,buf,letters);
wr=write(STDOUT_FILENO,buf,letters);
while(buf[len]!='\0')
{
    len++;
}
if(fd==-1 || rd==-1 || wr==-1 || wr!=rd)
{
    free(buf);
    return(0);
}   
    free(buf);
    return (len);
}