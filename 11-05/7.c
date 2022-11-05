#include "stdio.h"

#define orep(i,a,b) for(int i=(a); i<(b); ++i)
#define crep(i,a,b) for(int i=(a); i<=(b); ++i)

int a[5];

int main()
{
	int nag;
	
	crep(i,10000,99999){
		if(i%10){
			nag = i/10000 + ((i%10000)/1000)*10 + ((i%1000)/100)*100 + ((i%100)/10)*1000 + (i%10)*10000;
			if(!(nag%i) && nag/i>1){
				printf("%d N=%d\n",i,nag/i);
			}
		}
	}
	
	
	return 0;
}
