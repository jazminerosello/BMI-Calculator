/* 
MA. JAZMINE P. ROSELLO
CMSC 21 - T3L
Exercise 1
*/

#include <stdio.h> 

int main(){

    /* Declaration of the variables with their specified datatype being used for the whole program*/ 
    int answer;
    float height, weight, bmi, weightkilo, heightmeters;

    /* do while loop to execute the code */
    do{
        /* THE CHOICES MENU FOR USERS */
        printf("\n===== MENU =====");
        printf("\nPlease choose from the following: \n");
        printf("\n[1] Enter in Kilogram and Centimeters \n"); 
        printf("[2] Enter in Pounds and Feet \n");
        printf("[3] Exit\n");
        printf("\nWhat is your choice? ");
        scanf(" %d", &answer); /* To store the users input into the variable answer*/

        /* Switch case to determine if the user inputs 1 then they will be asked for the height in cm and weight in kg, and if the users input
        is 2 then they will be asked about their height in ft and weight in o=pound and if 3, goodbye statement will be printed out*/
        switch(answer){
            
            case 1:
                /* They will be asked about their weight in kg and height in cm*/
                printf("\nEnter Weight: ");
                scanf(" %f", &weight);
                printf("Enter Height: ");
                scanf(" %f", &height);
            
                /* The coversion of cm to meters and the computation of their BMI */
                heightmeters = height / 100;
                bmi = weight / (heightmeters * heightmeters);

                /* To determine what category they fall with their BMI result */
                if (bmi < 18.5){
                    printf("\nYour BMI is %f\n", bmi); 
                    printf("You are Underweight.\n");
                    
                }
                else if (bmi > 18.5 & bmi < 24.99) {
                    printf("\nYour BMI is %f\n", bmi);
                    printf("You are Normal.\n");
                    
                }
                else if (bmi > 25 & bmi < 29.99) {
                    printf("\nYour BMI is %f\n", bmi);
                    printf("You are Overweight.\n");
                    
                }
                else{
                    printf("\nYour BMI is %f\n", bmi);
                    printf("You are Obese.\n");
                    
                    }

            break; /*break is used to terminate the switch statement */

            case 2:
                /* They will be asked about their weight in pounds and height in ft*/
                printf("\nEnter Weight: ");
                scanf(" %f", &weight);
                printf("Enter Height: ");
                scanf(" %f", &height);  
                
                /* The coversion of feet into meters and also the computation of their BMI  and since we did not convert first 
                pounds into kg, we need to multiply the whole into 703 */

                heightmeters = height * 12; /*conversion of feet into inch */
                bmi = (weight / (heightmeters * heightmeters)) * 703;

                /* To determine what category they fall with their BMI result */
                if (bmi < 18.5){
                    printf("\nYour BMI is %f\n", bmi); 
                    printf("You are Underweight.\n");
                    
                }
                else if (bmi > 18.5 & bmi < 24.99) {
                    printf("\nYour BMI is %f\n", bmi);
                    printf("You are Normal.\n");
                    
                }
                else if (bmi > 25 & bmi < 29.99) {
                    printf("\nYour BMI is %f\n", bmi);
                    printf("You are Overweight.\n");
                    
                }
                else{
                    printf("\nYour BMI is %f\n", bmi);
                    printf("You are Obese.\n");
                    
                }

            break; /*break is used to terminate the switch statement */

            case 3:

                printf("\nGood bye! Thanks for using our BMI calculation program! :> \n"); /* If the user chose 3 then it means exit*/
                break; /*break is used to terminate the switch statement */
            
            default: /* If the user input something that is not in the choices then it will warn the user that they have invalid input and 
            it will ask user to choose again*/
                printf("\nInvalid input!Try again! \n");
                break;

        }

    }while (answer != 3); /* This while statement is used to command the program that whenever users did not chose 3, it will iterate the loop
    but if the users chose 3 then it will terminate the loop  */

    return 0; /*return the value of 0 since we used int main which is the datatype is integer */
}
