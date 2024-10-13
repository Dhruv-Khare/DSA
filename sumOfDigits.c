#include <stdio.h>


int sum_of_digits(int n) {
    
    if (n == 0) {
        return 0;
    } else {
        
        return (n % 10) + sum_of_digits(n / 10);
    }
}


int sum_of_digits_of_sum(int n) {
    
    int sum = sum_of_digits(n);
    
    return sum_of_digits(sum);
}

int main() {
    int number;
    scanf("%d",&number);
    int result = sum_of_digits_of_sum(number);
    printf("The sum of digits of the sum of digits of %d is: %d\n", number, result);
    return 0;
}
