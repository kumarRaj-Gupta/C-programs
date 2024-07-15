// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    // Program to take a string input and reverse it 
    
    char word[256];
    printf("Enter a word: ");
    scanf("%s",word);
    
    //finding length
    int l=0;
    char c=' ';
    
    while(c != '\0')
    {
        l++;
        c=word[l];
    }
    
    char rev_word[l];
    
    for(int i=0;i<l;i++)
    {
        rev_word[i]=word[l-i-1];
    }
        rev_word[l]='\0';
    printf("\nReversed String: %s",rev_word);
    return 0;
}
