"# Unisinos-PG" 
Lista de exercícios 1 - Fabiane Kuhn

Os códigos estão organizados em projetos diferentes, um projeto por exercício. Todos os exercícios foram feitos com base no exemplo de Hello Triangle apresentado em aula. 

- Na pasta "Exercício 3" está o projeto que realiza o desenho de um triângulo com as vértices coloridas. Os shaders estão descritos no próprio código Source.cpp e toda a lógica está implementada dentro do main. O funcionamento do exercício ocorre devido a indicação das cores no array "vertices". 
- Na pasta "Exercício 4" está o projeto que realiza o desenho de dois triângulos na tela. Os shaders estão descritos no código Source.cpp, assim como o exercício anterior. A lógica está implementada no main e possui a indicação dos dois triângulos no array vertices, sendo que a utilização das vértices é feita pelo array indices, permitindo que dois triângulos sejam desenhados com a utilização de EBO. 
- Na pasta "Exercício 5" está o projeto que realiza o desenho de um círculo na tela. Para desenhar a circunferência foi utilizada uma série de triângulos, cujas coordenadas foram calculadas através de equações de pitágoras. Os shaders estão no código Source.cpp. A função drawCircle é responsável por desenhar os triângulos que irão formar o círculo. Na game loop do código é chamada a função drawCircle. 
- Na pasta "Exercício 6" está o projeto em que os shaders estão em arquivos separados. O arquivo shader_s.h possui o código de leitura dos arquivos shader.frag e shader.vs e a compilação deles. A aplicação faz com que seja desenhado um triângulo na tela, semelhante ao exemplo de Hello Triangle. 
