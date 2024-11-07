// program for my Cat2
#include <stdio.h>
int main() {
    float hoursworked,hourlywage,grosspay,taxes,netpay;
    //input hours worked and hourlly wage
    printf("Enter hours worked in a week:");
    scanf("%.2f",&hoursworked);
    printf("Enter hourly wage:");
    scanf("%.2f",&hourlywage);
    //calculate gross pay including overtime for more than 40 hours
    if(hoursworked<=40){
        grosspay=hoursworked*hoursworked*hourlywage;
    }
    else{
        grosspay=(40*hourlywage)+((hoursworked-40)*hourlywage*1.5);
    }
    //calculate taxes
    if(grosspay<=600){
        taxes=grosspay*0.15;
    }
    else{
        taxes=(600*0.15)+(grosspay-600)*0.20;
    }
    //calculate the net pay
    netpay=grosspay-taxes;
    printf("Gross pay:%.2f\n",grosspay);
    printf("Taxes:%.2f\n",taxes);
    printf("Net pay:%.2f\n",netpay);
    return 0;
}
