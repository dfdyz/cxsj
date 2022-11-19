#include "stdio.h"
#define orep(i,a,b) for(int i=(a); i<(b); ++i)

#define MAX_LEN 100000

char a[MAX_LEN],b[MAX_LEN],c[MAX_LEN],ans[MAX_LEN];

int main()
{
	int la,lb,lc,ld=0;
	scanf("%s %s %s", &a, &b, &c);
	la = strlen(a);
	lb = strlen(b);
	lc = strlen(c);
	orep(i,0,la)
	{
		if(a[i] == b[0])
		{
			short tag = 1;
			orep(j,0,lb)
			{
				if(a[i+j] != b[j])
				{
					tag = 0;
					break;
				}
			}
			if(tag)
			{
				orep(j,0,lc)
				{
					ans[ld++] = c[j];
				}
				i += lb-1;
			}
			else{
				ans[ld++] = a[i];
			}
		}
		else
		{
			ans[ld++] = a[i];
		}
	}
	ans[ld] = 0;
	printf("%s",ans);

	return 0;
}
