#include<stdio.h>
int main(){
    char ch;
    int islowerVowel,isUpperVowel; 
//Can obviously use one variable but WHY NOT!! *_*
    
    printf("Enter an Alphabet: ");
    scanf("%c",&ch);

    islowerVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    isUpperVowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if(islowerVowel || isUpperVowel){
        printf("Entered alphabet %c is a vowel!",ch);
    }
    else {
        printf("Entered alphabet %c is a consonent",ch );
    }

    return 0;

}
//End of set_a