//
//  main.cpp
//  _10_resizeArray
//
//  Created by Thomas Smith on 4/21/17.
//  Copyright © 2017 ts22082. All rights reserved.
//

#include <iostream>
using namespace std;

void dblArray(int array[], int size){

    int doubleSize = size*2;
    int doubledArray[doubleSize];
    
    for (int i = 0; i < size; i++){
    
        doubledArray[i] = array[i];
    }
    
    for (int i = size; i < doubleSize; i++){
        
        doubledArray[i] = 0;
    }
    
    for (int i = 0; i < doubleSize; i++){
    
        cout << doubledArray[i] << endl;
    }
}

int main() {
    
    int numArr[] = {1,2,3,4,5};
    
    dblArray(numArr, 5);
    
}
