/* Hello Transforms - c�digo inicial fornecido em https://learnopengl.com/#!Getting-started/Hello-Triangle 
 *
 * Adaptado por Rossana Baptista Queiroz
 * Lista 4 - Fabiane Kuhn
 * para a disciplina de Processamento Gr�fico
 * Vers�o inicial: 30/05/2019
 * �ltima atualiza��o em 30/05/2019
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


