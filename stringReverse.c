#include<stdio.h>

void reverseLogic(char str[],int start, int end){
    char temp = '\0';

    //reverse first and last  element until middle element is reached
    while (start<end)
    {
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

void reverseEachWordOfString(char str[]){

    int length = 0;
    int temp_start=0;

    //logic to find the length of a string
    while (str[length] != 0)
    {
        length ++;
    }
    printf(" string length = %d \n", length);

    //logic to reverse entire array
    //reverseSpecificWord(str,0,length-1);

    
    //logic to reverse each word of a string:
    int temp_length = 0;
    while (temp_length <= length)
    {
        //reverse the word if space is detected
        if(str[temp_length] == ' ' || str[temp_length] == '\0' ){

            //skip reversing if length of string is ==1;
            if(temp_length == 0){
                //skip the execution of particular iteration
                continue;
            }

            //Here (Length-1) is space so pass the value from [temp_start to sub array length-1 i.e.. length -2 ]
            reverseSpecificWord(str,temp_start,temp_length-1);

            //current temp_length is at space, change the start value to next value of space i.e.. temp_length+1
            temp_start = temp_length+1;
            

        }
        temp_length++;
    }
    


    
}

void reverseWholeStrings(char str[]){

    int length = 0;

    //logic to find the length of a string
    while (str[length] != 0)
    {
        length ++;
    }
    printf(" string length = %d \n", length);
    reverseSpecificWord(str,0,length-1);

}

int main(){

    char word[] = "0123 4567 89";
    printf("\n input:  %s \n",word);


    reverseWholeStrings(word);  //reverse whole string
    //reverseEachWordOfString(word);  //reverse each word of a string

    printf("\n output: %s \n ",word);

    return 0;
}
