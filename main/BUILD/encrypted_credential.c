#include <unistd.h>
#include <stdio.h>
#include "basic_function.h"
#include <openssl/sha.h>


char *encrypt_password_main(char *password)
{
    static char hex[SHA512_DIGEST_LENGTH * 2 + 1];
    unsigned char hash[SHA512_DIGEST_LENGTH];
    int i;

    SHA512((unsigned char *)password, ft_strlen(password), hash);
    for (i = 0; i < SHA512_DIGEST_LENGTH; i++)
    {
        sprintf(hex + (i * 2), "%02x", hash[i]);
    }
    hex[SHA512_DIGEST_LENGTH * 2] = '\0';

    return hex;
}
