//
//  BitwiseOperators.cpp
//  myFirst
//
//  Created by Chaitanya Gadkari on 21/01/23.
//

// And Operation(&) one and one operations are on and all everything else is 0 ie (0,0) (1,0) and (0,1)
#include<iostream>
using namespace std;

int main() {
    int x = 11, y = 5, z;
    z= x&y;
    cout<<z<<endl;
    
    return 0;
}

// OR Operation(|) They will be one if any of the bits is one if not, then they will be zero.
#include<iostream>
using namespace std;

int main() {
    int x = 11, y = 7, z;
    z= x | y;
    cout<<z<<endl;
    
    return 0;
}

// XOR Operation(^) if both bits are different then it will be one if not, then they are zero.
#include<iostream>
using namespace std;

int main() {
    int x = 11, y = 7, z;
    z= x ^ y;
    cout<<z<<endl;
    
    return 0;
}

// Left Shift Operation(<<) multiplies the value by 2 if left shifted by 1 or 4 when 2 is used and so on
#include<iostream>
using namespace std;

int main() {
    char x = 5, y;
    y = x << 1;
    cout<<(int)y<<endl;
    
    return 0;
}

//Right Shift Operation (>>) in this operation, it divides the value by 2 giving 10 when right shifted by 1 and gives 5 when dividing by 4 when right shifted by 2. (x*2i)
#include<iostream>
using namespace std;

int main() {
    char x = 20, y;
    y = x >> 1;
    cout<<(int)y<<endl;
    
    return 0;
}

//NOT Operation it changes state for eg.if the value is one then it will be zero and vice versa.
#include<iostream>
using namespace std;

int main() {
    char x = 5, y;
    y =~ x; // y= y~x
    cout<<y<<endl;
    
    return 0;
