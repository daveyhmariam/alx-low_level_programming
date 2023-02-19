#include<fcntl.h>
#include "main.h"
#define PERMS 0600
/**
 * create_file: creates a file with filename
 * @filename: a string ptr to the file name 
 * @text_context: the content to be copied to the file
 * return: 1 on success
 *        -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
   int fd;
   int w,len=0;
   if(filename==NULL)
   return(-1);
   if(text_content!=NULL)
   {
    for(;text_content[len];)
    len++;
   }
   fd=open(filename,O_CREAT | O_RDWR | O_TRUNC,PERMS);
   w=write(fd,text_content,len);
   if(fd==-1 || w==-1)
   return(-1);
   close(fd);
   return(1);
}