#include<stdio.h>
main()
{
	int i,j;
	char m;
	for(i=1;i<5;i++)
	{
		m='A';
		for(j=1;j<=7;j++)
		{
			if(j>=5-i&&j<=3+i)
			{
			    printf("%c",m);
			    j<4?m++:m--;
			}
			else
			   printf(" ");
		}
		printf("\n");
	}
	return 0;
}
