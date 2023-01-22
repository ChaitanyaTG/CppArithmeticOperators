//
//  DistanceBetweenTwoPoints.cpp
//  myFirst
//
//  Created by Chaitanya Gadkari on 20/01/23.
//

#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int x1, x2, y1, y2;
    float distance;
    cout<<"Enter x1, x2, y1, y2 values to calcualte distance";
    cin>>x1>>x2>>y1>>y2;
    distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    cout<<"The Distance is "<<distance<<endl;
    
    return 0;
    
}
