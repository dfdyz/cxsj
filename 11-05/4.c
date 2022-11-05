#include "stdio.h"
#include "math.h"

#define orep(i,a,b) for(int i=(a); i<(b); ++i)
#define crep(i,a,b) for(int i=(a); i<=(b); ++i)

long long ans;

int main(){
	int N;
	scanf("%d",&N);
	crep(i,1,N)
		orep(j,0,i)
			ans+=i*pow(10,j);
	
	printf("1+22+...+NNN..N = %lld",ans);

    return 0;
}
