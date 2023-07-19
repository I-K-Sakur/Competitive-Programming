#include<bits/stdc++.h>
using namespace std;
int y=0;
double eps=1e-6;
double res(double t,double x1,double x2,double y1,double y2,double v1,double v2)
{
    double d1=sqrt((x1-t)*(x1-t)+(y1*y1));
    double d2=sqrt((x2-t)*(x2-t)+(y2*y2));
   double t1=d1/v1;
   double t2=d2/v2;
   double min_dis=t1+t2;
   return min_dis;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
   double m1,x1,x2,y1,y2,v1,v2;
    cin>>x1>>x2>>y1>>y2>>v1>>v2;
    double lo=x1,hi=x2;
    if(x2<x1){
        lo=x2;
        hi=x1;
    }
 while(hi-lo>eps)
 {
    double m1=lo+(hi-lo)/3.0;
    double m2=hi-(hi-lo)/3.0;
    if(res(m1,x1,x2,y1,y2,v1,v2)>res(m2,x1,x2,y1,y2,v1,v2))
    {
        lo=m1;
    }
    else if(res(m1,x1,x2,y1,y2,v1,v2)<res(m2,x1,x2,y1,y2,v1,v2))
    {
        hi=m2;
    }
    else{
        lo=m1;
        hi=m2;
    }
    double ans=res(lo,x1,x2,y1,y2,v1,v2);
    cout<<fixed<<setprecision(5)<<ans<<endl;
 }
 double ans=res(lo,x1,x2,y1,y2,v1,v2);
 //cout<<fixed<<setprecision(5)<<ans<<endl;
 
 }
 }