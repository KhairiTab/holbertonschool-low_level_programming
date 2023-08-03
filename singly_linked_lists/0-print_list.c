#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h){
list_t count = 0;
printf("[");
while (h != NULL){
if (h ->str != NULL){
    printf("%s",h ->str);
}else{
    printf("[0] (nil)");
}
h = h->next;
if (h != NULL)
{
    printf(",");
}
count++;
}
printf("]");
return count;
}