////////////////////////////////////////////////////////////////////////////////////////////////
//Kumud Nepal
//Date: 03/15/2015
//array_transpose.h - header file that contains the templated function for transpose of a 2d array
///////////////////////////////////////////////////////////////////////////////////////////////

#ifndef transpose_h_
#define	transpose_h_

#include<vector>

using namespace std;

template <class T>
void transpose (vector <vector <T> > & twoDArray)
{   
    int rows = twoDArray.size();           
    int columns = twoDArray[0].size();        
    int temp = rows;
    bool more_rows_than_column=(rows>columns);
    
    //filling up the matrix with zeros to make it square
    
    switch (more_rows_than_column)
    {
      case false:        //add rows                           
        {
        temp = columns;
        vector<T> zero_vector(columns,0);     //adding a vector of width columns and filling it with zeros            
        for(int i=0; i<(columns-rows); i++)            
            twoDArray.push_back(zero_vector);
        }
       break;
    
      case true:         //add columns
        { 
          for(int i=0; i<rows;i++)            
          for(int j=0; j<rows-columns; j++)        
            twoDArray[i].push_back(0);
        }
        break;
      }

    //transposing now
    for( int i =0; i< temp; i++)                                   
    {                                                                
        for( int j= i+1; j<temp;j++ ){
            twoDArray[i][j] +=  twoDArray[j][i];
            twoDArray[j][i] =  twoDArray[i][j] - twoDArray[j][i];
            twoDArray[i][j] -= twoDArray[j][i];                   
        }
    } 
    
    //delete the added zeros
    if (rows>columns)                                                            
        for (int i=0; i<rows-columns; i++)
            twoDArray.pop_back();
    if (columns>rows)
        for(int i=0; i<rows;i++)
            for(int j=0; j<columns-rows; j++)
                twoDArray[i].pop_back();
        
    
};

#endif	/*transpose.h*/