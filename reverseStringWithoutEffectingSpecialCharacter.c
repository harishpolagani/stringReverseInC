#include<stdio.h>

 int isAlphabet(char ch){

    return ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ) ;
}

void reverseLogic(char str[],int start, int end){
    char temp = '\0';

    //reverse first and last  element until middle element is reached
    while (start<end)
    {
        // check if the letter is special character if it is special character skip the value to next.
        while( (! isAlphabet(str[start]) ) && ( start < end ) )//Here isALphabet retruns zero if false so !0 =1 ==>  if(1)
        {
            start++;
        }
        while( (! isAlphabet(str[end]) ) && ( start < end ) )//Here isALphabet retruns zero if false so !0 =1 ==>  if(1)
        {
            end--;
        }
            
        //if(! isAlphabet(str[end]))
        //    end--;
        //Perform the swap operation only on 
        temp = str[end];
        str[end--] = str[start];
        str[start++] = temp;
        //end--;
        //start ++;
    }
    //printf("\n intermittent: %s \n ",str);
    
}

void reverseSpecificWord(char str[], int start, int end){
    
    reverseLogic(str,start,end);
    
}



void reverseWords(char str[]){

    int length = 0;

    //logic to find the length of a string
    while (str[length] != 0)
    {
        length ++;
    }
    //printf(" string length = %d \n", length);
    reverseSpecificWord(str,0,length-1);

}

int main(){

    char word[] = "a....bcdee^f";
    printf("\n input:  %s \n",word);


     reverseWords(word);  //reverse whole string
    //reverseEachWordOfString(word);  //reverse each word of a string

    printf("\n output: %s \n ",word);

    return 0;
}
