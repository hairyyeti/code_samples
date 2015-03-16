////////////////////////////////////////////////////////////////////////////////////////////////
//Kumud Nepal
//Date: 03/15/2015
//array_transpose.cpp - Main program that does the 2-D array transpose
///////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include <cstdlib>
#include <ctime>
#include<vector>
#include "transpose.h"

using namespace std;
 
int main() 
{
   int rows, columns;
   srand(time(0));

   rows= rand() % 10 + 1; //generating a random number of rows (between 1 and 10)
   columns = rand() % 10 + 1; //generating random number of rows and columns (between 1 and 10)

       
   vector<vector < int> >  v(rows);  
      
    for (int i=0; i<rows ; i++ )                                              
        for (int j=0; j<columns; j++ )                                        
            v[i].push_back ((rand() % 10+ 1));
           

        
    //printing out the original matrix
    cout <<"The original matrix: \n\n";
    int r = v.size();
    int c = v[0].size();
    for (int i=0; i<r ; i++ ) 
      {s
        for (int j=0; j<c ; j++ )
            cout << v[i][j] << " ";
        cout << endl;
    }
    
    transpose<int>(v); //transposing

    //printing the transposed matrix out
    cout << "\nThe transposed matrix: \n\n";
    int r2 = v.size();
    int c2 = v[0].size();
    for (int i=0; i<r2 ; i++ ) 
      {
        for (int j=0; j<c2 ; j++ ){
            cout << v[i][j] << " ";
            
        }
        cout<<endl;
      }
    return 0;
}

