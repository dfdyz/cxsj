#include "stdio.h"
#include "string.h"
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
	
	orep(i,0,la) ans[ld++] = a[i];
	orep(i,0,lb) ans[ld++] = b[i];
	orep(i,0,lc) ans[ld++] = c[i];
	
	ans[ld] = 0;
	printf("%s",ans);

	return 0;
}
