 /******************************************************************************
#                                 First Screening Test| Full Stack Developer | Tandemloop
#         Candidate Name:Kaustubh Ahire
#         Email:kaustubhahire779@gmail.com
          Programing Language: C++
# Problem-4:  Get the total count of number list in the dictionary which is multiple of [1,2,3,4,5,6,7,8,9]
    (examples)
    input: [1,2,8,9,12,46,76,82,15,20,30]
    Output:
        {1: 11, 2: 8, 3: 4, 4: 4, 5: 3, 6: 2, 7: 0, 8: 1, 9: 1}
# *******************************************************************************/
#include <iostream>
using namespace std;
int main(){
    int n,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter elements:\n";
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        if (arr[i]%1==0){
            p= p+ 1;
        }
        if (arr[i]%2==0){
            q= q+ 1;
    }
    if (arr[i]%3==0){
            r= r+ 1;
    }
    if (arr[i]%4==0){
            s= s+ 1;
    }
    if (arr[i]%5==0){
            t= t+ 1;
    }
    if (arr[i]%6==0){
            u= u+ 1;
    }
    if (arr[i]%7==0){
            v= v+ 1;
    }
    if (arr[i]%8==0){
            w= w+ 1;
    }
    if (arr[i]%9==0){
            x= x+ 1;
    }
    }
    cout<<"1:"<<p<<","<<"2:"<<q<<","<<"3:"<<r<<","<<"4:"<<s<<","<<"5:"<<t<<","<<"6:"<<u<<","<<"7:"<<v<<","<<"8:"<<w<<","<<"9:"<<x<<","<<endl;
}
