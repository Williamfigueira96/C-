// Programa que gera n�meros randomicos e faz a utiliza��o de vetores com valores positivos e negativos
// FATEC - MC - HHW - Data: 13/09/2016 vers�o 0.0
#include"Meu.h"
//
// entry point do programa
//
void main(void)
{
	int i;										// �ndice e contador
	double	vetDoubleA[QTDE_NUMEROS],					// vetorA com 1000 doubles
			 vetDoubleB[QTDE_NUMEROS];					// vetorB com 1000 doubles		
	COLOR_VERDE;								// cor do console verde
	setlocale(LC_ALL, "portuguese_brazil");		// definindo acentua��o brasileira
	float vetFloat[QTDE_NUMEROS];				
	cout << "\t\tPROGRAMA COM NUMEROS RAND�MICOS POSITIVOS E NEGATIVOS" << endl;
	srand(100);									// seed rand semente que ir� gerar os numeros rand�micos
	// Loop controlado para atrbuir valores positivos e negativos no vetor A
	for(i = 0; i < QTDE_NUMEROS; i++)
	{
		vetDoubleA[i] = rand() * 3.33;
		
		if(rand() % 2 == 1 )					// o modulo do n�mero rand�mico � igual a 1?
		{ // O mudulo � igual a 1
			vetDoubleA[i] *= rand() * - 1;
			
		}
	} // fim do for i
	// Loop controlado para atribuir valores positivos e negarivos no vetor B
	srand(120);									// seed rand semente que ir� gerar os numeros rand�micos
	for(i = 0; i < QTDE_NUMEROS; i++)
	{
		vetDoubleB[i] = rand() * 3.33;
		
		if(rand() % 2 == 1 )					// o modulo do n�mero rand�mico � igual a 1?
		{ // O mudulo � igual a 1
			vetDoubleB[i] *= rand() * - 1;
			 
		}
	
	
	} // fim do for i
	// Listagem dos valores ordenados vetDoubleA
	cout << "\t\tListagem do vetor A" << endl;;
	PAUSA;
	ListarDecimais(vetDoubleA,QTDE_NUMEROS, 5);
	
	LIMPAR_TELA;
	// Listagem dos valores ordenados vetDoubleB
	cout << "\t\tListagem do Vetor B " << endl;
	PAUSA;
	ListarDecimais(vetDoubleB, QTDE_NUMEROS, 5);
	
	LIMPAR_TELA;
	// soma dos vetores A e B e armazenar em B
	for(i = 0; i < QTDE_NUMEROS; i++)
	{
	vetDoubleB[i] += vetDoubleA[i];				// soma dos dois vetores na mesma posi��o
	} // for i

	// Listagem do vetor somado
	cout << "\t\tListagem da soma de vetores!" << endl;
	PAUSA;
	ListarDecimais(vetDoubleB, QTDE_NUMEROS, 5);
	
} // fim da main