#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	scanf("%d", &a);
	if (a>0) exit(1);
	else{
	if (a<0) exit(2);
	else{ exit(3);}
	}
	return 0;
}
