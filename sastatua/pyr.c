#include <unistd.h>

void ft_putnbr(int nb);
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int calcul_etoile_line(int size)
{
	int etoile;
	int add;
	int split_line;
	int del;
	int x;
	int ok = 0;

	ok = 0;
	etoile = 1;
	add = 4;
	x = 1;
	del = 0;
	split_line = 2;
	while (size)
	{
		if (!(split_line - del))
		{
			del = 0;
			split_line += 2;
			size--;
			if (size)
			{
				x += 1;
				etoile += add;
				ok = 0;
				if (x % 2)
					add += 2;
			}
		}
		if (size && ok)
		{
			ok = 1;
			del += 1;
			etoile += 2;
		}
		ok= 1;
	}
	return (etoile);
}
void sastantua(int size)
{
	
}
int main(void)
{
	ft_putnbr(calcul_etoile_line(2)/2);
	return (0);
}
/*         *
          ***
         ***** // 2  (1)
        *******
       *********
      *********** 
     ************* // 2 + 3 + 1 (2)
    ***************
   *****************
  *******************
 *********************
*********************** //2 + 3 + 4 + 1 + 1 (3)*/
