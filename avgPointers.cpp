#include <iostream>

using namespace std;

int *getAvg(int * total, int * nums);


int main(void)
{
    
    int * b = new int();
    int * i = new int(0);
    int * sum= new int(0);
    
    cout<<"Enter a series of positive numbers to find the average of." << endl << "Entering a negative number or zero will stop input." <<endl; //Tells the user to enter the numbers that they want to average
    
        do{
          cin>>*b; //
          if(*b>0){
              *sum= *sum + *b; //since sum is equal to 0, adding the input of b while it is greater than 0 will add each input together.
              (++*i);
          		  }
          		  
   		  } 
   		while(*b>0);

   			getAvg(sum, i); // passes ints sum and i into the getAvg func
    
    		return 0;
    
}

int *getAvg(int *total, int *nums){ // this func will get and print out the average of the user entered numbers.
        
        int avg = ( *total / *nums);
        
            cout << avg;
   
    }
