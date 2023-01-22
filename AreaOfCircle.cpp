//
//  AreaOfCircle.cpp
//  myFirst
//
//  Created by Chaitanya Gadkari on 20/01/23.
//

#include<iostream>
using namespace std;

int main() {
    float r, area;
    cout<<"Enter Radius";
    cin>>r;
    area= 3.1425f * r * r;
    cout<<"Area of Circle is "<<area<<endl;
    
    return 0;
}

 // To get accurate value, include float with decimal(.0) ie 154 not 153.982.

#include<iostream>
using namespace std;

int main() {
    float r, area;
    cout<<"Enter Radius";
    cin>>r;
    area= float(22/7.0) * r * r;
    cout<<"Area of Circle is "<<area<<endl;
    
    return 0;
}
