#include <unistd.h>
#include <stdlib.h>
#include "basic_function.h"

int write_credential(struct credential *my_credential)
{
    int file_descriptor = open("database.txt", O_RDWR | O_CREAT | O_APPEND, 0644 ); 

    if (file_descriptor == -1)
    {
        ft_putstr("Error Opening File"); 
        return(-1); 
    }
    else
    {
        write(file_descriptor, my_credential->site, ft_strlen(my_credential->site));
        write(file_descriptor, "|", 1);
        write(file_descriptor, my_credential->id, ft_strlen(my_credential->id));
        write(file_descriptor, "|", 1);
        write(file_descriptor, my_credential->password, ft_strlen(my_credential->password));
        write(file_descriptor, "\n", 1);
    }
    close(file_descriptor);
    free_credential(my_credential);
    return(0);
}