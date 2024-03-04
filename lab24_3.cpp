#include<iostream>
#include<set>
using namespace std;

//Write function count() here.

int count(int data[],int size){
	int loopcount = size;
	set<int> numberset;
	set<int>::iterator a;
	for(int i = 0;i<loopcount;i++){
		numberset.insert(data[i]);
	}//เอาข้อมูลใส่numberset
	int c=0;
	for(a = numberset.begin();a!= numberset.end();a++){
		c+=1;
	}
	return c;
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
