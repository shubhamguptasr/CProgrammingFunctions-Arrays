#include <stdio.h>
#include <stdlib.h>

void letter_freq(const char word[], int freq[]);

int main()
{
    char my_string[100];
    int freq[26]={0};

    printf("Please enter a string no more than 99 chars & no white SPACES!: ");
    scanf("%s",my_string);

    letter_freq(my_string,freq);
    return 0;
}

void letter_freq(const char word[],int freq[]){

    int i;

    for(i=0;word[i]!= '\0';i++){ //loops until end of string
        if((word[i]>=65 && word[i]<=90) || (word[i]>=97 && word[i]<=122)){ //upper case and lower case check
                if(word[i]>=65 && word[i]<=90){
                   freq[word[i]-65]++; //Uppercase
                   }else{
                   freq[word[i]-97]++; //lowercase
                   }
        }
    }

    for(i=0;i<26;i++){
         printf("The count of '%c' and '%c' is %d \n", i + 65, i + 97, freq[i]); //prints
    }
}
