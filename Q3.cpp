#include <iostream>
#include <string.h>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
   
   //declare the variables
   int num1,num2,numa,numb;
   char hex1[100];
   char hex2[100];
   int i=0;
   
   //prompt the user for 2 positive integers
    cout<<"Enter two positive integers: ";
    cin>>numa>>numb;
    int value1 = numa;
    int value2 = numb;

    if (numa > numb)
    {
        num1 = numb;
        num2 = numa;
    }
    else
    {
        num1 = numa;
        num2 = numb;
    }
   
   
   //while loop for converting the first input from decimal to hexidecimal 
   while(num1!=0) {
      int temp = 0;
      temp = num1 % 16;
      if(temp < 10) {
         hex1[i] = temp + 48; //gives the ascii value of the hexidecimal from 0 to 9
         i++;
      } else {
         hex1[i] = temp + 55; //gives the ascii value hexidecimal from a to f
         i++;
      }
      num1 = num1/16;
   }
   
    //while loop for converting the second input from decimal to hexidecimal 
   int j=0;
   while(num2!=0) {
      int temp = 0;
      temp = num2 % 16;
      if(temp < 10) {
         hex2[j] = temp + 48; //gives the ascii value of the hexidecimal from 0 to 9
         j++;
      } else {
         hex2[j] = temp + 55; //gives the ascii value hexidecimal from a to f
         j++;
      }
      num2 = num2/16;
   }


   int distance = 0;
   for(int i=0; j!=i; i++)
   {
      if(hex1[i] != hex2[i])
         distance++; //add to the value if characters are not equal
   }
    cout<<endl<<"Hamming Distance between "<<value1<<" and "<<value2<<" when numbers are in hex format is: "<<distance<<endl; //print the answer
   

  return 0;
}
