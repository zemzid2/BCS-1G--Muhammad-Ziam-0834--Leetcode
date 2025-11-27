#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        if (str[left] != str[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    char words[n][100];
    
    for (int i = 0; i < n; i++)
        scanf("%s", words[i]);
    
    for (int i = 0; i < n; i++) {
        if (isPalindrome(words[i])) {
            printf("%s", words[i]);
            return 0;
        }
    }
    
    printf("");
    return 0;
}
