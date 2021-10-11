#include<iostream>
#include <map>

using namespace std;

map<string, float> Square(float base)
{
    map<string, float> result;

    result["perimeter"] = base*4;
    result["area"] = base*base;

    return result;
}

map<string, float> Rectangle(float base, float height)
{
    map<string, float> result;

    result["perimeter"] = base*2+height*2;
    result["area"] = base*height;

    return result;
}

map<string, float> Triangle(float base, float height,float side_a, float side_b)
{
    map<string, float> result;

    result["perimeter"] = side_a+side_b+base;
    result["area"] = base*height/2;

    return result;
}

int main()
{
    int option;
    do
    {
        map<string, float> result;
        cout << "Calcular perímetro y área de:\n1. Cuadrado\n2. Rectángulo\n3. Triángulo\n4. Salir\n";
        
        cin >> option;

        cout << "\n";

        switch (option)
        {
            case 1:{
                float base;
                cout << "Inserta base: ";
                cin >> base;

                result = Square(base);
                break;
            }
            case 2:{
                float base;
                float height;

                cout << "Inserta base: ";
                cin >> base;

                cout << "Inserta altura: ";
                cin >> height;

                result = Rectangle(base, height);

                break;
            }
            case 3:{
                float base;
                float height;
                float side_a;
                float side_b;

                cout << "Inserta base: ";
                cin >> base;

                cout << "Inserta altura: ";
                cin >> height;

                cout << "Inserta lado A: ";
                cin >> side_a;

                cout << "Inserta lado B: ";
                cin >> side_b;

                result = Triangle(base, height, side_a, side_b);

                break;
            }
            case 4:{
                cout << "\nSaliendo del programa \n";
                break;
            }
            default:{
                cout << "\nSelecciona una opción disponible \n";
                break;
            }
        }
        
        // Usaría un return en vez pero el return no me regresa el ciclo si no que regresa la función
        // no sé si esto es un comportamiento de C++
        if (option < 4)
        {
            cout << "\nPerímetro del resultado: \n";
            cout << result["perimeter"];
            cout << "\n";

            cout << "\nÁrea del resultado: \n\n";
            cout << result["area"];
            cout << "\n\n";
        }
        

    } while (option != 4);

    return 0;
}
