#define PERMS 0600
#include "main.h"

/**
 * append_text_to_file: append file on a file
 * @filename: name of the file to be appended
 * @text_content: the content of the text to be appended
 * return: -1 on failure
 *          1 on success
*/

int append_text_to_file(const char *filename, char *text_content)
{
    int fd, w , len=0;
    if(filename==NULL)
    return(-1);
    if(text_content!=NULL)
    {
        for(;text_content[len];)
        len++;
    }
    fd=open(filename,O_WRONLY | O_APPEND,PERMS);
    w=write(fd,text_content,len);
    if(fd==-1 || w==-1)
    return(-1);
    close(fd);
    return(1);
}