#include "stdio.h"

#define orep(i,a,b) for(int i=(a); i<(b); ++i)

double num[5];

//手搓冒泡排序
//__stype 数组类型
#define __stype double
void fsort(__stype *__t,int size){
    int tag=1;
    while(tag){
        tag = 0;
        for(int i=0; i<size-1; ++i){
            if(*(__t+i) < *(__t+i+1)){
                __stype t = *(__t+i);
                *(__t+i) = *(__t+i+1);
                *(__t+i+1) = t;
                tag = 1;
            }
        }
    }
}

int main(){
    orep(i,0,5){
        scanf("%lf",num+i);
    }

    fsort(num,5);

    orep(i,0,5){
        printf("%.1lf ",num[i]);
    }

    return 0;
}