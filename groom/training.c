#include <stdio.h>

//대소문자 바꾸기
void training_2(){
	int len;
	char input[10000];
	scanf("%d", &len);
	scanf(" %s", input);
	for(int i=0;i<len;i++){
		if(input[i] >= 'A' && input[i] <= 'Z')
			input[i]+= 32;
		else
			input[i]-= 32;
	}
	printf("%s\n", input);	
}

int main(){
	training_2();
	return 0;
}