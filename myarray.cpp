//安全数组
#include "stdafx.h"
#include <iostream>
using namespace std;

class myarray{
public:int *array;
	   int length;
public:myarray(int n);
	   ~myarray();
	   void setarray(int value,int pos);
	   int getarray(int pos);
	   bool issafe(int pos);
};

bool myarray::issafe(int pos){
	return(pos<this->length&&pos>=0);
}

myarray::myarray(int n){
	this->array=new int[n-1];
	this->length=n;
};

myarray::~myarray(){
	delete array;
};

void myarray::setarray(int value,int pos){
	if(this->issafe(pos)){
		this->array[pos]=value;
	}else
	{ 
		cout<<"sorry your position is illegal"<<endl;
	}
};

int myarray::getarray(int pos){
	if(this->issafe(pos)){
		cout<<this->array[pos];
		return(this->array[pos]);
	}else
	{
		cout<<"your position is illegal"<<endl;
		return 0;
	}
};


int main(){
	int number,index;
	myarray a(2);
	cout<<a.length<<endl;
	cout<<"get in 2 numbers"<<endl;
	for(int i=0;i<3;i++){
	cin>>number>>index;
	a.setarray(number,index);
	}
    a.getarray(1);
	cout<<endl;
	a.getarray(7);
	system("pause");
	return 0;
}
