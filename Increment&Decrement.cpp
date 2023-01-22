//
//  Increment&Decrement.cpp
//  myFirst
//
//  Created by Chaitanya Gadkari on 21/01/23.
//

// for post increment,answer will be different. i = 11 and j = 10
// first assign(=) and then increment(++)
#include<iostream>
using namespace std;

int main() {
    int i = 10, j;
    j=i++;
    cout<<i<<endl;
    
    return 0;
}

// another post increment
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int i = 10, j = 15, k;
    k = j*i++;
    cout<<i<<" "<<j<<endl;
    return 0;
}

// For Pre increment, the values will be same for i and j ie 6 and 6.
// First increment(++) and then assign(=)
#include<iostream>
using namespace std;

int main() {
    int i = 15,j;
    j = ++i;
    cout<<i<<endl;
    return 0;
    
}

// Another Example on Pre increment
// j multiply with i++ ie 10+1=11, so 11*15 giving k=165
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int i = 10, j = 15, k;
    k = j* ++i;
    cout<<i<<" "<<j<<" "<<k<<endl;
    return 0;
}

//Pre decrement
// multiply j with --i ie 10-1=9 which gives us 15*9 ie k = 135
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int i = 10, j = 15, k;
    k = j* --i;
    cout<<i<<" "<<j<<" "<<k<<endl;
    return 0;
}

// Post Decrement
// j is 10 so multiplying with i gives us 150 but i is incremented giving 11 so the values are i = 11, j = 15 and k = 150
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int i = 10, j = 15, k;
    k = j* i++;
    cout<<i<<" "<<j<<" "<<k<<endl;
    return 0;
}

