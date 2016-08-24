// Programa de ensaio com inteiras
// FATEC - MC - JCB - 17/08/2016 - versão 0.0
#include"meu.h"
//
// entry point do programa
//

void main(void)
{
	int i, j ,k,  							// índices e contadores
		vetInt[] = {10,20,30},				// vetor de inteiras com valores iniciais
		vetInteiras[QTDE_INTEIRAS];			// vetor de inteiras sem inicialização
		unsigned int vetSem[QTDE_INTEIRAS]; // vetor de inteiras sem sinal e sem inicialização
		i = sizeof(int);					// sizeof de uma inteira 
		j = sizeof(vetInt);					// sizeof do vetor
		VERDE;								// cor do console
		setlocale(LC_ALL, "portuguese_brazil");
		// exibir as inteiras de vet int
			LIMPAR_TELA;					// clear screen
			cout << "\n\tListagem do vetor vetInt " << endl;
			ListarInteiras(vetInt, sizeof(vetInt)/sizeof(int), 10);
		// inicializar o vetor vetInteiras com 1,2,3 ..................... QTDE_INTEIRAS
		for(i = 0; i < QTDE_INTEIRAS; i++)
		{
			vetInteiras[i] = i + 1;			// atribui 1 ao i a cada 	
		} // fim do for
		LIMPAR_TELA;
		cout << "\tListagem do vetor vetInteras" << endl;
		ListarInteiras(vetInteiras, QTDE_INTEIRAS, 10);
		// inicializar vetInteiras com valores randômicos
		srand(100);							// semente da sequência random gera de 0 a 32 k
		for(i = 0; i < QTDE_INTEIRAS; i++)	// loop de geração random
		{
			vetInteiras[i] = rand();		// recebe um random entre 0 a 32k positivo +
			if(rand()% 2 == 1)				// modulo do ramdom igual a 1?
				vetInteiras[i] *= -1;		// torna negativo a inteira

													
		} // for i 
		// listar o vetor
		LIMPAR_TELA;					// clear screen
		cout << "\n\tListagem do vetor vetInt " << endl;
		ListarInteiras(vetInteiras, QTDE_INTEIRAS, 10);
} // fim da main