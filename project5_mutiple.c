#include <stdio.h> 
#include<string.h>
/*
Geonhee Choi:project5 -> This code work to make to operate multiplication of 11  if  modulo is 1(odd number's position such as 1,3,5,  ->  subtract  their position  from array.
 if modulo is 0( even number's position 2,4,6)->Add their position from array. and then  find that is it multiple of 11 or is it not multiple of 11.




*/





int oper(char ch[], int n); //function definition  for operator function

int main() {
    char a[1001]; // Make the maximum of array as 1000+1
    int i=0;  //initialize i
    
    
    printf("Enter the value of x:\n");
    
    
    while((a[i++]=getchar())!='\n');//read line until new line and count array
    a[--i]=0; // In parallel, array reverse count from new line.
    
    if(oper(a,i)) // if oper function is correct
    {
        printf("%s is a multiple of 11",a);  
    }
    else // if oper function is not correct
    {
        printf("%s is not a multipe of 11",a);
    }
    
    return 0;
}
int oper(char ch[], int n) {
    int oper=0; //operation variable
    int j=0; //make the variable
     
    for(j=0;j<n;j++){ //loop to execute if else loop
        
        if(j%2==1) // if odd, ->subtract from array 
        oper -=(ch[j]-'0');
        if(j%2==0)//if even,->add from array
        oper +=(ch[j]-'0');
    }
    
    return oper%11==0; /*
Execute sum  of array  modulo 11 and return their value.  

*/


}
