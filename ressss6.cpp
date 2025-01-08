#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
	int pilih;
	do{
	
	
	cout<<endl;
	cout<<"Pilih"<<endl;
	cout<<"1. Write your wish!"<<endl;
	cout<<"2. open wish!"<<endl;
	cout<<"3. Remove all wish!"<<endl;
	cout<<"4. Exit"<<endl;
	cin>>pilih;
	cin.ignore();
	system("cls");
	
	switch(pilih){
		case 1:{
			
		ofstream testFile2("yourwish.txt", ios::app);
		if (!testFile2){
		cout<<"cannot open!"<<endl;
		return 1;
		}
		
		string input;
		cout<<"Tulis harapan kamu!"<<endl;
		getline(cin,input);
		cout<<endl;
		
		testFile2<<input<<endl;
		testFile2.close();
		system("cls");
		cout<<"DONE!"<<endl;
		cout<<endl;
		cout<<"I hope your dream become true :3"<<endl;
			break;
		}
		
		case 2:{
			
			ifstream opFile("yourwish.txt");
			if(!opFile){
				cout<<"cannot open! check file name again!"<<endl;
			}
		string open;
		while(getline(opFile,open)){
			cout<<open<<endl;
		}	
			break;
		}
		
		case 3:{
			const char* fileName = "yourwish.txt";
			
			ofstream opF(fileName, ios::trunc);
			if (!opF){
				cout<<"cannot open!"<<endl;
				return 1;
			}
			opF.close();
			system("cls");
			cout<<"all your wish has been removed!"<<endl;
			cout<<endl;
			break;
		}
		
	}
		
	}while(pilih !=4);
		
	return 0;
}
