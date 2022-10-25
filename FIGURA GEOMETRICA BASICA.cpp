#include "miniwin.h"

using namespace miniwin;
int main () {
	vredimensiona (600, 400);
	
	color(ROJO);
	linea(0, 0, 600, 400);
	
	color(VERDE);
	rectangulo_lleno(050, 50, 100, 60);
		
	refresca();
	
	
	return 0;
}
