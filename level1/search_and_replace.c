#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void search_and_replace(char *str, char s, char r)
{
    int i;

    while(str[i] != '\0')
    {
        if(str[i] == s)
        {
            str[i] = r; 
        }
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        write(1, "\n", 1);
        return(0);
    }
    search_and_replace(argv[1], argv[2][0], argv[3][0]);
    return (0);
}
