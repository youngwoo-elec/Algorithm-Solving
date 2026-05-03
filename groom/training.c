#include <stdio.h>
#include <string.h>

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

//숫자 제거 배열
int training_6(){
	    int N;
    char K[20];   
    if (scanf("%d %s", &N, K) != 2) return 0;
	
    int arr[N];      
    int count = 0;   
    int input_val;

    for (int i = 0; i < N; i++) {
        scanf("%d", &input_val);

        char temp[20];
        sprintf(temp, "%d", input_val);

        if (strstr(temp, K) == NULL) {
            arr[count] = input_val;
            count++;
        }
    }
	
		printf("%d", count);
		return 0;
}

int main(){
	training_6();
	return 0;
}