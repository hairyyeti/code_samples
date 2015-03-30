/////////////////////////////////////////////////////////////////////////////////////
//Kumud Nepal
//Date: 03/15/2015
//header file defining methods and functions of the class array_2d
//////////////////////////////////////////////////////////////////////////////////////

#ifndef array_2d_h_
#define array_2d_h_

#include<iomanip>
#include<iostream>


using namespace std;

class array_2d
{
public:
    
    array_2d(){} //default constructor
    array_2d(unsigned &row, unsigned &col); //constructor with arguments
    ~array_2d(); //destructor
    double* operator[](unsigned &row); 
    
private:
    friend ostream& operator<<(ostream&, array_2d const& a); //friend method that allows external functions to access private values
	int row_;
    int col_;
    double** array_pointers;  
    
    };

//<< operator defined and overloaded for the 2d array
inline ostream& operator<<(ostream& os, array_2d const& array2) //inline function definition
{``
  
    for( int x = 0; x < array2.row_; x++ )
      for( int y = 0; y < array2.col_; y++ )
         os <<right<<setw(7)<<setfill(' ')<< array2.array_pointers[x][y]<<' '; //using right justification and filling up with white spaces for better ouput on the console
         os<<endl;
    return os; 
}
#endif /* array_2d_h_ */
