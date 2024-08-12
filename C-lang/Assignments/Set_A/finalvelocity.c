// Find the distance and velocity of given values.
#include<stdio.h>
void main(){
    int sec;
    float distance,initial_velocity,velocity,acceleration; //Can use double for more accuracy %lf
    
    printf("Enter the time in seconds\n");
    scanf("%d",&sec);
    
    printf("Enter the initial Velocity\n");
    scanf("%f",&initial_velocity);
    
    printf("Enter the acceleration\n");
    scanf("%f",&acceleration);
    
    velocity = (initial_velocity + (acceleration*sec));
    distance = (initial_velocity + (acceleration*(sec * sec))); 
    
    printf("Total velocity is %f\n",velocity);
    printf("Total distance is %f\n",distance);

    return 0;
}