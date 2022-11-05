#include "stdio.h"

#define min(a,b) ((a<b) ? a:b)
#define orep(i,a,b) for(int i=(a); i<(b); ++i)
#define crep(i,a,b) for(int i=(a); i<=(b); ++i)

int main()
{
	int N;
	scanf("%d",&N);
	orep(i,0,N) {
		int hi=min(N-i-1,i);
		int a=N/2 - !(N&1) + -hi;
		int b=N/2 + hi;
		orep(j,0,N){
			printf((j<=b && j>=a) ? "*":" ");
		}
		printf("\n");
	}


	return 0;
}
