#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <windows.h> 
#include <time.h>
#define N 11 //define la longitud maxima que es posible para el numero
using namespace std;
//PROTOTIPOS
void unidades(char num[N],int x);
void unidades2(char num[N],int x);
bool decenas(char num[N],int x);
void centenas(char num[N],int x);

void gotoxy(int x, int y);
int main(){
	char num[N];
	bool b,a;
	int x,y=-1,i;
	system("color 1f");
	do{
		system("title Conversor de Numeros a letras");
		system("cls");
		fflush(stdin);
		do{a=true;
		b=true;
		cout<<"\nIngrese un numero entre cero y 999: ";
		cin.getline(num,N);
		x=strlen(num);
		
		}
		while(x<1||x>10);	
		fflush(stdin);
		cout<<"\n\n";
		while(x>=1)
		{
			y++;
			fflush(stdin);
			switch(x){
			case 1:if(a==true&&b==true)unidades(num,y);a++;if(num[0]=='0'){x=1;}
			break;
			case 2:b=decenas(num,y);
			if(num[y+1]=='0'){x=1;}
			break;
			case 3:centenas(num,y);
			break;
			case 4: cout<<"\nLo siento pero puedo convertir hasta 999\n";x=1;
			break;
			}
			
			cout<<"["<<x<<"]";
			--x;
			fflush(stdin);
		}y=-1;
		fflush(stdin);
		cout<<"\n\n\nSalir 0: ";cin>>i;}while(i!=0);
}

void unidades(char num[N],int x){
	switch(num[x]){//UNIDADES
	case '0':cout<<"cero"<<" ";break;
	case '1':cout<<"uno"<<" ";break;
	case '2':cout<<"dos"<<" ";break;
	case '3':cout<<"tres"<<" ";break;
	case '4':cout<<"cuatro"<<" ";break;
	case '5':cout<<"cinco"<<" ";break;
	case '6':cout<<"seis"<<" ";break;
	case '7':cout<<"siete"<<" ";break;
	case '8':cout<<"ocho"<<" ";break;
	case '9':cout<<"nueve"<<" ";break;
	}
}
void unidades2(char num[N],int x){
	switch(num[x]){//UNIDADES
	case '1':cout<<"once"<<" ";break;
	case '2':cout<<"doce"<<" ";break;
	case '3':cout<<"trece"<<" ";break;
	case '4':cout<<"catorce"<<" ";break;
	case '5':cout<<"quince"<<" ";break;
	case '6':cout<<"dieciseis"<<" ";break;
	case '7':cout<<"diecisiete"<<" ";break;
	case '8':cout<<"dieciocho"<<" ";break;
	case '9':cout<<"diecinueve"<<" ";break;
	}
}
bool decenas(char num[N],int x){
	bool r=true;
	switch(num[x]){//DECENAS
	case '1':if(num[x+1]!='0'){unidades2(num,x+1);r=false;}else{cout<<"diez"<<" ";}break;
	case '2':cout<<"veinte";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	case '3':cout<<"treinta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	case '4':cout<<"cuarenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	case '5':cout<<"cincuenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	case '6':cout<<"sesenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	case '7':cout<<"setenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	case '8':cout<<"ochenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	case '9':cout<<"noventa";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	}
	return r;
}
void centenas(char num[N],int x){
	switch(num[x]){
	case '1':(num[x+2]!='0')?cout<<"ciento"<<" ":cout<<"cien"<<" ";break;
	case '2':cout<<"doscientos"<<" ";break;
	case '3':cout<<"trescientos"<<" ";break;
	case '4':cout<<"cuatrocientos"<<" ";break;
	case '5':cout<<"quinientos"<<" ";break;
	case '6':cout<<"seiscientos"<<" ";break;
	case '7':cout<<"setecientos"<<" ";break;
	case '8':cout<<"ochocientos"<<" ";break;
	case '9':cout<<"novecientos"<<" ";break;

		}
		
	}