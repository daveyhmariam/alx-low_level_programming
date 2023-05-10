#include"main.h"

int main(int argc,char **argv)
{
     int fd1,fd2,rd,w;
    char *buffer;
    if(argc!=3)
    {
        dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
        exit(97);
    }
    
    buffer=create_buf(argv[2]);
    fd1=open(argv[1],O_RDONLY);
    rd=read(fd1,buffer,1024);
    fd2=open(argv[2],O_CREAT | O_WRONLY | O_TRUNC , 0664);
    
    do
    {
        if(fd1==-1 || rd==-1)
        {
            dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
        }
        w=write(fd2,buffer,1024);
        if(w==-1 || fd2==-1)
        {

			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
        }
        
        rd=read(fd1,buffer,1024);
        fd2 = open(argv[2], O_WRONLY | O_APPEND);    

    } while (rd>0);
    
   free(buffer);
	close_file(fd1);
	close_file(fd2);

	return (0);

}


/**
 * creat_buf: creates buffer on  heap
 * return: pointer to string
*/
char *create_buf(char *file)
{
    char* buffer;
    buffer=malloc(sizeof(char)*1024);
    if(!buffer)
    {
        dprintf(STDERR_FILENO,"Error: Can't write to %s\n", file);
        exit(99);
    }
    return(buffer);
}
/**
 * close: closes a file discritor
 * @fd: file discritor
 * return: void
*/
void close_file(int fd)
{
    int i;
    i=close(fd);
    if(i == -1)
    {
        dprintf(STDERR_FILENO,"Error: Can't close fd %d\n",i);
        exit(100);
    }
}

