// find the Arithmetic mena and Harmonic mean of given two values.
#include<stdio.h>
int main(){
    float am,hm,num_1,num_2;
    
    printf("Enter First number :\n");
    scanf("%f",&num_1);
    /* !!Or can use short code format via doubling the values in single "Scanf()" */
    printf("Enter Second number :\n");
    scanf("%f",&num_2);
    
    am = (num_1 + num_2)/2;
    hm = (num_1 * num_2)/(num_1 + num_2);

    printf("The Arithmetic mean of given numbers is :%f\n",am);
    printf("the Harmonic mean of given number is :%f\n",hm);

    return 0;
}