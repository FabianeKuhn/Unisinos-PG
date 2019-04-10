/* Lista de exercícios 3 - ScreenSaver
 *
 * Adaptado por Fabiane Kuhn
 * para a disciplina de Processamento Gráfico
 * Versão inicial: 09/04/2019
 * Última atualização em 09s/04/2019
 *
 */

using namespace std;

#include "SceneManager.h"


// The MAIN function, from here we start the application and run the game loop
int main()
{
	SceneManager *scene = new SceneManager;
	scene->initialize(800, 600);

	scene->run();

	scene->finish();
	
	return 0;
}


