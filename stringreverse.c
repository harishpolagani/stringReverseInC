#include<stdio.h>
#include<string.h>

int main(){
  char name[20]="hello";
  
//string functions:

  //using string fuctions
  printf(" name = %s ",name);
  strrev(name);
  printf(" name reversal= %s ",name);
  strrev(name);

 //string length
  printf("string length = %d ",strlen(name));

  //string concatination
  printf("string concatination ==> %s",strcat(name,"harish"));

//without using direct functions

 //string count
 int count = 0,begin=0;
 char copyname[20] = "\0";
 char copyname2[20] = "\0";

 while(name[begin++] != '\0')
    count++;

 begin=0;
 printf("\n string length: %d name= %s ",count,name);

 //string rev and copy to other array
 int lencount = count;
 while(begin < count)
  {
      copyname[begin] = name[(lencount-1)-begin];
      //printf(" %c ",copyname[begin]);
      begin++;
  }
  begin = 0;
  copyname[count]='\0';

  printf(" copy name = %s ",copyname);

  //string reversal and paste to same array
  //Here first we need to coopy that array then need to reverse the same
  
  lencount = count;
  int current=0;
  printf(" name before change =%s ",name);
 while(begin < count)
  {
      current = (lencount-1)-begin;
      if(begin<=current)
      {
        copyname2[begin]=name[begin];
        name[begin] = name[current];
      }
      else{
          name[begin] = copyname2[current];
      }

      //printf(" %c ",name[begin]);
      begin++;
  }
  begin = 0;
  name[count]='\0';
  printf(" new name after reversal =%s ",name);

    return 0;
}
