#include <iostream>

using namespace std;

int main(){
    int age, gender, shoeOption; 
    double balance = 200; // Balance del cliente
    double price1 = 64.00, price2 = 96.00, price3 = 200.00; //Precio de zapatos de hombre
    double price4 = 59.50, price5 = 85, price6 = 212.50; // Precio de zapatos de mujer

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
            cout << "1. Zapato Deportivo - Precio: $80 - Descuento: 20% - Precio Final: " << price1 << " dolares" << endl;
            cout << "2. Zapato Formal - Precio: $120 - Descuento: 20% - Precio Final: " << price2 << " dolares" << endl;
            cout << "3. Zapato Premium - Precio $250 - Descuento: 20% - Precio Final: " << price3 << " dolares" << endl; 
            cout << "-----------------------------------------------------------------------------------------" << endl;
            cout << "Selecciona la opcion que deseas comprar" << endl;
            cin >> shoeOption;
        break;

        case 2:
            cout << "Este es nuestro catalogo de zapatos disponibles para mujer" << endl;
            cout << "1. Zapato Casual - Precio: $70 - Descuento: 15% - Precio Final:" << price4 << " dolares" << endl;
            cout << "2. Zapato Elegante - Precio: $100 - Descuento: 15% - Precio Final:" << price5 << " dolares" << endl;
            cout << "3. Zapato Premium - Precio: $250 - Descuento: 15% - Precio Final:" << price6 << " dolares" << endl;
            cout << "-----------------------------------------------------------------------------------------" << endl;
            cout << "Selecciona la opcion que deseas comprar" << endl;
            cin >> shoeOption;
        break;

        case 3:
            cout << "Este es el catalogo de toda nuestra mercaderia disponible" << endl;
            cout << "-----HOMBRE-----" << endl;
            cout << "1. Zapato Deportivo - Precio: $80 - Descuento: 20% - Precio Final: " << price1 << " dolares" << endl;
            cout << "2. Zapato Formal - Precio: $120 - Descuento: 20% - Precio Final: " << price2 << " dolares" << endl;
            cout << "3. Zapato Premium - Precio $250 - Descuento: 20% - Precio Final: " << price3 << " dolares" << endl; 

            cout << "-----MUJER-----" << endl;
            cout << "1. Zapato Casual - Precio: $70 - Descuento: 15% - Precio Final:" << price4 << " dolares" << endl;
            cout << "2. Zapato Elegante - Precio: $100 - Descuento: 15% - Precio Final:" << price5 << " dolares" << endl;
            cout << "3. Zapato Premium - Precio: $250 - Descuento: 15% - Precio Final:" << price6 << " dolares" << endl;
            cout << "-----------------------------------------------------------------------------------------" << endl;
            cout << "Selecciona la opcion que deseas comprar" << endl;
            cin >> shoeOption;
        break;

        default:
            cout << "Por favor ingresa una opcion valida" << endl;
        break;
    }
        

        
        







    return 0;
}