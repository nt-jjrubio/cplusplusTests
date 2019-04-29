/**
 * Namespaces https://codigofacilito.com/videos/tutorial_c_espacios_de_nombres
 */

#include <iostream>

// Un espacio de nombres permite tener variables con el mismo nombre pero en distintos espacios de nombres

namespace ciudad
{
	int calle;

}

namespace pueblo
{
	int calle = 10;
}


using namespace ciudad;


int main() 
{
	// Con esta variable utilizamos el nombre de espacio que indicado con el using namespace ciudad
	calle = 12;

	// Si nos fijamos al no tener std por defecto tenemos que poner std::cout y std::endl
	std::cout << calle << std::endl;

	// con el pueblo:: indicamos el nombre del namespace
	std::cout << pueblo::calle << std::endl;
	return 0;
}
