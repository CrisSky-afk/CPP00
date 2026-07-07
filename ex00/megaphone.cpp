#include <iostream>
#include <cctype>

void    print_argument(char *argument)
{
    while (*argument != '\0')
    {
        std::cout << (char)std::toupper(*argument);
        argument++;  
    }
}

int main (int ac, char *av[])
{
    int i = 1;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < ac)
        {
            print_argument(av[i]);
            i++;
        }
        std::cout << std::endl;
    }
}