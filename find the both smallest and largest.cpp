#include <stdio.h>
#include <limits.h>

void find_smallest_largest_digits(int n, int numbers[]) {
    if (n <= 0) {
        printf("Not Valid\n");
        return;
    }
    
    int smallest_digit = INT_MAX;
    int largest_digit = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        int num = numbers[i];
        
        while (num != 0) {
            int digit = num % 10;
            smallest_digit = (digit < smallest_digit) ? digit : smallest_digit;
            largest_digit = (digit > largest_digit) ? digit : largest_digit;
            num /= 10;
        }
    }
    
    printf("Smallest digit: %d\n", smallest_digit);
    printf("Largest digit: %d\n", largest_digit);
}

int main() {
    int n = 3;
    int numbers[] = {8, 156, 123450};
    
    find_smallest_largest_digits(n, numbers);
    
    return 0;
}
