#include <stdio.h>
#include <stdlib.h>

int find_largest_number(int num) {
    char num_str[5];
    sprintf(num_str, "%d", num);
    int largest_num = -1;
    
    for (int i = 0; i < 4; i++) {
        char new_num_str[4];
        int new_num_index = 0;
        
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                new_num_str[new_num_index] = num_str[j];
                new_num_index++;
            }
        }
        new_num_str[new_num_index] = '\0';
        
        int new_num = atoi(new_num_str);
        
        if (new_num > largest_num) {
            largest_num = new_num;
        }
    }
    
    return largest_num;
}

int main() {
    int number1 = 5872;
    int largest1 = find_largest_number(number1);
    printf("Largest number after deleting a digit from %d is %d\n", number1, largest1);
    
    int number2 = 9856;
    int largest2 = find_largest_number(number2);
    printf("Largest number after deleting a digit from %d is %d\n", number2, largest2);
    
    return 0;
}
