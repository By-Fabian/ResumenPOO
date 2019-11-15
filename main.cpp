#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a=0;
    int b=0;
    int c=0;

    int *puntero1=&a;               //puntero inicilizado con direcion de a
    int *puntero2= nullptr;         //puntero incializado en 0
    int *puntero3= nullptr;         //puntero inicilizado en nullptr

    puntero1=&c;                    //el puntero1 ahora apunta c;
    puntero2=&b;                    //el puntero2 ahora apunta b;
    puntero3=&a;                    //el puntero3 ahora apunta a;
    puntero1=puntero3;              //el puntero1 ahora apunta hacia donde apunta p3

    *puntero1=1;                    //el valor de donde apunta es 1;
    *puntero2=2;                    //el valor de donde apunta es 2;
    *puntero3=3;                    //el valor de donde apunta es 1;

    cout<<*puntero1<<endl;          //imprime el valor de p1;
    cout<<*puntero2<<endl;          //imprime el valor de p3;
    cout<<*puntero3<<endl;          //imprime el valor de p2;

    string palabra="hola mundo";
    string &word=palabra;           //word ahora es palabra y viceversa;

    int *&puntero4=puntero3;        //puntero 4 ahora es lo mismo que puntero 3;

    int *punterodinamico;
    int *punterodinamicainicializado= new int;  //crea puntero dinamico;
    delete punterodinamico;                     //elimna puntero dinamico;

    //ararays:
    int a1[3]={1,2,3}; // array en las llaves va el tamaño y en los corchetes los valores;

    //matriz con arrays estatica:
    int matrizestatica[2][3]; //en las llaves va el numero de fila y columnas respectivamente;

    //matriz dinamica con arrays;
    int **matrizdinamica=new int*[4];           //donde va el 4 es el numero de filas
    for (size_t i=0;i<4;i++){
        matrizdinamica[i]=new int[5];           //donde va el numero 5 es el numero de columnas;
    }
    for (size_t i=0;i<4;i++){
        delete[]matrizdinamica[i];           //ddestruye las columnas dinamicas;
    }
    delete[]matrizdinamica;                  //destruye las filas

    //vectores:

    vector<int> vec1;
    vector<string > vec2(5,"hola"); //5 veces es el numero de veces que se repite el valor de la derecha;
    vec2.push_back("hola"); //push back manda al final;
    vec1.insert(begin(vec1),1); //agregar al inicio;
    vec1.insert(end(vec1),1); //agregar al final;
    vec1.insert(end(vec1)+1,1); //agregar al segundo;
    vec1.size(); //retorna el tamaño;
    vec1.pop_back(); //elimina el ultimo;
    vec1.erase(begin(vec1)); //elimina el primero;

    for(auto i:vec1){
        cout<<i;
    }

    vector<vector<int>> matriz(4,vector<int>(5,6)); // 4 es filas , 5 es columnas y 6 es el valor que quieres que tenga la matriz;



}

int funcionconreferencia(int &hola);
int funcionsinreferencia(int hola);