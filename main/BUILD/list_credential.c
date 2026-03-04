#include <unistd.h>

void list_credential()
{
    open("database.txt", O_RDWR | O_CREAT | O_APPEND, 0644  )
    read("database.txt")
}