#include <iostream>
#include <cstdlib>

using namespace std;
void insertion_sort(int [],int);
void merge_sort(int[],int,int);
void merge_(int[],int,int,int);
int main()
{
    int len=10;
    int ma[]={50,45,5,7,5,8,9,3,2,7};
    int ma1[1200];
    int rr;
    for(int i=0;i<1200;i++){
        rr=rand()%2000;
        ma1[i]=rr;
    }
    //insertion_sort(ma,len);
    merge_sort(ma1,1,1200
               );
    for(int i=0;i<1200;i++){
        cout<<ma1[i]<<endl;
    }
    return 0;
}

void insertion_sort(int arra[],int len){
    int key;
    int i;
    for(int j=1;j<len;j++){
        key=arra[j];
        i=j-1;
        while(i>0 && arra[i]>key){
            arra[i+1]=arra[i];
            i=i-1;
        }
        arra[i+1]=key;
    }
}
void merge_(int A[],int p,int q,int r){
    int n1,n2;
    n1=q-p+1;
    n2=r-q;
    int L[n1+1];
    int R[n2+1];
    for(int i=0;i<=n1;i++){
        L[i]=A[p+i-1];
    }
    for(int j=0;j<=n2;j++){
        R[j]=A[q+j];
    }
    L[n1+1]=567567;
    R[n2+1]=568999;
    int i=1;
    int j=1;
    for(int k=p;k<=r;k++){
        if(L[i]<=R[j]){
            A[k]=L[i];
            i=i+1;

        }else if(A[k]=R[j]){
            j=j+1;
        }
    }
}
void merge_sort(int A[],int p,int r){
    int q=0;
    if(p<r){
        q=(p+r)/2;
        merge_sort(A,p,q);
        merge_sort(A,q+1,r);
        merge_(A,p,q,r);
    }
}
