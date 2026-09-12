
#include <iostream>
using namespace std; 

void printArray(const int numbers[], int size){
    for (int i = 0; i< size; i++){
        cout << numbers[i] << " "; 
    }
}
int main()
{
    int numbers[6] = {19,10,8,17,9,15};
    
    for (int i = 0; i < 6; i++){
        cout << "Index: " << i << ": " << numbers[i] << endl; 
    }

    return 0;
}