#include <stdio.h>

void aaa(){
	aaa();
}

int main(){
	
	int i,j;
	//�������i,j

	for(i=1; i<=9; i++){
		for(j=1; j<=i; j++){ 
			printf("%d��%d=%2d ",j,i,i*j);//��� 
		}
		printf("\n");//���� 
	}

	
	return 0;
}

