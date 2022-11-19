#include <stdio.h>

void aaa(){
	aaa();
}

int main(){
	
	int i,j;
	//定义变量i,j

	for(i=1; i<=9; i++){
		for(j=1; j<=i; j++){ 
			printf("%d×%d=%2d ",j,i,i*j);//输出 
		}
		printf("\n");//换行 
	}

	
	return 0;
}

