#include<iostream>
#include<string>
#include<stdlib.h>
#include<ctime>
using namespace std;
//funkcija za izvlekuvanje na broevi
void spilBroeviKarti(string BroeviKarti[],int n,string BojaKarti[])
{
	int brojac=0,kar,bojaKar;
	string karti[100];
	//niza so dupla dolizna za cuvanje
	//na vrendsotite edna do druga
	for(int i=0;i<2*n;i++)
		karti[i]="*";
	//ciklusot se dvizi po dva elementi bidejki se polnat po dve vrednosti za skeoja karta
	for(int i=0;i<n*2;i=i+2)
	{
		//ciklus za generiranje na ralzini vrednosti
		do
		{
			brojac=0;
			srand(time(NULL));
			//random generiranje na karta
			kar=rand()%13;
			//random generiranje na boja
			bojaKar=rand()%4;
			for(int j=0;j<2*n;j=j+2)
				if(BroeviKarti[kar]==karti[j] && BojaKarti[bojaKar]==karti[j+1])
					brojac++;
		}while(brojac!=0);
		//zapisuvanje na resenijata vo nizata
		karti[i]=BroeviKarti[kar];//na i- ta pozicija se zapisuva brojot
		karti[i+1]=BojaKarti[bojaKar];	//na i+1 pozicija se zapisuva boja
	}
	cout<<"\n"<<endl;
	//pecatenje n avrendosgtite na ekran
	for(int i=0;i<n*2;i=i+2)
	{
		cout<<karti[i+1]<<"\t "<<karti[i]<<endl;
	}
	
	
}
int main()
{
	int n;
	//nizi od tocni vrendosti za spilot od karti
	string BojaKarti[]={"Pik","Srce","Lokum","Deteleina"};
	string BroeviKarti[]={"1","2","3","4","5","6","7","8","9","10","Jandar","Dama","Pop"};
	cout<<"\n Broj kombinacii : ";
	cin>>n;
	//povik na funkicjata
	spilBroeviKarti(BroeviKarti,n,BojaKarti);
}
