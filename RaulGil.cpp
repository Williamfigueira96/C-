// programa de calouros RaulGil
// FATEC - MC - HHW	 data: 31/08/2016 versão 0.0
#include"RaulGil.h"
//
// entry point do programa
//
void main(void)
{
	int i,									// indice e contador genérico
		nNotaTrono = -1,					// nota de um calouro que será substituido pelo primeiro
 		nQtdeCalouros = 0,					// quantidade de calouros que irá cantar hoje
		vetNotas[QTDE_MAXIMA_CALOUROS],		// vetor de notas dos calouros
		iIndiceProximo;
		
	char szNomeTrono[EXTENSAO_NOME + 1],	// nome do calouro que está no trono
		cSexoTrono,							// sexo do calouro que está no trono							
		vetNomes[QTDE_MAXIMA_CALOUROS][EXTENSAO_NOME + 1],	// vetor de nomes dos calouros
		vetSexo[QTDE_MAXIMA_CALOUROS];
			
									
	bool flgTroca;							// verificador de troca no buble sort
		
		COLOR_VERDE;						// definindo a cor do console MS-DOS
		setlocale(LC_ALL, "portuguese_brazil"); // acentuação brasileira
		// perguntar ao RaulGil quantos colouros irão cantar hoje, dentro do limites
		// e dar uma oportunidade do operador cancelar a execução do programa
		do
		{
			cout << "Informe a quantidade de calouros que irá cantar hoje entre "
				<< QTDE_MINIMA_CALOUROS << " e " << QTDE_MAXIMA_CALOUROS << endl
				<< "ou zero para cancelar a execução do programa: ";
			cin >> nQtdeCalouros;				// resposta do operador
			if(nQtdeCalouros == 0)				// cancelar?
				return;							// retorna ao sistema operacional
			
			
		}while(nQtdeCalouros < QTDE_MINIMA_CALOUROS || 
				nQtdeCalouros > QTDE_MAXIMA_CALOUROS);	// loop enquanto nQtdeCalouros esticer fora do intervalo
		// temos uma quantidade válida
		for(i = iIndiceProximo = 0; i < nQtdeCalouros; i++)
		{
			cin.ignore(1,EOF);							// ignorar uma tecla enter digitada em campo anterior
			cout << "Nome do calouro de ordem " << i + 1 << " de " << nQtdeCalouros
				<< ": ";
			cin.getline(vetNomes[i], EXTENSAO_NOME, '\n');
			// pedir um sexo válido
			do
			{
				cout << "Sexo do calouro " << vetNomes[i] << " (" << MASCULINO << "-MASCULINO e "
					<< FEMININO << "-FEMININO): ";
				cin >> vetSexo[i];
				vetSexo[i] = toupper(vetSexo[i]);		// toupper converte para maiúscula

				
			}while(vetSexo[i]!= MASCULINO && vetSexo[i]!= FEMININO);		// loop de sexo válido
			// pedir uma nota válida entre 0 e 10 inclusives
			do
			{
				cout << "Nota entre 0 e 10 ";
				cin >> vetNotas[i];						// recebe a nota

			
			}while(vetNotas[i] < 0 || vetNotas[i] > 10);
			// verificar se o caloura vai para o trono ou não vai
			if(vetNotas[i] > nNotaTrono)				// vai para o trono?
			{		// o calouro vai para o trono
				nNotaTrono = vetNotas[i];				// salva a nota no trono
				cSexoTrono = vetSexo[i];				// salva o sexo do calouro que está no trono
				strcpy_s(szNomeTrono, EXTENSAO_NOME, vetNomes[i]);		// salva o nome do calouro
			}
		} // for i
		// todos os calouros já cantaram
		cout << "Vencedor: " << szNomeTrono << " Sexo: " << cSexoTrono << " Nota: " << nNotaTrono << endl;
		PAUSA;
		// listagem de todos participantes
		LIMPAR_TELA;
		for(int i = 0; i < nQtdeCalouros; i++)
		{
			cout << "Nome: " << vetNomes[i] <<"Sexo: " << vetSexo[i] <<   "Nota: " << vetNotas[i] << endl;
		} // for i
		PAUSA;
		LIMPAR_TELA;
		// listagem ordenada
		
		do
		{
			for(int i = 0; i < nQtdeCalouros - 1; i++)
			{
				flgTroca = false;
				if(vetNotas[i] > vetNotas[i + 1])
				{
					char cWorkString[EXTENSAO_NOME + 1];
					int cWork;							// variável de trabalho
					cWork = vetNotas[i];
					vetNotas[i] = vetNotas[i+1];
					vetNotas[i + 1] = cWork;
					
					strcpy_s(cWorkString, vetNomes[i]) ;					
					strcpy_s(vetNomes[i], vetNomes[i + 1]);				
					strcpy_s(vetNomes[i + 1], cWorkString);
					
					cSexoTrono = vetSexo[i];
					vetSexo[i] = vetSexo[i + 1];
					vetSexo[i + 1] = cSexoTrono;
					flgTroca = true;
				}
			
			}
		
		}while(flgTroca == true);
		// listagem do buble sort por nota
		cout << "EXIBINDO O VETOR ORGANIZADO PELO BUBLE SORT POR ORDEM DE NOTA "<< endl; 
		for(int i = 0; i < nQtdeCalouros; i++)
		{
			cout << "Nome: " << vetNomes[i] <<" Sexo: " << vetSexo[i] <<   " Nota: " << vetNotas[i] << endl;
		}
		PAUSA;
		// Buble Sort de String
		do
		{
			for(int i = 0; i < nQtdeCalouros - 1; i++)
			{
				flgTroca = false;
				if(strcmp(vetNomes[i], vetNomes[i+1]) > 0)
				{
					char cWorkString[EXTENSAO_NOME + 1];
					int cWork;							// variável de trabalho
					cWork = vetNotas[i];
					vetNotas[i] = vetNotas[i+1];
					vetNotas[i + 1] = cWork;
					
					strcpy_s(cWorkString, vetNomes[i]) ;					
					strcpy_s(vetNomes[i], vetNomes[i + 1]);				
					strcpy_s(vetNomes[i + 1], cWorkString);
					
					cSexoTrono = vetSexo[i];
					vetSexo[i] = vetSexo[i + 1];
					vetSexo[i + 1] = cSexoTrono;
					flgTroca = true;
				}
			
			}
		
		}while(flgTroca == true);
	
		// Exibir o vetor de String organizado no buble sort
		LIMPAR_TELA;
		cout << "\t\tEXIBINDO O VETOR DE STRING ORGANIZADO" << endl;
		for(int i = 0; i < nQtdeCalouros; i++)
		{
			cout << " Nome: " << vetNomes[i] <<" Sexo: " << vetSexo[i] <<   " Nota: " << vetNotas[i] << endl;
		}
		PAUSA;

} // fim da main