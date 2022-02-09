#include <stdlib.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t j;
    size_t len;

    i = 0;
    len = 0;
    while (s[len])
        len++;
    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if (s[i] == reject[j])
                return (i);
                j++;
        }
        i++;
    }
    return (len);
}
