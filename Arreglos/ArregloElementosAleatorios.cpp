#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

//Prototipos
int NumeroAleatorio(int, int);
void LlenarArreglo(int A[], int);
void PresentarArreglo(int A[], int);
void intercambiar(int &, int &);
void OrdenarArregloAscendente(int A[], int);



{

    int tamA=5;
	int A[tamA];

    //Semilla para números aleatorios
    srand(time(NULL));

    LlenarArreglo(A, tamA);
	PresentarArreglo(A, tamA);
    OrdenarArregloAscendente(A, tamA);
    PresentarArreglo(A, tamA);

	system("pause");
    return 0;
}


int NumeroAleatorio(int li, int ls)
{

	return li + rand()%(ls+1-li);
}

void LlenarArreglo(int A[], int tamA)
{
  for(int i=0;i<tamA;i++)
  {
  	A[i] = NumeroAleatorio(0, 10);
  }
}

void PresentarArreglo(int A[], int tamA)
{
  for(int i=0;i<tamA;i++)
  {
  	cout << "A["<<i<<"]: "<< A[i]<<endl ;
  }
}

void intercambiar(int &nro1, int &nro2)
{
    int aux=nro1;
    nro1 = nro2;
    nro2 = aux;
}

void OrdenarArregloAscendente(int A[], int tamA)
{
    for(int i=0;i<tamA-1;i++)
    {
        for (int j=i+1;j<tamA;j++)
        {
            if(A[i]>A[j])
            {
                intercambiar(A[i],A[j]);
            }
        }

    }
}
