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

	printf("Olá! Digite o ano que você nasceu para saber quais classificações indicativas você pode assistir. \n\n");
	printf("Ano de Nascimento: ");
	scanf("%d", &nasc); //scanf("%[tipo aqui]", &[variável])

	idade = ano_atual - nasc;
	
	printf("\n");
	printf("Você fez ou fará ");
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
    printf("\nVocê só pode assistir filmes até a classificação indicativa 'Livre'.\n\n");
    printf("\nAqui estão algumas sugestões de títulos classificados como 'Livre':\n");
    printf("\n    1 - A Viagem De Chihiro \n    2 - Divertida Mente \n    3 - Moana – Um Mar De Aventuras\n\n" );
    printf("Não esqueça de pegar a pipoca! Bom filme e boa diversão!");
}

int dez()
{
    system("cls");
	printf("\nVocê só pode assistir filmes até a classificação indicativa '10'.\n\n");
    printf("\nAqui estão algumas sugestões de títulos classificados como 'para maiores de 10 anos'.\n\n");
    printf("\n    1 - A Fera Do Mar\n    2 - Vida De Inseto\n    3 - Wall-e\n\n" );
    printf("Não esqueça de pegar a pipoca! Bom filme e boa diversão!");
}

int doze()
{
	system("cls");
    printf("\nVocê só pode assistir filmes até a classificação indicativa '12'.\n\n");
    printf("\nAqui estão algumas sugestões de títulos classificados como 'para maiores de 12 anos'.\n\n");
    printf("\n    1 - Enola Holmes\n    2 - Billy Elliot\n    3 - Viva - A Vida É Uma Festa\n\n" );
    printf("Não esqueça de pegar a pipoca! Bom filme e boa diversão!");
}

int quatorze()
{
	system("cls");
    printf("\nVocê só pode assistir filmes até a classificação indicativa '14'.\n\n");
    printf("\nAqui estão algumas sugestões de títulos classificados como 'para maiores de 14 anos'.\n\n");
    printf("\n    1 - Pequena Miss Sunshine\n    2 - Gênio Indomável\n    3 - Legalmente Loira\n\n" );
    printf("Não esqueça de pegar a pipoca! Bom filme e boa diversão!");
}

int dezesseis()
{
	system("cls");
	printf("\nVocê só pode assistir filmes até a classificação indicativa '16'.\n\n");
    printf("\nAqui estão algumas sugestões de títulos classificados como 'para maiores de 16 anos'.\n\n");
    printf("\n    1 - A Lista De Schindler\n    2 - Réquiem Para Um Sonho\n    3 - O Bebê De Rosemary\n\n" );
    printf("Não esqueça de pegar a pipoca! Bom filme e boa diversão!");
}

int dezoito()
{
	system("cls");
    printf("\nVocê pode assistir filmes de todas as classificações, que contenham nudez, \ncenas de sexo e violência explícita, quiçá tudo ao mesmo tempo. O inferno é o limite.\n\n");
    printf("\nAqui estão algumas sugestões de títulos classificados como 'para maiores de 18 anos'.\n\n");
    printf("\n    1 - O Lobo De Wall Street\n    2 - Império Dos Sentidos\n    3 - Beasts Of No Nation\n\n" );
	printf("Não esqueça de pegar a pipoca! Bom filme e boa diversão!");
}
