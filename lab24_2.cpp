#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void printList(list<string> s){
	list<string>::iterator i;
	for( i = s.begin(); i != s.end(); i++){
		cout << *i << " ";
	}		
	cout << "\n";	
}

int main(){
	
	list<string> line_up;
	list<string>::iterator loc;
	
	line_up.push_back("Alice");//Alice ปวดขี้และมายืนรอคิวเป็นคนแรก
	line_up.push_back("Bob");//Bob มาต่อแถว
	
	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(loc,"Oscar");//Oscar มาแซงแถวหน้า Bob//Alice Oscar Bob
	
	//Luffy, Sanji, Nami มาต่อแถวด้านหลังตามลำดับ
	line_up.push_back("Luffy");
	line_up.push_back("Sanji");
	line_up.push_back("Nami");//Alice Oscar Bob Luffy Sanji Nami
	
	//2 คนที่หัวแถวได้เข้าไปในส้วมแล้ว
	line_up.erase(line_up.begin());
	line_up.erase(line_up.begin());//Bob Luffy Sanji Nami
	
	//Narutu มาแทรกแถวหลัง Luffy
	list<string>::iterator current = line_up.begin();
	for(int i=0;i<2;i++)current++;
	line_up.insert(current,"Narutu");//Bob Luffy Narutu Sanji Nami
	//Prayath ท้องเสียปวดขี้สุด ๆ เลยมาแทรกแซวหน้าสุด
	line_up.push_front("Prayath");//Prayath Bob Luffy Narutu Sanji Nami
	//Tony ยอมไม่ได้เลยมาแทรกด้านหลัง Prayath
	current = line_up.begin();
	for(int i=0;i<1;i++)current++;
	line_up.insert(current,"Tony");//Prayath Tony Bob Luffy Narutu Sanji Nami
	//Bob ทนไม่ไหวเลย เลยเปลี่ยนใจออกไปขี้ที่อื่น
	current = line_up.begin();
	for(int i=0;i<2;i++)current++;
	line_up.erase(current);//Prayath Tony Luffy Narutu Sanji Nami 
	//3 คนที่หัวแถวได้เข้าไปในส้วมแล้ว
	for(int a=0;a<=2;a++){
		current = line_up.begin();
		line_up.erase(current);
	}
	//Write your code here
	
	printList(line_up);
		
	return 0;
}
