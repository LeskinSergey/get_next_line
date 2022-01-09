#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
int    main(void)
{
    int    fd;
    fd = open("Bible_txt.txt", O_RDONLY);

    printf("%s", get_next_line(0));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));

}
//cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line.h get_next_line_utils.c main.c && leaks --atExit -- ./a.out
