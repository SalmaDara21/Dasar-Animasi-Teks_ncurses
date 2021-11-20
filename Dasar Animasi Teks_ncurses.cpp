#include <ncurses/ncurses.h>
#include <iostream>
#include <windows.h>
using namespace std;


	//sleep () = fungsinya untuk menghentikan program berjalan dalam satuan millisecond contohnya
	// contoh : sleep (1000) maka program berhenti selama 1 detik
	// usleep() : Microsecond ; usleep(100000) dalam satuan mikrosecond 100000 jadi 0.1 detik jadi program dijeda selama 0.1 detik
	//initscr();
	
	//printw ("$");
	//refresh(); //untuk menampilkannya
	//Sleep(1000);
	
	//mvprintw(1,1,"$");
	//refresh;
	//Sleep(1000);
	
	//mvprintw(2,2,"$");
	//refresh;
	//Sleep(1000);
	
	//mvprintw(3,3,"$");
	//refresh;
	//Sleep(1000);
	
	//mvprintw(2,4,"$");
	//refresh;
	//Sleep(1000);
	
	//mvprintw(1,5,"$");
	//refresh;
	//Sleep(1000);
	
	//mvprintw(0,6,"$");
	//refresh;
	//Sleep(1000);
	
	//for (int i = 0 ; i<10; i++){
		//mvprintw(i,i,"$");
		//refresh();
		//Sleep(1000);
	//}
	//for (int i = 10 ; i>0; i--){
		//mvprintw(i,i+2,"$");
		//refresh();
		//Sleep(1000);
		
void animasi(char kata[100])
{
	for (int i= 0; i< strlen(kata);i++) //strlen untuk mengitung kata yang akan dimasukkan nanti
	{
		cout<<kata[i];
		Sleep (2000);
	}
}

int main(){
	system("color 01");
	animasi("halooo");
	system("color B3");
	animasi("halooo");
	Sleep(1000);
	system("color B9");
	Sleep(1000);
	}
