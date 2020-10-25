// write a program to print following pattern
// Input : 5
// Output: 
// * * * * *  * * * * *
// * * * *      * * * *
// * * *          * * *
// * *              * *
// *                  *
// *                  *
// * *              * *
// * * *          * * *
// * * * *      * * * *
// * * * * *  * * * * *
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,j,rows;
    cout<<"Please enter the number of rows\n";
    cin>>rows;//get input from user
    //loop for display upper half part of the pattern
for(i=1; i<=rows; i++){
    for(j=i; j<=rows; j++){
     cout<<"*";//print star
  }
  for(j=1; j<=(2*i-2); j++){
     cout<<" ";//print space
  }
  for(j=i; j<=rows; j++){
     cout<<"*";//print star
  }
  cout<<"\n";
}
  //loop for printing lower half part  of the pattern
for(i=1; i<=rows; i++){
    for(j=1; j<=i; j++){
     cout<<"*";//print star
  }
  for(j=(2*i-2); j<(2*rows-2); j++){
     cout<<" ";//print space
  }
  for(j=1; j<=i; j++){
     cout<<"*";
  }
  cout<<"\n";//move to next line
  }
  getch();
  return 0;
  }
