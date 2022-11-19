#include "stdio.h"
#include "string.h"
#define orep(i,a,b) for(int i=(a); i<(b); ++i)

char a[200];

#define __stype char
void fsort(__stype *__t,int size){
    int tag=1;
    while(tag){
        tag = 0;
        for(int i=0; i<size-1; ++i){
            if(*(__t+i) > *(__t+i+1)){
                __stype t = *(__t+i);
                *(__t+i) = *(__t+i+1);
                *(__t+i+1) = t;
                tag = 1;
            }
        }
    }
}

int main(){
	scanf("%s", &a);
    fsort(a,strlen(a));
    printf("%s",a);

    return 0;
}
