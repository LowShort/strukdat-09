/*
* Author : Muhammad Iqbal Alif Fadilla
* NPM : 140810180020
* Kelas : B
* Deskripsi : Reversing a word using Stack Array
* Tgl : 03 05 2019
*/

#include <iostream>
#include <string>
using namespace std;

const int maxElemen=255;
struct Stack{
	char isi[maxElemen];
	int TOP;
};
Stack S;

void createStack(Stack& S){
	S.TOP=-1;
}

void push(Stack& S, char elemenBaru){
	if(S.TOP==maxElemen-1){
		cout<<"Tumpukan sudah penuh"<<endl;
	}else{
		S.TOP++;
		S.isi[S.TOP]=elemenBaru;
	}
}

void pop(Stack& S, char& kata){
	if(S.TOP<0){
		cout<<"Tumpukan sudah kosong"<<endl;
	}else{
		kata=S.isi[S.TOP];
		S.TOP--;
	}
}

void reverse(Stack& S, char kata[]){
	// Pushing from stack
	for(int i=0; i<strlen(kata); i++)
	{
		push(S, kata[i]);
	}
	// Poping from stack			
	for(int i=0; i<strlen(kata); i++)
	{
		kata[i] = S.TOP;
		pop(S, kata[i]);
	}
}

int main(){
	char string[255];	
	char temp;
	createStack(S);
	
	cout << "Masukkan kata :"; cin.getline(string, 255);
	cout << "Kata : " << string << endl;
	
	reverse(S, string);
	
	cout << "Reversed string : " << string;
	
	return 0;
}