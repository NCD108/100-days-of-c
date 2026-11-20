/*Q65: Search in a sorted array using binary search.
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1*/
#include <stdio.h>
int main(){
    int i, len, low = 0, mid, high, lost;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    int a[len];
    high = len - 1;
    mid = (low + high)/2;
    printf("Enter the elements of the array in ascending order\n");
    for(i = 0; i < len; i++){
        printf("Enter the element at index %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the element whose index location you'd like to find: ");
    scanf("%d", &lost);
    while(high > low){
        if(a[mid] == lost){
        printf("Found at index %d\n", mid);
        break;
        }
        else if(a[mid] < lost){ //we go right
        low = mid + 1;
        mid = (low + high)/2;
        }
        else if(a[mid] > lost){ //we go left
        high = mid - 1;
        mid = (low + high)/2;
    }
    if(low >= high){
        printf("An error has occured. Please check your inputs.");
    }
    }
    return 0;
}