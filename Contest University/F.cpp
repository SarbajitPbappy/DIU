#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define s double
#define p(x) cout<<fixed<<setprecision(10)<<x<<endl
int main(){
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        s p1,p2,p3;
        cin>>p1>>p2>>p3;
        s a,b,c,A,B,C,S,R,r,x,y,z,X,Y,Z;
        a=p3+p1;b=p1+p2;c=p2+p3;
        C=acos((a*a+b*b-c*c)/(2*a*b));
        B=acos((a*a+c*c-b*b)/(2*a*c));
        A=acos((b*b+c*c-a*a)/(2*b*c));
        s cosA=cos(A),sinA=sin(A),cosB=cos(B),sinB=sin(B),cosC=cos(C),sinC=sin(C);
        x=sinA*p1;y=sinB*p2;z=sinC*p3;
        X=x/(x+y+z);Y=y/(x+y+z);Z=z/(x+y+z);
        S=0.5*(p1+p2+p3);
        R=sqrt(S*(S-p1)*(S-p2)*(S-p3))/S;
        r=(p1*p2*p3)/(4*pi*R*(X*p1+Y*p2+Z*p3));
        s area=pi*r*r;
        cout<<"Case "<<t<<": ";
        p(area);
    }
    return 0;
}
