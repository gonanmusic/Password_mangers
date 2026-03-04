#include <unistd.h>
#include <stdlib.h>
#include "basic_function.h"

int verif_format(char *site)
{
    int i;
    int len;

    if (!site)
        return (0);

    len = ft_strlen(site);
    if (len < 3)
        return (0);

    i = 1;
    while (i < len - 1)
    {
        if (site[i] == '.')
            return (1);
        i++;
    }
    return (0);
}