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


// 큰 숫자 순서로 인덱스 출력하기
int training_7_b(){
	int N;
	scanf("%d", &N);
	int arr[N], i_arr[N];
	for(int i=0;i<N;i++){
		scanf("%d", &arr[i]);
		i_arr[i] = i+1;
	}
	for(int i=0;i<N-1;i++){
		for(int j=N-1;j>i;j--){
			if (arr[j-1]<arr[j]){
				int tmp, i_tmp;
				tmp = arr[j-1];  i_tmp = i_arr[j-1];
				arr[j-1] = arr[j];  i_arr[j-1] = i_arr[j];
				arr[j] = tmp;  i_arr[j] = i_tmp;
			}
		}
	}
	if(N>=3)
		printf("%d %d %d", i_arr[0],i_arr[1],i_arr[2]);
	else if(N==2)
		printf("%d %d", i_arr[0], i_arr[1]);
	else
		printf("%d", i_arr[0]);
	return 0;
}


// 잔돈 함수
int training_10_b(){
	int N;
	int cnt =0;
	scanf("%d", &N);
	while(N>0){
	if(N>=40){
			N -= 40;
			cnt++;
		}
		else if(N>=20){
			N -= 20;
			cnt++;
		}
		else if(N>=10){
			N -= 10;
			cnt++;
		}
		else if(N>=5){
			N -= 5;
			cnt++;
		}
		else if(N>=1){
			N -= 1;
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
int training_10(){
	int N, cnt=0;
	int coins[] = {40,20,10,5,1};
	int num_coin = sizeof(coins)/sizeof(coins[0]);
	scanf("%d", &N);
	for(int i=0;i<num_coin;i++){
		cnt+=(N/coins[i]);
		N%=coins[i];
	}
	printf("%d",cnt);
}


int main(){
	training_6();
	return 0;
}