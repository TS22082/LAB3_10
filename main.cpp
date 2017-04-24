//
//  main.cpp
//  _10_resizeArray
//
//  Created by Thomas Smith on 4/21/17.
//  Copyright © 2017 ts22082. All rights reserved.
//

#include <iostream>
using namespace std;

void dblArray(int array[], int size);

int main() {
    
    int numArr[] = {1,2,3,4,5};
    dblArray(numArr, 5);
}

void dblArray(int array[], int size){
    
    int doubleSize = size*2;
    int doubledArray[doubleSize];
    
    for (int i = 0; i < doubleSize; i++){
    
        if (i < size){
            
            doubledArray[i] = array[i];
        
        } else {
    
            doubledArray[i] = 0;
        }
    }
    
    for (int i = 0; i < doubleSize; i++){
        
        cout << doubledArray[i] << endl;
    }
}
