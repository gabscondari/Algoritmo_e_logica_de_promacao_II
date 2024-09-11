#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TOTALATENDIMENTO 100

typedef struct
{
  int dia;
  int mes;
  int ano;
} DataAtendimento;

typedef struct
{
  char nome[100];
  char cpf[14];
} Paciente;

typedef struct
{
  char nome[50];
  int lote;
} Vacina;

typedef struct
{
  int codigo;
  DataAtendimento dataAtendimento;
  Paciente paciente;
  Vacina vacina;
} Atendimento;

void mostrarMenu()
{
  printf("Menu:\n");
  printf("0 - Sair.\n");
  printf("1 - Cadastrar aplicacao da vacina.\n");
  printf("2 - Relatorio geral.\n");
  printf("3 - Consultar CPF.\n");
}

Atendimento atender(int countAtendimentos)
{
  Atendimento atendimento;

  printf("Nome do paciente: ");
  fflush(stdin);
  fgets(atendimento.paciente.nome, 100, stdin);
  printf("Digite o CPF do paciente sem espaco ou traco: ");
  fflush(stdin);
  fgets(atendimento.paciente.cpf, 14, stdin);
  printf("Digite nome da vacina: ");
  fflush(stdin);
  fgets(atendimento.vacina.nome, 50, stdin);
  printf("Digite o dia de aplicacao: ");
  scanf("%d", &atendimento.dataAtendimento.dia);
  fflush(stdin);
  printf("Digite o mes de aplicacao: ");
  scanf("%d", &atendimento.dataAtendimento.mes);
  fflush(stdin);
  printf("Digite o ano de aplicacao: ");
  scanf("%d", &atendimento.dataAtendimento.ano);
  fflush(stdin);
  printf("Digite o numero do lote: ");
  scanf("%d", &atendimento.vacina.lote);
  fflush(stdin);

  atendimento.codigo = countAtendimentos;

  return atendimento;
}

void imprimirAtendimento(Atendimento atendimento)
{
  printf("Codigo: %d\n", atendimento.codigo);
  printf("Nome: %s", atendimento.paciente.nome);
  printf("CPF: %s", atendimento.paciente.cpf);
  printf("Vacina: %s", atendimento.vacina.nome);
  printf("Data de aplicacao: %d/%d/%d\n", atendimento.dataAtendimento.dia, atendimento.dataAtendimento.mes, atendimento.dataAtendimento.ano);
  printf("Numero do lote: %d\n", atendimento.vacina.lote);
  printf("======================================\n");
}

void imprimeAtendimentoPorCPF(Atendimento atendimentos[], char cpf[], int countAtendimentos)
{
  int aux = 1;
  printf("----------Dados cadastrados----------\n");
  for (int i = 0; i <= countAtendimentos; i++)
  {
    if (!strcmp(cpf, atendimentos[i].paciente.cpf))
    {
      imprimirAtendimento(atendimentos[i]);
      aux = 0;
    }
  }
  if (aux)
  {
    printf("CPF nao encontrado.\n");
  }
}

int main()
{
  setlocale(LC_ALL, "Portuguese");
  Atendimento atendimentos[TOTALATENDIMENTO];
  int countAtendimentos = -1;
  int comandoMenu;

  printf("----- Bem-vindo ao sistema de controle de vacinas -----\n\n");

  do
  {
    mostrarMenu();
    printf("Escolha uma acao do menu: ");
    scanf("%d", &comandoMenu);

    switch (comandoMenu)
    {
    case 0:
      printf("Programa encerrado.\n");
      break;
    case 1:
      countAtendimentos++;
      atendimentos[countAtendimentos] = atender(countAtendimentos);
      break;
    case 2:
      if (countAtendimentos > -1)
      {
        printf("----------Dados cadastrados----------\n");
        for (int i = 0; i <= countAtendimentos; i++)
        {
          imprimirAtendimento(atendimentos[i]);
        }
      }
      else
      {
        printf("Nao ha dados cadastrados.\n");
      }
      break;
    case 3:
      printf("Digite o numero do CPF a ser consultado: ");
      char cpf[14];
      fgets(cpf, 14, stdin);
      fgets(cpf, 14, stdin);
      imprimeAtendimentoPorCPF(atendimentos, cpf, countAtendimentos);
      break;
    default:
      printf("Este não é um comando conhecindo.\n");
      break;
    }
  } while (comandoMenu);

  return 0;
}
