//
//  FindingTheInitialSpeedOfVelocity.cpp
//  myFirst
//
//  Created by Chaitanya Gadkari on 20/01/23.
//

#include<iostream>
#include<math.h>

using namespace std;

int main() {
    
    int u, v, a;
    float speed;
    cout<<"Enter 3 numbers";
    cin>>u>>v>>a;
    speed = (v * v - u * u)/ (2*a);
    cout<<"Speed is "<<speed<<endl;
    
    return 0;
}
