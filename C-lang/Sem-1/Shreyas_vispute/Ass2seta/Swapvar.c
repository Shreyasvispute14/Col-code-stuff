#include<Stdio.h>

void swap(int *a,int *b) {

    int temp;
    temp = *a;
    *a = *b;
    *b= temp;
}

int main(){
    int x = 5, y = 10;
    printf("Before Swap : x = %d. y = %d\n",x,y);
    swap(&x,&y);
    printf("After Swap : x = %d. y= %d\n",x,y);
    return 0;
}