#include<iostream>
using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
	int **pm_notas;
};

int main(){
int cantidad_estudiante=0,cantidad_notas=0;
float promedio=0,sumatoria_notas=0;
Estudiante estudiante;
system("COLOR D");
cout<<"Cuantos Estudiantes Desea Ingresar: ";
cin>>cantidad_estudiante;	
cout<<"Cuantas Notas Desea Ingresar: ";
cin>>cantidad_notas;	
	estudiante.pm_notas = new  int *[cantidad_estudiante];
	estudiante.codigo = new int[cantidad_estudiante];
	estudiante.nombre = new string[cantidad_estudiante];
		//este for es para ingresar los estudiantes
		
		for (int i=0; i<cantidad_estudiante;i++){
		estudiante.pm_notas[i] = new int[cantidad_notas]; 	
		}
	system("COLOR F1");
	cout<<"--------------Ingrese Notas--------------"<<endl;
	string nombre;

	for (int i=0;i<cantidad_estudiante;i++){
		cout<<"Codigo: ";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Nombre:";
		getline(cin,estudiante.nombre[i]);
			//ingresando las notas 
			for (int ii=0;ii<cantidad_notas;ii++){
			cout<<"Ingrese Nota "<<ii + 1<<": ";
			cin>>*(*(estudiante.pm_notas+i)+ii);
			}
	cout<<"------------------------------------"<<endl;
	}
system("cls");
	cout<<"--------------Mostrar Notas--------------"<<endl;
	//este for despliega los nombres y el codigo de los estudiantes
	for (int i=0;i<cantidad_estudiante;i++){
		cout<<"Codigo: "<<estudiante.codigo[i]<<".\tEstudiante:"<<estudiante.nombre[i]<<"."<<endl;
		//for que  despliegua las notas
		for (int ii=0;ii<cantidad_notas;ii++){
			cout<<"Nota ["<<ii + 1 <<"]: "<<*(*(estudiante.pm_notas+i)+ii);
		
				
			cout<<endl;
			
		}
		
		cout<<"------------------------------------"<<endl;
	}
		// Liberar el espacio reservado en memoria
		for (int i=0;i<cantidad_estudiante;i++){
		delete [] estudiante.pm_notas[i];
		}

	delete [] estudiante.pm_notas;
	delete[] estudiante.codigo;
	delete[] estudiante.nombre;

	system("PAUSE");
	return 0;
	
}





