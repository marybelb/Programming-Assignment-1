#include <iostream>
using namespace std;

void converter(char oldChar,int offset)
{

    string newChar;
    //ascii value of the character
    int val = int(oldChar);
    
    //if statement that checks if the converted value is outside the ascii table 
     if (val + offset > 127)
     {   
         cout<<"character out of range "<<endl;
         return ;
     }

    //if else statement that converts the character input
     if (offset == 0 & val>64 & val<91) //converts upper case to lower case
        { 
           newChar = char(val + 32);
        }
        else if (offset == 0 & val>96 & val<123) //converts lower case to upper case
        { 
          newChar = char(val - 32);
        }
        else if (offset == 0 & val<64 & val>91 & val<96 & val>123) //keep letter case as is
        { 
           newChar = char(val);
        }
        else
        {
            newChar = char(val + offset);
        }
    //prints the new character
    cout<<"New character: "<<newChar<<endl;
}

int main()
{ 
    //declaring the variables
     char c;  
     int  o;  
     //promts the user for a character input and an offset input
     cout << "Enter a character: ";
     cin >> c;
     cout << "Offset (enter 0 to convert case): ";
     cin >> o;

    //calls the function
    converter(c, o); 

    return 0;
}
