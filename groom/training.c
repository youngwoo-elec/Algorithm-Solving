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


//큰 팩토리얼
int training_5(){
	int n; 
	long long int n_fac=1;
	scanf("%d", &n);
	for(int i=n;i>=1;i--){
		n_fac = (n_fac * i)%10000007;
	}
	return 0;
}

int main(){
	training_5();
	return 0;
}