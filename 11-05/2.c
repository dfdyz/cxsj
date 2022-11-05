#include "stdio.h"

#define orep(i,a,b) for(int i=(a); i<(b); ++i)
#define crep(i,a,b) for(int i=(a); i<=(b); ++i)

int main(){
    int ans=0;
    orep(i,1,200){
        if(!(i%3) && i%5) ans += i;
    }
    printf("%d",ans);
    return 0;
}