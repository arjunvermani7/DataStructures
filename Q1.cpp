#include <iostream>
using namespace std;


template <class T>

int linearsearch(T array[],int  n, T tosearch){

	for(int i=0; i<n; i++){
		if(array[i] == tosearch){
			return i;
		}
	}
	return -1;
}
   template <class Y>

 int binarysearch(Y array[], int n, Y tosearch){
     int be =0;
     int en =n-1;

     while(be <= en){
     	int mid = (be+en)/2;

     	if(array[mid] == tosearch){
     		return mid;
     	} else if (array[mid] > tosearch){
     		en= mid-1;
     	} else{
     		be = mid +1;
     	}
     }
     return -1;
 }



 int main(){

 int array [] ={1,2,3,4,5};

 int n= sizeof(array)/sizeof(array[0]);

 char ar []={'1','2','4','5','6'};
 int n1 = sizeof(ar)/sizeof(ar[0]);

 int choice;
 cout<<"Enter your choice "<<endl;
 cout<<"1. For the linear Search"<<endl;
 cout<<"2. For the binarysearch Search"<<endl;
 cin>>choice;

switch (choice){

  case 1:	
int tosearch;
cout<<"Enter integer to be searched ";
cin>>tosearch;

char tosearch1;
cout<<"Enter character to be searched ";
cin>>tosearch1;

  cout<<"Index of Integer is "<<linearsearch<int>(array,n,tosearch)<<endl;
  cout<<"Index of Character is "<<linearsearch<char>(ar,n1,tosearch1)<<endl;

  break;

  case 2:
  int search;
cout<<"Enter integer to be searched ";
cin>>search;

char search1;
cout<<"Enter character to be searched ";
cin>>search1;

cout<<"Index of Integer is "<<binarysearch<int>(array,n,search)<<endl;
cout<<"Index of Character is "<<binarysearch<char>(ar,n1,search1)<<endl;

 break;

 default :
    cout<<"Code doesn't match any cases "<<endl;
 }
}