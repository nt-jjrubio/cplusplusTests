/** Si vamos al fichero cabecera vemos que esta importando el iostream, una constante o una funcion o un define **/
#include "cabecera.h"
/** Si el include va con <> los busca en el proyecto en cambio si estan en "" los busca en la misma carpeta **/

using namespace std;

int main()
{
    cout << "Ejemplo de import" << endl;
    cout << EXAMPLEVAR << endl;
    cout << suma(2, 3) << endl;
    cout << sumaDefine(4,8) << endl;
    return 0;
}