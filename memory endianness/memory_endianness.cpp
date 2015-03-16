////////////////////////////////////////////////////////////////////////////////////
//Kumud Nepal
//Date: 03/15/2015
//Finding whether computer represents a memory address in big endian or little endian format
////////////////////////////////////////////////////////////////////////////////////


#include<iostream>

using namespace std;

// the main function

int main()
{
	
  
    unsigned short test = 1000; //0x3E8 in hex representation
	  
    //print memory address of stored hex test value
    cout<<"Address location of stored unsigned short 1000 (" <<hex<<test<<"): "<<dec<<&test<<endl;
  
    unsigned char *index= (unsigned char*)( &test);

    //check in which order the bytes are ordered to determine endian-ness
    if ((*index==0xe8)  && (*(index+1)==0x03))
        cout<<"Computer is little indian"<<endl;
    if((*index==0x03) && (*(index+1)==0xe8))
        cout<<"Computer is big endian"<<endl;
    
    return 0;
}


