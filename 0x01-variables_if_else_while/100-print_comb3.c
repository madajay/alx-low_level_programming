int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (j > i)
			{
				if (!(i == '0' && j == '1'))
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i);
				putchar(j);
			}
		}
	}
	putchar('\n');
	return (0);
}
