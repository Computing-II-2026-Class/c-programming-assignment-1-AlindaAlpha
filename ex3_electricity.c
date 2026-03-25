// Name: ALINDA ATUNGA ALPHA
// Student Number: 25/U/BIE/01354/PE

#include <stdio.h>
int main (){
    float unitsConsumed, costPerUnit, totalElectricityBill;
    // a) ask for user input
    printf("Enter unitsConsumed:");
    scanf("%f", &unitsConsumed);
    //display the cost per unit
    printf("Enter the costPerUnit:");
    scanf("%f", &costPerUnit);

    //b) perform some calculations
    totalElectricityBill = unitsConsumed*costPerUnit;

    //c) display the results
    printf("\n The Total  Bill is : %.2f UGX\n", totalElectricityBill);
    
    return 0;
}
