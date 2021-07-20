#include "libasm.h"
#include <errno.h>
int start(char *s);
int main()
{
    char *c = "libasm";
    char a[15];
    char a1[15];
    printf("\n%s\n", c);
    printf("\nFT_STRLEN: %zu\n", ft_strlen(c));
    printf("STRLEN: %zu\n", strlen(c));

    printf("\nFT_STRCPY: %s\n", ft_strcpy(a, c));
    printf("%s\n",a);
    printf("STRCPY: %s\n", strcpy(a1, c));
    printf("%s\n",a1);

    char *b = "libasn";
    printf("\n%s %s", b, c);
    printf("\nFT_STRCMP: %d\n", ft_strcmp(b,c));
    printf("STRCMP: %d\n", strcmp(b,c));
    char *d = "libasl";
    printf("\n%s %s", d, c);
    printf("\nFT_STRCMP: %d\n", ft_strcmp(d,c));
    printf("STRCMP: %d\n", strcmp(d,c));
    printf("\n%s %s", c, c);
    printf("\nFT_STRCMP: %d\n", ft_strcmp(c,c));
    printf("STRCMP: %d\n", strcmp(c,c));

    printf("\nFT_WRITE\n");
    printf("STRING %s SIZE 7\n", c);
    printf("\n%zd\n", ft_write(1, c, 7));
    printf("STRING %s SIZE 3\n", c);
    printf("\n%zd\n", ft_write(1, c, 3));
    printf("INVALID FD\n");
    printf("%zd\n", ft_write(-1, c, 3));
    printf("\nWRITE\n");
    printf("STRING %s SIZE 7\n", c);
    printf("\n%zd\n", write(1, c, 7));
    printf("STRING %s SIZE 3\n", c);
    printf("\n%zd\n", write(1, c, 3));
    printf("INVALID FD\n");
    printf("%zd\n", write(-1, c, 3));

    char r[10];
    printf("\nFT_READ\nINPUT STRING SIZE 5\n");
    printf("%zd RETURNS +1 FOR NUL_TERMINATED\n", ft_read(0, r, 6));
    printf("INVALID FD\n");
    printf("%zd\n", ft_read(-1, r, 0));
    char rr[10];
    printf("\nREAD\nINPUT SAME SIZE 5\n");
    printf("%zd RETURNS +1 FOR NUL_TERMINATED\n", read(0, rr, 6));
    printf("INVALID FD\n");
    printf("%zd\n", read(-1, rr, 0));

    printf("\nFT_STRDUP\nSTRING %s\n%s",c, ft_strdup(c));
    printf("\nSTRDUP\nSTRING %s\n%s\n",c, ft_strdup(c));
}