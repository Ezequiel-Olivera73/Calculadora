#include <iostream>
#include<math.h>
#include <cstdlib>
//este es un cambio nuevo
using namespace std;

int main ()
 {
	int b,h,opcion;
	double r,area;
	
	do{
	
	cout<<"\t\t\t\t***Calculadora de figuras***\t\t\t\t\n\n"<<endl;
	cout<<"1.triangulo"<<endl;
	cout<<"2.rectuangulo"<<endl;
	cout<<"3.circulo"<<endl;
	
	
	cin>>opcion;
	if (opcion!=1 && opcion!= 2 && opcion != 3)
	{
			cout<<"Error volver a intentar"<<endl;

exit(EXIT_FAILURE); // Funcion para salir del programa, existen otras pero por ahora con esta est� bien.

}
	switch(opcion){	
	case 1:{
	
	cout<<"Teclee su base "<<endl;
	cin>>b;
	cout<<"teclee su altura"<<endl;
	cin>>h;
	
	area=b*h/2;
	cout<<"su area es :"<<area<<endl;
	break;
	}	
	case 2:{
	    cout<<"teclee su base"<<endl;
	    cin>>b;
	    cout<<"tecle su altura"<<endl;
	    cin>>h;
	    area=b*h;
	    cout<<"Su area es:"<<area<<endl;
	break;
	}
	case 3:{
		cout<<"teclee su radio"<<endl;
		cin>>r;
		area=M_PI * pow(r,2);
		cout<<"su area es:"<<area<<endl;
		break;
	}
	
	
	default:
		cout<<"eres tonto o algo asi"<<endl;
}cout<<"prisione 0 para continuar, prisione 1 para salir"<<endl;
cin>>opcion;
}	while(opcion!=1);
cout<<"programa finalizado"<<endl;
	return 0;
}
