// Program to find roots of a quadratic equation considering all possible cases..
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    float a,b,c,r1,r2;
    float realp,imagp,disc;

    printf("Enter the values a,b,c:\n");
    scanf("%f%f%f",&a,&b,&c);

    if (a==0 || b==0 || c==0)
    {
        printf("Error: Roots cannot be determined:\n");
        exit(1);
    }
    else 
    {
        disc = b*b-4.0*a*c;
        if(disc<0)
        {
            printf("Imaginary Roots\n");
            realp=-b / (2.0*a);             //         
            imagp = sqrt(abs(disc))/(2.0*a); //
            printf("Root1 = %f + %fi\n",realp,imagp);
            printf("Root2 = %f-%fi\n",realp,imagp); 
        }
        else if(disc == 0)
        {
            printf("Roots are real and equal\n");
            r1 = -b / (2.0*a);
            r2 = r1;
            printf("Root1 = %f\n",r1);
            printf("Root2 = %f\n",r2);
        }
        else if(disc>0)
        {
            printf("Roots are real and distinct\n");
            r1 = (-b + sqrt(disc))/ (2.0*a);
            r2 = (-b - sqrt(disc))/ (2.0*a);
            printf("Root1 = %f\n",r1);
            printf("Root2 = %f\n",r2);
        }
    }   
}