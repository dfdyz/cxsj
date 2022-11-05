#include "stdio.h"

#define INT_MAX (1<<31-1)
#define min(a,b) ((a<b) ? a:b)
#define orep(i,a,b) for(int i=(a); i<(b); ++i)
#define crep(i,a,b) for(int i=(a); i<=(b); ++i)

#define DS 10005
int dp[DS];
int func[DS][3];

int main()
{
	int n;
	scanf("%d",&n);

	crep(i,1,n) {
		int flag = -1, w=0;
		dp[i] = INT_MAX;
		if(i-1 >= 0 && dp[i-1] <= dp[i]) {
			dp[i] = dp[i-1];
			flag = 0;
			w=1;
		}
		if(i-5 >= 0 && dp[i-5] <= dp[i]) {
			dp[i] = dp[i-5];
			flag = 1;
			w=5;
		}
		if(i-10 >= 0 && dp[i-10] <= dp[i]) {
			dp[i] = dp[i-10];
			flag = 2;
			w=10;
		}
		dp[i]++;
		func[i][0] = func[i-w][0];
		func[i][1] = func[i-w][1];
		func[i][2] = func[i-w][2];
		func[i][flag]++;
	}
	
	crep(i,0,func[n][2]){
		crep(j,0,func[n][1]+2*i){
			printf("%d张1元, %d张5元, %d张10元\n",func[n][0]+5*j,func[n][1]-j+i*2,func[n][2]-i);
		}
	}

	return 0;
}
