/*Q22: Write a program to find profit or loss percentage given cost price and selling price.


Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main(){
    float principal, final;
    printf("Enter the principal: ");
    scanf("%f", &principal);
    printf("Enter the final: ");
    scanf("%f", &final);
    if(final > principal){
        float profit = final - principal;
        float profit_percentage = (profit / principal) * 100;
        printf("Profit %.2f%%\n", profit_percentage);
    }
    else if(final < principal){
        float loss = principal - final;
        float loss_percentage = (loss / principal) * 100;
        printf("Loss %.2f%%\n", loss_percentage);
    }
    else{
        printf("No Profit No Loss\n");
    }
    return 0;
}