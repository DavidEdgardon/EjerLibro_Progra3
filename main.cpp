#include <iostream>
using namespace std;

void ordenar( int arr[]){
        int Temp;
        int lon=5;
        for(int i=0;i<lon;i++)
            for(int j=0;j<lon-1;j++)
                if(arr[j]<arr[j+1]){// cambia "<" a ">" para cambiar la manera de ordenar
                    Temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=Temp;}

        for(int i=0;i<lon;i++)
            cout<<arr[i]<<endl;
}

int main() {
    int opc;
    do{
    cout << "------MENU------" <<endl;
    cout << "1. Mayor a menor" << endl;
    cout << "2. Par" << endl;
    cout << "3. Multiplo" << endl;
    cout << "4. Kilometraje" << endl;
    cout << "5. Comision por ventas" << endl;
    cout << "6. Tarifa por hts trabajadas" << endl;
    cout << "7. Palindromo" << endl;
    cout << "8. Diametro, Circunferencia, Area" << endl;
    cout << "Ingrese la opcion:" << endl;
    cin >> opc;

    switch (opc) {
        case 1: {
            int n;
            int arr[5];
            for(int i=0;i<5;i++){
                cout<<"Ingresa el numero: ";
                cin>>n;
                arr[i]=n;
            }
            cout<<endl<<"Numeros ordenados: "<<endl;
            ordenar(arr);
            break;
        }
        case 2: {
            int par;
            cout << "Ingrese un numero: ";
            cin >> par;
            if (par % 2 == 0) {
                cout << " Es par" << endl;
            } else {
                cout << " Impar" << endl;
            }
            break;
        }
        case 3: {
            int mul1, mul2;
            cout << "Ingrese el primer numero: ";
            cin >> mul1;
            cout << "Ingrese el segundo numero: ";
            cin >> mul2;
            if (mul2 % mul1 == 0) {
                cout << "Es multiplo" << endl;
            } else {
                cout << "No es multiplo " << endl;
            }
            break;
        }
        case 4: {
            double kilo = 0, litro = 0;
            double klp;
            while (kilo != -1) {
                cout << "Escriba los kilometros usados; (-1 para salir): ";
                cin >> kilo;
                if (kilo == -1) {
                    break;
                }
                cout << "Escriba los litros: ";
                cin >> litro;
                cout << " KPL en este reabastecimiento: " << (klp = kilo / litro) << endl;
                cout << "TOTAL KPL: " << klp << endl;
            }
            break;
        }
        case 5: {
            int vts;
            while (vts != -1) {
                cout << "Escriba las ventas en dolares; (-1 para salir): ";
                cin >> vts;
                if (vts == -1) {
                    break;
                }
                vts = (vts / 100) * 9 + 200;
                cout << "El salario es: " << vts << endl;
            }
            break;
        }
        case 6: {
            float hrs = 0, tar = 0;
            while (hrs != -1) {
                cout << "Introduzca las horas trabajadas; (-1 para salir): ";
                cin >> hrs;
                if (hrs == -1) {
                    break;
                }
                cout << "Introduzc la tarifa por horas del empleado ($00.00): ";
                cin >> tar;
                cout << "El salario es:" << " $" << (hrs * tar) << endl;
            }
            break;
        }
        case 7: {
            int numPalidromo, p, s, t, c, m;
            cout << "Ingrese un numero : ";
            cin >> numPalidromo;
            p = numPalidromo % 10;
            s = p / 10;
            c = s / 10;
            m = p * 100 + t * 10 + c;
            if (m = numPalidromo) {
                cout << "El Numero es Palindromo" << endl;
            } else {
                cout << "El Numero no es Palindromo" << endl;
            }
            break;
        }
        case 8:{
            double radio, area, diam;
            double pi = 3.14159;
            cout << "Ingrese el radio del circulo: " << endl;
            cin >> radio;
            area = pi * (radio * radio);
            diam = area * 2;
            cout << "Area:" << area << endl;
            cout << "Diametro:" << diam << endl;
            cout << "Circunferencia:" << diam * pi << endl;
            break;
    }
              |

    }
        }while(opc!=-1);

}