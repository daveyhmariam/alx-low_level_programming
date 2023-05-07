#include <stdio.h>
#include <stdlib.h>


int main (int argc, char* argv[])
{
    char* ptr=0;
    int sum=0;
    int i=0;
    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }
    
    for (i=1;i<argc;i++)
    {
        sum+=strtol(argv[i],&ptr,10);
        if (*ptr != 0)
        {
            printf("Error\n");
            return (1);
    
        }
                
    }
    printf("%d\n",sum);
    return(0);
}