#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct data{
	string nama;
	int umur;
	string film;
};
		
int main(){
	int pilih;
	
	
	do{
	cout<<"Pilih"<<endl;
	cout<<"1. Input"<<endl;
	cout<<"2. Read"<<endl;
	cout<<"3. Delete"<<endl;
	cout<<"4. Exit"<<endl;
	cin>>pilih;
	system ("cls");
	
	switch(pilih){
		case 1:{
	
	data data1;
	cin.ignore();
	cout<<"Nama : "<<endl;
	getline(cin,data1.nama);
	cout<<"Umur : "<<endl;
	cin>>data1.umur;
	cin.ignore();
	cout<<"Film favorit : "<<endl;
	getline(cin,data1.film);
	
	ofstream inFile2("Yourfilm.txt", ios::app);
	if (!inFile2){
		cout<<"cannot open!"<<endl;
		return 1;
	} 
	
	inFile2<<"Nama : "<<data1.nama<<endl;
	inFile2<<"Umur : "<<data1.umur<<endl;
	inFile2<<"Film favorit : "<<data1.film<<endl;
	inFile2<<endl;

	
	inFile2.close();
	system("cls");
	
	break;
}
	case 2: {
			ifstream seeFile("Yourfilm.txt");
			if (!seeFile){
				cout<<"cannot open file!"<<endl;
				return 1;
			}
			string open;
			while(getline(seeFile, open)){
				cout<<open<<endl;
			}
			break;
		}	
	case 3:{
		const char* filename = "Yourfilm.txt";
		ofstream opFl(filename, ios::trunc);
		if(!opFl){
			cout<<"cannot open!"<<endl;
		}
		
		opFl.close();
		system ("cls");
		cout<<"All your data has been removed!"<<endl;
		cout<<endl;
		break;
	}
	}
		
		
	}while (pilih !=4);
	return 0;
}
