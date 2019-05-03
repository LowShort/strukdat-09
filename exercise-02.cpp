/*
* Author : Muhammad Iqbal Alif Fadilla
* NPM : 140810180020
* Kelas : B
* Deskripsi : Reversing a word using Stack Linked List
* Tgl : 03 05 2019
*/

#include <iostream>
#include <string>
using namespace std;

const int maxElemen=255;
struct Stack{
	char isi[maxElemen];
	int TOP;
	Stack* next;
};
typedef Stack* pointer;

void createStack(Stack& stack){
	stack.TOP = -1;
}

void push(Stack& TOP, pointer pBaru){
	cout<<"Push Stack "<<endl;
	if (TOP==NULL) // Stack kosong
		TOP=pBaru;
	else { // Stack ada isi
		pBaru->next=TOP;
		TOP=pBaru;
	}
}

void Pop(Stack& TOP, pointer& pHapus){
	cout<<"Pop Stack "<<endl;
	if (TOP==NULL){
		cout<<"Stack kosong "<<endl;
		pHapus=NULL;
	}
	else if (TOP->next==NULL){
		pHapus=TOP;
		TOP=NULL;
	}	
	else {
		pHapus=TOP;
		TOP=TOP->next;
		pHapus->next=NULL;
	}
}


int main(){
	char string[255];	
	char temp;
	pointer p;
	createStack(S);
	
	cout << "Masukkan kata :"; cin.getline(string, 255);
	cout << "Kata : " << string << endl;
	
	reverse(S, p,	 string);
	
	cout << "Reversed string : " << string;
	
	return 0;
}