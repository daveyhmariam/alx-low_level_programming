#include <stdio.h>
#include <stdlib.h>


int main (int argc, char* argv[] __attribute__((__attribute_warn_unused_result__)))
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
        sum+=argv[i];//strtol(argv[i],&ptr,10);
        if (*ptr != 0)
        {
            printf("Error\n");
            return (1);
    
        }
                
    }
    printf("%d\n",sum);
    return(0);
}