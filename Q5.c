#include <stdio.h>
#include <stdlib.h>

void string_copy(const char source[], char destination[], int n);

int main()
{
    int length;
    char send[100];

    printf("Please input the string you want to send: ");
    scanf("%s", send);

    printf("Please input the length of your string: ");
    scanf("%d", &length);

    char recieve[length];

    string_copy(send,recieve,length);

    return 0;
}

void string_copy(const char source[], char destination[],int n){

    int i;

    for(i=0;i<n-1;i++){ //loops until n-1 to leave null in the end
        if(source[i]=='\0'){ //checks if the current position of element is null
            break;
        }
        destination[i]=source[i];
    }

    destination[i]='\0'; //adds the null character
    printf("%s",destination);

}

