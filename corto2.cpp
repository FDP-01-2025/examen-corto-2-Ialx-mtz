#include <iostream>

using namespace std;

int main(){
    int age, gender, shoeOption;
    double balance = 200, price=0;

    cout << "Bienvenido" << endl;
    cout << "Ingresa tu edad para poder brindarte tu talla de zapatos" << endl;
    cin >> age;

    if (age >=0 && age <=12){
        cout << "La talla recomendada es 34" << endl;
    } else if (age <=13 && age <=17){
        cout << "La talla recomendada es 38" << endl;
    } else if (age >=18 && age <=64){
        cout << "La talla recomendada es 40" << endl;
    } else if (age >=65 && age <=100){
        cout << "La talla recomendada es 42" << endl;
    } else 
        cout << "Imposible que tengas mas de 100 años :p" << endl;


    cout << "Selecciona tu genero" << endl;
    cout << "1.Hombre" << endl;
    cout << "2.Mujer" << endl;
    cout << "3.Mostrar todas las opciones" << endl; 
    cin >> gender;


    switch (gender){
        case 1:
            cout << "Este es nuestro catalogo de zapatos disponibles para hombre" << endl;
            cout << "1. Zapato Deportivo - Precio: $80 - Descuento: 20% - Precio Final: " << price = 64.00 " dolares" << endl;
            cout << "2. Zapato Formal - Precio: $120 - Descuento: 20% - Precio Final: " << price = 96.00 " dolares" << endl;
            cout << "3. Zapato Premium - Precio $250 - Descuento: 20% - Precio Final: " << price = 200.00 " dolares" << endl; 
        break;

        case 2:
            cout << "Este es nuestro catalogo de zapatos disponibles para mujer" << endl;
            cout << "1. Zapato Casual - Precio: $70 - Descuento: 15% - Precio Final: $59.50" << endl;
            cout << "2. Zapato Elegante - Precio: $100 - Descuento: 15% - Precio Final: $85" << endl;
            cout << "3. Zapato Premium - Precio: $250 - Descuento: 15% - Precio Final: $212.50" << endl;
        break;

        case 3:
            cout << "Este es el catalogo de toda nuestra mercaderia disponible" << endl;
            cout << "-----HOMBRE-----" << endl;
            cout << "1. Zapato Deportivo - Precio: $80 - Descuento: 20% - Precio Final: $64" << endl;
            cout << "2. Zapato Formal - Precio: $120 - Descuento: 20% - Precio Final: $96" << endl;
            cout << "3. Zapato Premium - Precio $250 - Descuento: 20% - Precio Final: $200" << endl;

            cout << "-----MUJER-----" << endl;
            cout << "1. Zapato Casual - Precio: $70 - Descuento: 15% - Precio Final: $59.50" << endl;
            cout << "2. Zapato Elegante - Precio: $100 - Descuento: 15% - Precio Final: $85" << endl;
            cout << "3. Zapato Premium - Precio: $250 - Descuento: 15% - Precio Final: $212.50" << endl;
        break;

        default:
            cout << "Por favor ingresa una opcion valida" << endl;
        break;
    }
        

        
        







    return 0;
}