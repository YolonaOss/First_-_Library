#include <stdio.h>
#include <unistd.h>
void ft_putchar(char a)
{
    write(1, &a, 1);
}

void ft_putstr(char *a)
{
    int n;
    n = 0;
    while (*(a + n) != '\0')
    {
        write(1, a + n, 1);
        n++;
    }
}
int main()
{
    char *a;
    a = "Hello, Vladya!\n";
    ft_putstr(a);
    return 0;
}