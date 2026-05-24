#include <stdio.h>



int main() {

    int num, originalNum, temp, digit, count = 0;

    int sum = 0, power, i;



    printf("Enter a number: ");

    scanf("%d", &num);



    originalNum = num;

    temp = num;



   do {

        count++;

        temp = temp / 10;

    } while (temp != 0);



    temp = num;



    do {

        digit = temp % 10;

        power = 1;



        for (i = 1; i <= count; i++) {

            power = power * digit;

        }



        sum = sum + power;

        temp = temp / 10;



    } while (temp != 0);



   if (sum == originalNum)

        printf("%d is an Armstrong number", originalNum);

    else

        printf("%d is not an Armstrong number", originalNum);

        


    return 0;

}