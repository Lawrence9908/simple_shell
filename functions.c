/**
*#########################################
*      FUNCTIONS
*#########################################
*/

/**
*_strlen - The function finds the leangths of the string
*@s: pointer to the string
*Return: returns nothing
*/

int _strlen(const char *s)
{
    int count = 0;

    while(s[count])
    {
        count++;
    }

    return (count);
}

/**
*_strcpy - copy the string from the
*source(src) to destination(dest)
*@src: char type source string
*@dest: char type destination string
*Description: Copy the string pointer to pointer `src` to
*the buffer pointer to by `dest`
*Return: Pointer to `dest`
*/

char *_strcpy(char *dest, const char *src)
{
    int index = -1;

    do{
        index++;
        dest[index] = src[index];
    }while (src[index] != '\0');

    return (dest);
}
