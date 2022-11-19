#include "stdio.h"
#define orep(i,a,b) for(int i=(a); i<(b); ++i)

float a[4][6] =
{
	{ 1.0f, 1.0f, 4.0f, 5.0f, 1.0f, 4.0f },
	{ 1.0f, 9.0f, 1.0f, 9.0f, 8.0f, 1.0f },
	{ 1.0f, 1.0f, 4.0f, 5.0f, 1.0f, 4.0f },
	{ 1.0f, 9.0f, 1.0f, 9.0f, 8.0f, 1.0f }
};

int main()
{
	double tmp;
	printf("Array:\n");
	orep(i,0,4)
	{
		orep(j,0,6)
		{
			printf("%.2llf",a[i][j]);
			printf(j == 5 ? "\n":" ");
		}
	}

	printf("Per row:\n");
	orep(i,0,4)
	{
		tmp = 1;
		orep(j,0,6)
			tmp *= a[i][j];
		printf("%.2lf",tmp);
		printf(i == 3 ? "\n":" ");
	}

	printf("Per column:\n");
	orep(i,0,6)
	{
		tmp = 1;
		orep(j,0,4)
			tmp *= a[j][i];
		printf("%.2lf",tmp);
		printf(i == 5 ? "\n":" ");
	}
	
	printf("All:\n");
	tmp = 1;
	orep(i,0,4)
		orep(j,0,6)
			tmp *= a[i][j];
	printf("%.2lf",tmp);

	return 0;
}
