#include <iostream>
#include <cmath>
using namespace std;

float area(int a, int b, int c ){ //function area with arguments a,b,c 
    float p, area;
    p = (a+b+c) /2;
    area = sqrt((p*(p-a)*(p-b)*(p-c)));
    return area; 
}
int main(){
    int sides[2];
    cout << "Enter first parameter parameters : \n";
    cin >> sides[0];
    cout << "Enter second parameter parameters : \n";
    cin >> sides[1];
    cout << "Enter third parameter parameters : \n";
    cin >> sides [2];
    cout << "The area of the rectangle is " << area(sides[0], sides[1], sides[2]); // calls function area
    return 0; //kills program 
}