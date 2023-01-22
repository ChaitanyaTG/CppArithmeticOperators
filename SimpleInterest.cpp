//
//  SimpleInterest.cpp
//  myFirst
//
//  Created by Chaitanya Gadkari on 20/01/23.
//

#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int p, r, t, si;
    cout<<"Enter P R T";
    cin>>p>>r>>t;
    si = (p * r * t)/(100);
    cout<<"The Simple Interest is "<<si<<endl;
    
    return 0;
    
}
