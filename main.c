#include "get_next_line.h"
int main(void)
{
    char *line;
    int fd = open("file.txt", O_RDONLY);

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
}