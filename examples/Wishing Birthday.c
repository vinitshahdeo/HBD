#include <stdio.h>

#include <string.h>

int main()
{
    char name[100], c[200] = "Happy Birthday ";
    printf("Enter your name:");
    scanf("%s", name);
    printf("\n");
    strcat(c, name);
    int b = strlen(c), k, i, j;
    char a[b][7][14];
    for (k = 0; k < b; k++)
    {
        if (c[k] == 'a' || c[k] == 'A')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12)
                            a[k][i][j] = '0';
                        else if ((i > 0 && (j == 0 || j == 10)) || ((j > 0 && j < 10) && i == 0) || i == 3)
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'b' || c[k] == 'B')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12)
                            a[k][i][j] = '0';
                        else if (((i == 0 || i == 3 || i == 6) && j < 10) || (j == 0) || ((i > 0 && i < 6 && i != 3) && j == 10))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'c' || c[k] == 'C')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12 || j == 10)
                            a[k][i][j] = '0';
                        else if (((i == 0 || i == 6) && j < 8 && j > 0) || (j == 0 && i > 0 && i < 6) || ((i == 1 || i == 5) && j == 8))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'd' || c[k] == 'D')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12 || j == 10)
                            a[k][i][j] = '0';
                        else if (((i == 0 || i == 6) && j < 8 && j > 0) || (j == 0) || ((i > 0 && i < 6) && j == 8))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'e' || c[k] == 'E')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12 || j == 10)
                            a[k][i][j] = '0';
                        else if (((i == 0 || i == 6 || i == 3) && j > 0) || (j == 0 && i != 3 && i > 0 && i < 6))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'f' || c[k] == 'F')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12 || j == 10)
                            a[k][i][j] = '0';
                        else if (((i == 0 || i == 3) && j > 0) || (j == 0 && i > 0 && i < 7))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'g' || c[k] == 'G')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12 || j == 10)
                            a[k][i][j] = '0';
                        else if (((i == 0 || i == 6) && j > 0 && j < 8) || ((j == 0 || j == 8) && (i == 1 || i == 4 || i == 5)) || (i == 3 && j != 2) || (i == 2 && j == 0))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'h' || c[k] == 'H')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12 || j == 10)
                            a[k][i][j] = '0';
                        else if (j == 0 || j == 8 || i == 3)
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'i' || c[k] == 'I')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12 || j == 10)
                            a[k][i][j] = '0';
                        else if (j == 4 || i == 0 || i == 6)
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'j' || c[k] == 'J')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12 || j == 10)
                            a[k][i][j] = '0';
                        else if ((i == 0 && j != 0) || (i < 6 && j == 6) || (i == 6 && (j == 2 || j == 4)) || (j == 0 && (i == 4 || i == 5)))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'k' || c[k] == 'K')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12 || j == 10)
                            a[k][i][j] = '0';
                        else if (j == 0 || i + (j / 2) == 4 || i - (j / 2) == 2)
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'l' || c[k] == 'L')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12 || j == 10)
                            a[k][i][j] = '0';
                        else if (i == 6 || j == 0)
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'm' || c[k] == 'M')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12 || j == 0 || (i < 4 && (i == j / 2 || i + (j / 2) == 6)))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'n' || c[k] == 'N')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12 || j == 0 || i == j / 2)
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'o' || c[k] == 'O')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12)
                            a[k][i][j] = '0';
                        else if (((i == 0 || i == 6) && j > 0 && j < 10) || ((j == 0 || j == 10) && i > 0 && i < 6))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'p' || c[k] == 'P')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12)
                            a[k][i][j] = '0';
                        else if (((i == 0 || i == 3) && j < 10) || (j == 0) || ((i == 1 || i == 2) && j == 10))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'q' || c[k] == 'Q')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12)
                            a[k][i][j] = '0';
                        else if (((i == 0 || (i == 6 && j != 8)) && j > 0 && j < 10) || ((j == 0 || (j == 10 && i != 5)) && i > 0 && i < 6) || (i > 2 && i - (j / 2) == 1))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'r' || c[k] == 'R')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12)
                            a[k][i][j] = '0';
                        else if (((i == 0 || i == 3) && j < 10) || (j == 0) || ((i == 1 || i == 2) && j == 10) || (i > 3 && (i - (j / 2) == 1)))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 's' || c[k] == 'S')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12 || j == 10)
                            a[k][i][j] = '0';
                        else if (((i == 1 || i == 5) && (j == 0 || j == 8)) || ((i == 0 || i == 3 || i == 6) && j > 0 && j < 8) || (i == 2 && j == 0) || (j == 8 && i == 4))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 't' || c[k] == 'T')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12 || j == 10)
                            a[k][i][j] = '0';
                        else if (i == 0 || j == 4)
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'u' || c[k] == 'U')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (j == 12 || j == 10)
                            a[k][i][j] = '0';
                        else if (((j == 0 || j == 8) && i < 6) || ((j > 0 && j < 8) && i == 6))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'v' || c[k] == 'V')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (i == j || i + j == 12)
                        a[k][i][j] = '*';
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'w' || c[k] == 'W')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (((j == 0 || j == 12) && i < 5) || (i == 6 && (j == 2 || j == 10)) || ((j == 4 || j == 8) && i == 4) || (j == 6 && i == 2))
                        a[k][i][j] = '*';
                    else if (((j == 1 || j == 11) && i == 5) || ((j == 3 || j == 9) && i == 5) || ((j == 5 || j == 7) && i == 3))
                        a[k][i][j] = '*';
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'x' || c[k] == 'X')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (i == j / 2 || i + j / 2 == 6 || ((i == 0 || i == 6) && (j == 2 || j == 10)))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'y' || c[k] == 'Y')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (((i == j / 2 || i + j / 2 == 6) && i < 4) || (i == 0 && (j == 2 || j == 10)) || (i > 3 && j == 6) || (i == 6 && j > 2 && j < 10))
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else if (c[k] == 'z' || c[k] == 'Z')
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                {
                    if (j % 2 == 0)
                    {
                        if (i == 0 || i == 6 || i + j / 2 == 6)
                            a[k][i][j] = '*';
                        else
                            a[k][i][j] = ' ';
                    }
                    else
                        a[k][i][j] = ' ';
                }
            }
        }
        else
        {
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 14; j++)
                    if (j < 3)
                        a[k][i][j] = ' ';
                    else
                        a[k][i][j] = '0';
            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (k = 0; k < b; k++)
        {
            for (j = 0; j < 14; j++)
            {
                if (a[k][i][j] == '0')
                    break;
                printf("%c", a[k][i][j]);
            }
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
