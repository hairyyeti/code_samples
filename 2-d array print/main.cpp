//////////////////////////////////////////////////////////////////////////////////////////
//Kumud Nepal
//Date: 03/15/2015
//Main code that allows creation of a 2-d array and tests the <<, [] operators overload
//////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<math.h>
#include"array_2d.h"


using namespace std;

int main()
{
    unsigned numRows = 10; //creating a 10x10 matrix (2-d array)
    unsigned numCols= 10;
    array_2d twoDArray(numRows,numCols);
    
    double* ptrsArray;
    
    //assigning random values to the array
    for( int i = 0; i < numRows; ++i )
    {
        ptrsAarray = twoDArray[i];
        for( int j = 0; j < numCols; j++ )
        {
          double prod = j * numCols;
          ptrsAarray[j] = i + prod * (pow(-1.0,j)); //filling in random positive and negative values, using (-1)^n to alternate btn (+)ve and (-ve) numbers
        }
      }
    cout << twoDArray << endl; //print the array now
return 0;
}