// fun��es do programa 
#include"Meu.h"
//	Fun��o que lista um vetor de inteiras
//	Par�metros:
//				Entrada:int vetInt[] - endere�o do primeiro byte da primeira inteira do vetor
//						int nTamanho - quantidade de inteiras do vetor
void ListarInteiras(int vetInt[], int nTamanho, int nQtdePorLinha)
{
	int i,					// �ndice e contador
		nQtLinha;			// para a contagem por linha
		for(i = 0; i < nTamanho; )		// for para a listagem de todas
		{
			for(nQtLinha = 0; nQtLinha < nQtdePorLinha; nQtLinha++,i++)	// loop para listar uma a uma
			{
				if(i == nTamanho)		// todas as inteiras foram listadas?
				{
					break;				// cai fora do for
				}
				cout << vetInt[i] << "\t";	// lista uma inteira do vetor
			} // for nQtLinha
		cout << endl;					// pula de linha
		} // for i
		cout << "-------->>>fim da listagem!!!!<<--------" << endl;
		PAUSA;
} // Listar as inteiras
