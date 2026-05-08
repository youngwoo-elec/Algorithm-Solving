#include <stdio.h>

int main() {
    int n;
    long long a = 0; // F(1)
    long long b = 1; // F(2)
    long long mod = 1000000007;

    scanf("%d", &n);

    if (n == 1) { printf("0\n"); return 0; }
    if (n == 2) { printf("1\n"); return 0; }

    for (int i = 3; i <= n; i++) {
        a = (a + b) % mod; // a에 다음 항(current)을 계산해서 넣음
        
        a와 b의 값을 바꿈 (Swap 효과)
        long long temp = a;
        a = b;
        b = temp;
    }

  
    printf("%lld\n", b);

    return 0;
}