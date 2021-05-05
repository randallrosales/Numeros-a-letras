#include <string>
#include <iostream>

using namespace std;

int main()
{
    string unidades[] = {"cero", "uno", "dos" ,"tres" ,"cuatro" ,"cinco" ,"seis" ,"siete" ,"ocho" ,"nueve","diez"};
    string especiales[] = {"once", "doce","trece","catorce", "quince","diezciseis", "diecisiete", "dieciocho", "diecinueve"};
    string decenas[] = {"veinte", "treinta","cuarenta","cincuenta", "sesenta","setenta", "ochenta", "noventa"};
    string centenas[] = {"ciento", "doscientos","trescientos","cuatrocientos", "quinientos","seiscientos", 
	"setecientos", "ochocientos", "novecientos"};
	
    int num, unid, dec, cent;
    
    cout << "\nIngrese un numero entre 0 al 999: \n";
    cin >> num;

if (num<0 || num>999)
{
	cout << "\nERROR: El numero no esta dentro del rango indicado\n";
}

else 
{

    if(num>=0 && num<11)
        cout << endl << unidades[num];
    else if(num<20)
        cout << endl << especiales[num-11];
    else if(num<100){
        unid = num % 10;
        dec = num/10;
        if(unid == 0)
            cout << endl << decenas[dec-2] ;
        else
            cout << endl << decenas[dec-2] <<" y " <<unidades[unid];
    }
    else
       {
       	if(num>99 && num<999)
		   {
        unid = num % 10;
        dec = num/10;
        cent = num % 100;
        
        cout << endl << centenas [cent] << decenas[dec] <<" y " <<unidades[unid];
    }
        
                   
	   }
}

    return 0;
}