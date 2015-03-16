////////////////////////////////////////////////////////////////////////////////////////////////
//Kumud Nepal
//Date: 03/15/2015
//program to find the number of occurences of "the" in a given text file using iterators
///////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include<vector>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream str("input_file.txt"); //input text file, change it to your file address
    
    //check file is valid or successfully opened
    if (!str.good()) {
        cerr << "File corrupt or not found" << endl;
        return 1;
    }
    
    istream_iterator<string> begin_iterator(str); //defining the starting iterator
    istream_iterator<string> end_iterator; //defining the end iterator
    istream_iterator<string> find_iterator;
    
    
    int count=0;       //count for number of "the"s
    
    while(1) //do until end iterator
    {
        find_iterator = find(begin_iterator, end_iterator, "the");
        if (find_iterator == end_iterator)
            break;
        else
        {
            begin_iterator = ++find_iterator;
            count++; //if found increase count
        }
    }
    
    cout << "The word \"the\" appears " << count << " times in the file \"input_file.txt\". \n";
    str.close();
    return 0;
}


