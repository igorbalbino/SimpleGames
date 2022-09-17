// SimpleGame01.cpp : Este arquivo cont�m a fun��o 'main'. A execu��o do programa come�a e termina ali.
//

#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;

//window setup
sf::RenderWindow window(/*comando que cria a janela para fazermos o jogo dentro*/
    sf::VideoMode(640, 480), /*aqui estamos dando o tamanho da janela que vamos reproduir o conteudo*/
    "Gaaaaameeeee", /*o titulo do jogo que estamos fazendo*/
    sf::Style::Titlebar | sf::Style::Close);/*inclu�mos o estilo do jogo. existem varios estilos.
                        o estilo "sf::Style::Default" vai dar uma barra de titulo como a dos sistemas
                        normais que usamos que vem com botoes para fechar, minimizar e tudo mais...
                        usando "sf::Style::Titlebar | sf::Style::Close" dizemos que queremos uma
                        barra de titulo apenas com o botao de fechar.
                        se eu quisesse a minha janela com resize, pra poder mudar o tamanho da janela,
                        eu poderia colocar "sf::Style::Titlebar | sf::Style::Close | sf::Style::Resize"*/
sf::Event ev;

int main()
{
    //game loop
    while (window.isOpen()) {
        //event pooling
        while (window.pollEvent(ev)) {
            switch (ev.type) {
            case sf::Event::Closed: /*captura quando clicamos no bot�o de fechar a janela.
                a janela n�o fecha sozinha quando clicamos nela. temos que fazer a rotina
                manualmente para que de fato feche;*/
                window.close();
                break;
            case sf::Event::KeyPressed:
                if (ev.key.code == sf::Keyboard::Escape) window.close();
                break;
            }
        }

        //update game


        //render
        renderGame();

    }


    system("pause");
    return 0;
}

void renderGame()
{
    window.clear(); /*limpa o frame anterior*/

    //draw game


    window.display();/*informa ao app que a tela terminou de ser desenhada*/
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depura��o
// Depurar programa: F5 ou menu Depurar > Iniciar Depura��o

// Dicas para Come�ar: 
//   1. Use a janela do Gerenciador de Solu��es para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do c�digo-fonte
//   3. Use a janela de Sa�da para ver mensagens de sa�da do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de c�digo, ou Projeto > Adicionar Item Existente para adicionar arquivos de c�digo existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, v� para Arquivo > Abrir > Projeto e selecione o arquivo. sln
