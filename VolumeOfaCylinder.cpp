//
//  VolumeOfaCylinder.cpp
//  myFirst
//
//  Created by Chaitanya Gadkari on 20/01/23.
//


#include<iostream>
#include<math.h>

using namespace std;

int main() {
    float volume, radius, height;
    cout<<"Enter Radius and Height";
    cin>>radius>>height;
    volume = 3.1452f * radius * radius * height;
    cout<<"The volume of a Cylinder is "<<volume<<endl;
    
    return 0;
    
}
