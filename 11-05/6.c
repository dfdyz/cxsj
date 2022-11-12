#include "stdio.h"

#define INT_MAX (1<<31-1)
#define min(a,b) ((a<b) ? a:b)
#define orep(i,a,b) for(int i=(a); i<(b); ++i)
#define crep(i,a,b) for(int i=(a); i<=(b); ++i)

int func[3];

int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	
	c = n/10;
	b = (n%10)/5;
	a = n%5;
	
	crep(i,0,c){
		crep(j,0,b+2*i){
			printf("%d张1元, %d张5元, %d张10元\n",a+5*j,b-j+i*2,c-i);
		}
	}

	return 0;
}
