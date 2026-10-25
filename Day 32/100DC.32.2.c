// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    printf("Enter an integer: ");
    scanf("%lld", &n);
    if (n < 0) n = -n;
    if (n == 0) freq[0] = 1;
    while (n > 0) {
        freq[n % 10]++;
        n /= 10;
    }
    int maxFreq = 0, ans = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
