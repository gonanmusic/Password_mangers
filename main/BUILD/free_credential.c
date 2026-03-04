#include <unistd.h>
#include <stdlib.h>
#include "basic_function.h"
void free_credential(struct credential *my_credential)
{
    free(my_credential->site);
    free(my_credential->id);
    free(my_credential->password);
    free(my_credential); 
}