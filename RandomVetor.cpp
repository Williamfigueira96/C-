// Programa que gera números randomicos e faz a utilização de vetores com valores positivos e negativos
// FATEC - MC - HHW - Data: 13/09/2016 versão 0.0
#include"Meu.h"
//
// entry point do programa
//
void main(void)
{
	int i;										// índice e contador
	double	vetDoubleA[QTDE_NUMEROS],					// vetorA com 1000 doubles
			 vetDoubleB[QTDE_NUMEROS];					// vetorB com 1000 doubles		
	COLOR_VERDE;								// cor do console verde
	setlocale(LC_ALL, "portuguese_brazil");		// definindo acentuação brasileira
	float vetFloat[QTDE_NUMEROS];				
	cout << "\t\tPROGRAMA COM NUMEROS RANDÔMICOS POSITIVOS E NEGATIVOS" << endl;
	srand(100);									// seed rand semente que irá gerar os numeros randômicos
	// Loop controlado para atrbuir valores positivos e negativos no vetor A
	for(i = 0; i < QTDE_NUMEROS; i++)
	{
		vetDoubleA[i] = rand() * 3.33;
		
		if(rand() % 2 == 1 )					// o modulo do número randômico é igual a 1?
		{ // O mudulo é igual a 1
			vetDoubleA[i] *= rand() * - 1;
			
		}
	} // fim do for i
	// Loop controlado para atribuir valores positivos e negarivos no vetor B
	srand(120);									// seed rand semente que irá gerar os numeros randômicos
	for(i = 0; i < QTDE_NUMEROS; i++)
	{
		vetDoubleB[i] = rand() * 3.33;
		
		if(rand() % 2 == 1 )					// o modulo do número randômico é igual a 1?
		{ // O mudulo é igual a 1
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
	vetDoubleB[i] += vetDoubleA[i];				// soma dos dois vetores na mesma posição
	} // for i

	// Listagem do vetor somado
	cout << "\t\tListagem da soma de vetores!" << endl;
	PAUSA;
	ListarDecimais(vetDoubleB, QTDE_NUMEROS, 5);
	
} // fim da main