#include "stdio.h"

#define orep(i,a,b) for(int i=(a); i<(b); ++i)
#define crep(i,a,b) for(int i=(a); i<=(b); ++i)

long long dp[25];
long long ans;

int main()
{
	dp[0] = 1;
	crep(i,1,20) {
		dp[i] = dp[i-1]*i;
		ans += dp[i];
		printf("%d! = %lld\n",i,dp[i]);
	}
	printf("1!+2!+...+20! = %lld",ans);

	return 0;
}
