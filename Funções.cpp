
#include"Meu.h"
//	Função que lista um vetor numeros decimais
//	Parâmetros:
//				Entrada:int vetInt[] - endereço do primeiro byte da primeira decimais do vetor
//						int nTamanho - quantidade de inteiras do vetor
void ListarDecimais(double vetDouble[], int nTamanho, int nQtdePorLinha)
{
	int i,					// índice e contador
		nQtLinha;			// para a contagem por linha
	char cWork[200];
		for(i = 0; i < nTamanho; )		// for para a listagem de todas
		{
			for(nQtLinha = 0; nQtLinha < nQtdePorLinha; nQtLinha++,i++)	// loop para listar uma a uma
			{
				if(i == nTamanho)		// todas as inteiras foram listadas?
				{
					break;				// cai fora do for
				}
				//cout << vetDouble[i] << "\t";	// lista uma inteira do vetor
				sprintf_s(cWork,sizeof(cWork),"%.02f", vetDouble[i]);
				cout << " " << cWork << "\t";
			} // for nQtLinha
		cout << endl;					// pula de linha
		} // for i
		cout << "-------->>>fim da listagem!!!!<<--------" << endl;
		PAUSA;
} // Listar as decimais