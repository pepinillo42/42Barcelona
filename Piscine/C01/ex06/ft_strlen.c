#include <unistd.h>

int     ft_strlen(char *str)
{
        while(*str != '\0')
        {
                write(1, str, 1);
                str++;
        }
}

int main()
{
        int count;
        char *str = "Hola Mundo";
        write(1, str, 1);
        return(0);
}

