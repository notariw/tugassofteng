#include <stdio.h>
#include <string.h>

int main (){
	int a;
	char b[100];
	scanf("%s %d", b, &a);

	if(strcmp(b, "Segitiga")== 0) {
		printf("%d", a*3);
	}
	else if(strcmp(b, "Persegi")==0){
		printf("%d", a *4);
	}
	
	return 0;
}
