// Programa que exibe a maior inteira com sinal digitada
// FATEC - MC - JCB - 10/08/2016 vers�o 0.0 
#include"Meu.h"
//
// entry point do programa
//
void main(void)
{
	int tMaior = INT_MIN,				// inicializa com a menor inteira poss�vel
		tMenor = INT_MAX,	
		vetMaior[QUANTIDADE_INTEIRAS],						// vetor para os n�meros positivos
		vetMenor[QUANTIDADE_INTEIRAS],						// vetor para os n�meros negativos
		vetTodasInteiras[QUANTIDADE_INTEIRAS],				// vetor com todas as quantidades de inteiras digitadas
		cWork,												// variavel de trabalho para o BubbleSort
		nValor,							// recebe cada inteira
			i,							// indice e contador gen�rico
		cSubPositivo,						// sub contador para numeros maiores 	
		cSubNegativo,						// sub contador para numeros menores 
		cMaior,							// contador do trono Maior
		cMenor;							// contador do trono menor
	bool HouveTroca;					// Verificador de troca do bubblesort
	VERDE;								// cor verde do console

	setlocale(LC_ALL, "portuguese_brazil");
	// loop de QUANTIDADE_INTEIRAS vezes
	cSubNegativo = cSubPositivo = cMaior = cMenor = 0;
	for(i = 0; i < QUANTIDADE_INTEIRAS; i++) 
	{
		cout << "\n\nDigite a inteira com sinal de ordem: " << i+1 << ": " ;
		cin >> nValor;					// recebe a inteira			
		if(nValor > tMaior)			// a digitada � maior que a do trono?
		 {
			tMaior = nValor;			// salva a inteira de maior valor 
			
		 }
		if(nValor < tMenor)			// a digitada � menor que a do trono?	 
			{
				tMenor = nValor;			// salva a inteira de maior valor cMenor++;					// acrescenta +1 ao contador cMenor.
				
			}
		if(nValor > 0)
		{
			vetMaior[cSubPositivo] = tMaior;	// o vetor indexado pelo contador vetMaior recebe o valor do trono maior
			cSubPositivo++;					// acrescenta mais um ao contador
			cMaior++;
		}
		else 
		{
			vetMenor[cSubNegativo] = tMenor; // o vetor indexado pelo contador vetMenor recebe o valor do trono menor
			cSubNegativo++;				// acrescenta mais um ao contador 
			 cMenor++;
		}
		vetTodasInteiras[i] = nValor;
	} // for i
	// todas as inteiras foram digitadas
	cout << "\nA maior inteira foi: " << tMaior << "\nA menor inteira foi: " << tMenor << endl << "Quantidade de positivos digitados: " << cMaior
		<< endl << "Qauntidade de negativos digitados: " << cMenor << endl; 
	PAUSA;
	if(cSubPositivo != 0)						// existe algum valor de entrada no trono?
	{ // existe!
		cout << "Lista de todas as positivas inteiras do trono: ";
	
		for(int x = 0; x < cSubPositivo; x++)
		{
		cout << vetMaior[x]	 << "  ";						// exibe todas as maiores inteiras digitadas do trono
	
		}
		cout << endl << endl;
		PAUSA;
	}

	if(cSubNegativo !=0)						// existe algum valor de entrada no trono?
	{
		cout << "Lista de todas as negativas inteiras no trono: ";
		for(int y = 0; y < cSubNegativo; y++)
		{
		cout << vetMenor[y] << "  ";						// exibe todas as menores inteiras digitadas do trono
		}
		cout << endl << endl;
		PAUSA;
	}

	cout << "Todas as inteiras digitadas pelo usu�rio: ";
	for(int t = 0; t < QUANTIDADE_INTEIRAS; t++)
	{
		cout << vetTodasInteiras[t] << " ";					// exibe todas as inteiras
	}
	cout << endl << endl;
	PAUSA;
	// Listagem organizada de valores com bubble sort
	do
	{
		HouveTroca = false;
		for(i = 0; i < QUANTIDADE_INTEIRAS - 1; i++)
		{
			if(vetTodasInteiras[i] > vetTodasInteiras[i + 1])
			{
				cWork = vetTodasInteiras[i+1];				// cWork variavel auxiliar para receber o valor da outra variavel
				vetTodasInteiras[i+1] = vetTodasInteiras[i];// faz a troca de valores do menor com o maior
				vetTodasInteiras[i] = cWork;				// vetor recebe valor menor ao seu sucessor
				HouveTroca = true;							// ocorreu troca no vetor
			}
		
		} // fim do for
	} while (HouveTroca == true);
	// Exibir a listagem com bublesort
	for(int t = 0; t < QUANTIDADE_INTEIRAS; t++)
	{
		cout << vetTodasInteiras[t] << " ";					// exibe todas as inteiras
	}
	cout << endl << endl;
	PAUSA;

} // fim da main