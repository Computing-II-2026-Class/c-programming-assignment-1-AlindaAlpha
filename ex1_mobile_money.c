/* Name: ALINDA ATUNGA ALPHA */
/* Student Number: 25/U/BIE/01354/PE*/
#include <stdio.h>
int main() {
    float amountToSend, percentageFee, amountFee, totalDeducted;
    // a) Ask for user imput
    printf("Enter amount to send:");
    scanf("%f", &amountToSend);
    // Display the percentage fee
    printf("Enter transaction fee (%%): ");
    scanf("%f", &percentageFee);
    
    // b) perform calculations.
    amountFee = ( percentageFee /100)* amountToSend;
    totalDeducted = amountToSend + amountFee;

    // c) Display the results
    printf("----- TRANSACTION SUMMARY ---\n");
    printf("Amount Sent: %.2f UGX\n", amountToSend);
    printf("The transaction fee is : %.2f UGX\n", amountFee);
    printf("The totalDeducted is %.2f UGX\n", totalDeducted);
    

    return 0;
}
