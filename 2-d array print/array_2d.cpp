/////////////////////////////////////////////////////////////////////////////////////
//Kumud Nepal
//Date: 03/15/2015
//Implementation of the 2-d array functions and methods and the [] operator
//////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "array_2d.h"

array_2d::array_2d(unsigned &row, unsigned &col)
{
    row_ = row;
    col_ = col;:
    
	//creating 2d array
    array_pointers = new double*[row];
    for(int j = 0; j < row; j++)
        array_pointers[j] = new double[col];

}

//destructor frees the memory on the heap
array_2d::~array_2d()
{
    delete [] array_pointers;
}

//defining the [] operator
double* array_2d::operator [](unsigned &row)
{
    return *(this->array_pointers+row);  //allows to access/add element in that index
}


