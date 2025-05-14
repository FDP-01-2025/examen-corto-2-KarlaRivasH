#include <iostream>
using namespace std;

int main()
{
    // Declarando todas las variables a utilizar
    int edad, estudiante, profesional, todo, opcion, dinero = 1000, restante;

    string categoria;

    cout << "Porfavor ingrese su edad: ";
    cin >> edad;
    // si la edad es mayor a 16 o igual, puede ingresar
    if (edad >= 16)
    {
        // Mostrar categorias que hay
        cout << "Bienvenido usted, es apto para comprar, ¿En que categoria desea comprar? " << endl;
        cout << "1. Estudiante" << endl
             << "2. Profesional" << endl
             << "3. Ver todos" << endl;
        cout << "Ingrese el tipo de usuario(escrito):  ";
        cin >> categoria;
        // Permitir escribiri la categoria que desea al usuario
        if (categoria == "Estudiante" || categoria == "estudiante")
        {
            cout << "Para Estudiantes (descuento del 20%):" << endl;
            cout << "1. Laptop Básica: $" << 900 - (900 * 0.20) << endl
                 << "2. Tablet Estudiantil: $" << 600 - (600 * 0.20) << endl
                 << "3. Chromebook: $" << 700 - (700 * 0.20) << endl;
            cout << "Seleccione un dispositivo:  ";
            cin >> estudiante;
            // Si es estudiante mostrar el menu de estudiante y que selecciones una opcion del menu
            switch (estudiante)
            {
                // Para la laptop
            case 1:
                cout << "Saldo disponible: " << dinero << endl;
                restante = dinero - (900 - (900 * 0.20));

                cout << "Compra exitosa, usted ha comprado: Laptop basica" << endl;
                cout << "Saldo restante: " << restante << endl;

                break;
                // para la tablet
            case 2:
                cout << "Saldo disponible: " << dinero << endl;
                restante = dinero - (600 - (600 * 0.20));

                cout << "Compra exitosa, usted ha comprado: Tablet estudiantil" << endl;
                cout << "Saldo restante: " << restante << endl;
                break;
                // para el chromebook
            case 3:
                cout << "Saldo disponible: " << dinero << endl;
                restante = dinero - (700 - (700 * 0.20));

                cout << "Compra exitosa, usted ha comprado: chromebook" << endl;
                cout << "Saldo restante: " << restante << endl;
                break;

            default:
                cout << "Opcion invalida" << endl;

                break;
            }
        }
        // Si es un profesional mostrar el menu de los profesionales
        else if (categoria == "Profesional" || categoria == "profesional")
        {

            cout << "Para Profesionales (descuento del 10%):" << endl;
            cout << "1. Laptop Avanzada: $" << 1500 - (1500 * 0.10) << endl
                 << "2. Tablet Pro: $" << 1200 - (1200 * 0.10) << endl
                 << "3. Estación de Trabajo: $" << 2000 - (2000 * 0.10) << endl;
            cout << "Seleccione un dispositivo:  ";
            cin >> profesional;
            // seleccionar una opcion del menu de los profesionales
            switch (profesional)
            {
            case 1:
                cout << "Saldo disponible: " << dinero << endl;
                // Calculando el descuento al producto y verificando si le alcanza al usuario
                restante = dinero - (1500 - (1500 * 0.10));

                if (restante < 0)
                {
                    cout << "No fue posible realizar la compra" << endl;
                    cout << "Le falta $" << (1500 - (1500 * 0.10)) - dinero << " Para comprar la Laptop Avanzada" << endl;
                }
                else
                {
                    cout << "Compra exitosa, usted ha comprado: la Laptop Avanzada" << endl;
                    cout << "Saldo restante: " << restante << endl;
                }

                break;
            case 2:
                cout << "Saldo disponible: " << dinero << endl;
                // Calculando el descuento al producto y verificando si le alcanza al usuario

                restante = dinero - (1200 - (1200 * 0.10));

                if (restante < 0)
                {
                    cout << "No fue posible realizar la compra" << endl;
                    cout << "Le falta $" << (1200 - (1200 * 0.10)) - dinero << " Para comprar la Tablet Pro" << endl;
                }
                else
                {
                    cout << "Compra exitosa, usted ha comprado: Tablet Pro" << endl;
                    cout << "Saldo restante: " << restante << endl;
                }

                break;
            case 3:
                cout << "Saldo disponible: " << dinero << endl;
                // Calculando el descuento al producto y verificando si le alcanza al usuario

                restante = dinero - (2000 - (2000 * 0.10));

                if (restante < 0)
                {
                    cout << "No fue posible realizar la compra" << endl;
                    cout << "Le falta $" << (2000 - (2000 * 0.10)) - dinero << " Para comprar la Estacion de Trabajo" << endl;
                }
                else
                {
                    cout << "Compra exitosa, usted ha comprado:  Estacion de Trabajo" << endl;
                    cout << "Saldo restante: " << restante << endl;
                }

                break;

            default:
                cout << "Opcion invalida" << endl;

                break;
            }
        }
        //Opcione de ver el menu completo
        else if (categoria == "Ver todos" || categoria == "ver" || categoria == "ver todos")
        {
            cout << "Todas las opciones" << endl;
            cout << "1. Laptop Básica: $900" << endl
                 << "2. Tablet Estudiantil: $600" << endl
                 << "3. Chromebook: $700" << endl;
            cout << "4. Laptop Avanzada: $1500" << endl
                 << "5. Tablet Pro: $1200" << endl
                 << "6. Estación de Trabajo: $2000" << endl;
        }
        else
        {
            cout << "Esa no es una opcion valida" << endl;
        }
    }
    // Si la edad es menor a 16, el estudiante no puede realizar ninguna actividad

    else if (edad > 0 && edad < 16)
    {
        cout << "Lo siento usted no es apto para comprar";
    }
    else
    {
        cout << "Su edad es invalida";
    }

    return 0;
}