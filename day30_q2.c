/*Q60: Count positive, negative, and zero elements in an array.
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1
*/
#include <stdio.h>
int main(){
    int ip, i, zero_counter = 0, pos_counter = 0, neg_counter = 0;
    printf("Enter then size of the array: ");
    scanf("%d", &ip);
    int a[ip];

    for(i = 0; i < ip; i++){
        printf("Enter element number %d of the array: ", i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < ip; i++){
        if(a[i] == 0)
            zero_counter++;
        else if(a[i] < 0)
            neg_counter++;
        else
            pos_counter++;
    }
    printf("Positives = %d, Negatives = %d, Zeroes = %d\n", pos_counter, neg_counter, zero_counter);
    return 0;
}