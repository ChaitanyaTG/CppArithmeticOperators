//
//  OverflowConcept.cpp
//  myFirst
//
//  Created by Chaitanya Gadkari on 21/01/23.
//

// if x=127 which is its maximum value as a character when incremented it goes from maximum value to the minimum value ie -128 because the range of char is from -128 to 127
#include<iostream>
using namespace std;

int main() {
    char x = 127;
    x++;
    cout<<(int)x<<endl;
    
    return 0;
}

// x is -128 which is the minimum value for char when decremented x will give the maximum value ie 127
#include<iostream>
using namespace std;

int main() {
    char x = -128;
    x--;
    cout<<(int)x<<endl;
    
    return 0;
}
