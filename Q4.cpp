#include <iostream>

using namespace std; 

int main()
{
    //declaring the variables
    long num;
    long og_num;
    long reverse_num;
    long remainder; 

    //prompts the user for a number
    cout<<"Enter a number: ";
    //stores the user input in the variable
    cin>>og_num;

    //if else statement used to error check and returns false if user input is not an integer
    if (cin.fail()) 
        {
            cout<<"false\n"; 
        }
    else {

    //redefining the variables
    num = og_num;
    reverse_num = 0;

    //while statement that reverses the user's input
    while(num > 0)
        {
    remainder = num % 10; //finds the remainder
    reverse_num = (reverse_num * 10) + remainder;
    num = num/10;
        }
    
    //if else statement that prints out the final result
    if (og_num == reverse_num)
        {
            cout<<"The number "<<og_num<<" is a palindrome."<<endl;
        }
    else 
        {
            cout<<"The number "<<og_num<<" is not a palindrome."<<endl;
        }

    return 0; 
    }
}
