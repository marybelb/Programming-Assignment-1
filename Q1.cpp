#include <iostream>
#include <cmath>

using namespace std; 

int main()
{
    //declaring the variables
    float x1, y1, x2, y2, x3, y3;
    float a, b, c, d; 

    //prompt the user for their input
    cout<<"Enter three x,y coordinates: ";
    //stores the user input into variables
    cin>>x1;
    cin>>y1; 
    cin>>x2;
    cin>>y2;
    cin>>x3;
    cin>>y3;

    //solves for the slope
    a = (y2-y1)/(x2-x1); 
    //solves for the line of the two points
    b = -1; 
    c = y1 - a*x1; 
    //solves for the distance between the line and point
    d = abs((a*x3)+(b*y3)+c)/sqrt((pow(a,2)+pow(b,2)));

    //print the final answer
    cout<<"The shortest distance for ("<<x3<<","<<y3<<") to the line composed of ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is " <<d<<endl; 

    return 0;
}
