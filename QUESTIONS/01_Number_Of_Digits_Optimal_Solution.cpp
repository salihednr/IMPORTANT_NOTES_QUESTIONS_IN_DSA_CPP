/*
Number Of Digits In Number
Constraint
Time Complexity Is Constant Derive Math Relation For It
log10(n)+1 will give number of digits log10(n) is double value so typecaste into integer
don't forget to add cmath header file
*/
#include<iostream>
#include<cmath>
using namespace std;
int numberOfDigits(int n);
int main(){
    int n;
    cin>>n;
    int dig=numberOfDigits(n);
    cout<<"Number Of Digits In "<<n<<" Is "<<dig<<endl;
    return 0;
}
//Number Of Digits
int numberOfDigits(int n){
    //Maths Equation For Number Of Digits
    return 1+(int)log10(n);
}
