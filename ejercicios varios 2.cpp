#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

#define ARREGLO_MAX 100

int main() {
	int a;
	int annio;
	int annio2;
	int b;
	int c;
	int d;
	int dia;
	int diasemana;
	int e;
	string fecha;
	string fechas[ARREGLO_MAX];
	int i;
	int mes;
	int mes2;
	int size;
	bool v;
	cout << "Escriba la fecha a consultar" << endl;
	cout << "Ingrese la fecha en formato [dd/mm/aaaa]: " << endl;
	cin >> fecha;
	size = fecha.size();
	for (i=1;i<=size;i++) {
		fechas[i-1] = fecha.substr(i-1,i-i+1);
	}
	if (fechas[2]=="/" && fechas[5]=="/" && size<=10) {
		v = true;
		dia = (atof(fechas[0].c_str())*10)+(atof(fechas[1].c_str()));
		mes = (atof(fechas[3].c_str())*10)+(atof(fechas[4].c_str()));
		annio = (atof(fechas[6].c_str())*1000)+(atof(fechas[7].c_str())*100)+(atof(fechas[8].c_str())*10)+(atof(fechas[9].c_str()));
		mes2 = mes;
		annio2 = annio;
		if (mes==2 || mes==1) {
			mes = mes+12;
			annio = annio-1;
		}
		if (mes2>12) {
			if (v==true) {
				cout << "Mes inexistente." << endl;
				v = false;
			}
		}
		if (dia<=0 || mes2<=0 || annio2<=0) {
			cout << "Su fecha no existe." << endl;
			v = false;
		}
		if (annio==1582 && mes==10 && dia>=4 && dia<=15 && v==true) {
			cout << "Este dia fue suprimido para eliminar el desfase respecto al calendario Juliano, intente de nuevo con otra fecha." << endl;
			v = false;
		}
		if (dia>31 && v==true) {
			if (mes==13 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) {
				cout << "Este mes no posee mas de 31 días, intente de nuevo." << endl;
			}
			v = false;
		}
		if (dia>30 && v==true) {
			if (mes==4 || mes==6 || mes==8 || mes==11) {
				cout << "Este mes no posee mas de 30 días, intente de nuevo." << endl;
			}
			v = false;
		}
		if (mes2==2 && annio2%4!=0 && annio2%400!=0 && dia>28 && v==true) {
			cout << "Este mes no posee mas de 28 días, intente de nuevo." << endl;
			v = false;
		}
		if (mes2==2 && annio2%4==0 && annio2%400==0 && dia>29 && v==true) {
			cout << "Este mes no posee mas de 29 días, intente de nuevo." << endl;
			v = false;
		}
		if (annio2>3300 && v==true) {
			cout << "En el calendario Gregoriano se genera un desfase despues del año 3300, este programa no cubre este intervalo de tiempo. Por favor, intente de nuevo." << endl;
			v = false;
		}
		if (v==true) {
			a = int((13*(mes+1))/5);
			b = int(annio/4);
			c = int(annio/100);
			e = int(annio/400);
			cout << dia << " " << mes << " " << annio << endl;
			d = int(dia+a+annio+b-c+e)%7;
			if (d==0) {
				diasemana = 7;
			} else {
				diasemana = d;
			}
			switch (diasemana) {
			case 1:
				cout << "El dia de la semana correspondiente a la fecha ingresada es: Domingo" << endl;
				break;
			case 2:
				cout << "El dia de la semana correspondiente a la fecha ingresada es: Lunes" << endl;
				break;
			case 3:
				cout << "El dia de la semana correspondiente a la fecha ingresada es: Martes" << endl;
				break;
			case 4:
				cout << "El dia de la semana correspondiente a la fecha ingresada es: Miércoles" << endl;
				break;
			case 5:
				cout << "El dia de la semana correspondiente a la fecha ingresada es: Jueves" << endl;
				break;
			case 6:
				cout << "El dia de la semana correspondiente a la fecha ingresada es: Viernes" << endl;
				break;
			case 7:
				cout << "El dia de la semana correspondiente a la fecha ingresada es: Sábado" << endl;
				break;
			}
		}
	} else {
		cout << "Ingrese el formato requerido." << endl;
	}
	return 0;
}

