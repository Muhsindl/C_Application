#include <stdio.h>

//Fibonacci dizisinin n. elemanini bulan fonksiyon tanımı
int fibo(int n);

int main() {
    int number, i;
    printf("Fibonacci dizisinin kac elemani yazdirilsin? ");
    scanf("%d", &number);
    printf("Fibonacci dizisinin ilk %d elemani:\n", number);
    for (i = 0; i < number; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}
//Fibonacci dizisinin n. elemanini bulan fonksiyon 
int fibo(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}
