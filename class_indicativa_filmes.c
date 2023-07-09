#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int nasc;
int ano_atual = 2023;
int idade;

	printf("Ol�! Digite o ano que voc� nasceu para saber quais classifica��es indicativas voc� pode assistir. \n\n");
	printf("Ano de Nascimento: ");
	scanf("%d", &nasc); //scanf("%[tipo aqui]", &[vari�vel])

	idade = ano_atual - nasc;
	
	printf("\n");
	printf("Voc� fez ou far� ");
	printf("%d", idade);
	printf(" anos!");
	
		if(idade <= 9)
		{
			livre();
		}
		
		else if((idade <= 10) || (idade == 11))
		{
			dez();
		}
		
		else if((idade <= 12) || (idade == 13))
		{
			doze();
		}
		
		else if((idade <= 14) || (idade == 15))
		{
			quatorze();
		}
		
		else if((idade <= 16) || (idade == 17))
		{
			dezesseis();
		}
		
		else if((idade == 18) || (idade > 18))
		{
			dezoito();
		}
}

int livre()
{
	system("cls");
    printf("\nVoc� s� pode assistir filmes at� a classifica��o indicativa 'Livre'.\n\n");
    printf("\nAqui est�o algumas sugest�es de t�tulos classificados como 'Livre':\n");
    printf("\n    1 - A Viagem De Chihiro \n    2 - Divertida Mente \n    3 - Moana � Um Mar De Aventuras\n\n" );
    printf("N�o esque�a de pegar a pipoca! Bom filme e boa divers�o!");
}

int dez()
{
    system("cls");
	printf("\nVoc� s� pode assistir filmes at� a classifica��o indicativa '10'.\n\n");
    printf("\nAqui est�o algumas sugest�es de t�tulos classificados como 'para maiores de 10 anos'.\n\n");
    printf("\n    1 - A Fera Do Mar\n    2 - Vida De Inseto\n    3 - Wall-e\n\n" );
    printf("N�o esque�a de pegar a pipoca! Bom filme e boa divers�o!");
}

int doze()
{
	system("cls");
    printf("\nVoc� s� pode assistir filmes at� a classifica��o indicativa '12'.\n\n");
    printf("\nAqui est�o algumas sugest�es de t�tulos classificados como 'para maiores de 12 anos'.\n\n");
    printf("\n    1 - Enola Holmes\n    2 - Billy Elliot\n    3 - Viva - A Vida � Uma Festa\n\n" );
    printf("N�o esque�a de pegar a pipoca! Bom filme e boa divers�o!");
}

int quatorze()
{
	system("cls");
    printf("\nVoc� s� pode assistir filmes at� a classifica��o indicativa '14'.\n\n");
    printf("\nAqui est�o algumas sugest�es de t�tulos classificados como 'para maiores de 14 anos'.\n\n");
    printf("\n    1 - Pequena Miss Sunshine\n    2 - G�nio Indom�vel\n    3 - Legalmente Loira\n\n" );
    printf("N�o esque�a de pegar a pipoca! Bom filme e boa divers�o!");
}

int dezesseis()
{
	system("cls");
	printf("\nVoc� s� pode assistir filmes at� a classifica��o indicativa '16'.\n\n");
    printf("\nAqui est�o algumas sugest�es de t�tulos classificados como 'para maiores de 16 anos'.\n\n");
    printf("\n    1 - A Lista De Schindler\n    2 - R�quiem Para Um Sonho\n    3 - O Beb� De Rosemary\n\n" );
    printf("N�o esque�a de pegar a pipoca! Bom filme e boa divers�o!");
}

int dezoito()
{
	system("cls");
    printf("\nVoc� pode assistir filmes de todas as classifica��es, que contenham nudez, \ncenas de sexo e viol�ncia expl�cita, qui�� tudo ao mesmo tempo. O inferno � o limite.\n\n");
    printf("\nAqui est�o algumas sugest�es de t�tulos classificados como 'para maiores de 18 anos'.\n\n");
    printf("\n    1 - O Lobo De Wall Street\n    2 - Imp�rio Dos Sentidos\n    3 - Beasts Of No Nation\n\n" );
	printf("N�o esque�a de pegar a pipoca! Bom filme e boa divers�o!");
}
