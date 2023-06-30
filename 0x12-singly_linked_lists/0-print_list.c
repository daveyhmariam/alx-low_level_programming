#include "lists.h"



/// @brief print size f list
/// @param h linked list
/// @return 
size_t print_list(const list_t *h){
    size_t size = 0;
    if(h == NULL){
        return 0;
    }
    while(h!= NULL){
        if(h->str != NULL){
            printf("[%u] %s\n" , h->len , h->str);
        }
        else
           printf("[0] (nil)\n");
           h = h->next;
           size++;
    }
    return size;

}