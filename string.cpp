#include<iostream>
using namespace std;

 int main(){
 	
 string A,B,Z;
 cout<<"enter A: ";
 cin>>A;
 cout<<"enter B: ";
 cin>>B;

 cout<<"the size of A "<<A.size()<<"\t"<<"the size of B "<<B.size()<<endl	;
 cout<<"the concatenated string "<<A+B<<endl;
 Z=A;
 A=B;
 B=Z;
 cout<<"the modified strings : "<<" A : "	<<A<<"\t"<<" B : "	<<B<<endl;
 	
	
 	
 	
 	
 	
 	
 }