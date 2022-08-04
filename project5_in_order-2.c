#include <stdio.h>
#include <stdlib.h>
/*
Geonhee Choi:project5-> Modification of project2

Execute by argc,argv-> see the letter is upper or lower and then if it is true return to  1  and then  call the function also print" In order"
 see the letter is  upper or lower and the n if it is false to return 0 and then print "Not in order"





*/
int in_order(char *word); // define the in_order function  definition

int main(int argc, char *argv[])
{

   int order;  // state  variable

   if(argc==2) //if argument vector is 2
  {
  order=in_order(argv[1]); // call in_order function
   printf("Output:");
   if(order)  // if in order
  {
	printf("In order");
  }
  else  // if it is not in order
   {
	printf("Not in order");
   }
  }
   else

  printf("invalid input./a.out");// if anything does not be case

	return 0;

 }




int in_order(char *word) {



    char *p; //make pointer
    int up,lo, di; // variable for upper-letter,lower-letter, digit

    for(p=word + 1;*p!='\0';p++)  //loop to execute upper-letter,lower-letter,digit
	{
         if(*p>='A' &&*p<='Z')//upper-letter case
	 {
		up=1;  //upper flag is 1
	 }
	 else if(*p>='a'&& *p<='z')//lower-letter case

	{
          lo=1; //lower-flag is 1
	}
          else
	{
	di=1; // digit is 1
	}
   }

 if((up==1 &&lo==0&&di==0)||(up==0&&lo==1&&di==0))// if upper-letter or lower-letter case is true
	{
		return 1; //return to 1
	}
	else
	{
		return 0;//otherwise, return to 0
	}


}
