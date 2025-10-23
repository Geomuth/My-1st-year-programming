/*
function to calculate electric bill at
first 100 units at ksh 10/unit
next 100 units at ksh 15/unit
above 200 units at ksh 20/unit
*/
#include <stdio.h>
//function prototype
int calculateElectricityBill(int units);
//main function
void main() {
    int units, bill_amount;
    printf("Enter total electricity units consumed: ");
    scanf("%d", &units);    
    bill_amount = calculateElectricityBill(units);
    printf("Total Electricity Bill: Ksh %d\n", bill_amount);
}
//function declaration
int calculateElectricityBill(int units) {
    int bill;
    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
     }
     else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }
    return bill;
} 