#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--)

    {

        int xa,ya,xp,yp,xh,yh;

        cin>>xa>>ya>>xp>>yp>>xh>>yh;

        int dis;

        dis=sqrt((xa-xp)*(xa-xp))+sqrt((ya-yp)*(ya-yp));

        if(xa==xh && ya==yh)

        {

            dis=0;

        }

        else if(xa==xh && xh==xp && ((yh<ya && yp<yh) || (yh>ya && yp>yh)))

        {

           dis=dis+2; 

        }

        else if(ya==yh && yh==yp && ((xh<xa && xp<xh) || (xh>xa && xp>xh)))

        {

           dis=dis+2 ;

        }

        cout<<dis<<endl;

    }

    return 0;

}
