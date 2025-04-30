#include <stdio.h>
#include <math.h>

int eh_divisivel(int n, int divisor) {
    if (divisor * divisor > n)
        return 1;
    
    if (n % divisor == 0)
        return 0;
    
    return eh_divisivel(n, divisor + 1);
}

int eh_primo(int n) {
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    
    return eh_divisivel(n, 5);
}

int main() {
    int n;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    if (eh_primo(n))
        printf("%d eh um numero primo.\n", n);
    else
        printf("%d nao e um numero primo.\n", n);
    
    return 0;
}
