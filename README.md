# Algoritmo_e_logica_de_promacao_II
Desenvolvido em C para Algoritmo e lógica de programação da UNICESUMAR ano 2022

Questão

A vacinação contra o Covid-19 evoluiu muito no ano de 2021. Para 2022 ao que tudo indica doses de reforço serão necessárias para controle da pandemia. Com a ajuda da tecnologia, o controle de vacinas são todas digitalizadas, inclusive a partir de um aplicativo você mesmo pode consultar as vacinas que você tomou.

Imagine então que você trabalha na área de desenvolvimento de software do seu estado, e você foi designado para registrar os dados de aplicação das vacinas. Nesta aplicação a pessoa responsável precisará pegar do paciente as informações como nome, cpf, nome da vacina aplicada, número do lote e a data da aplicação.

Este programa deve ser capaz de cadastrar as informações de aplicação de vacina, que em resumo são:
    - Código (você fará o controle, não será digitado pelo usuário)
    - Nome
    - CPF
    - Vacina
    - Data (pode ser tratada como String)
    - Numero Lote

Logo após o cadastro o programa deverá disponibilizar outros dois recursos, um deles é um relatório geral de aplicação, que trará todas as informações das aplicações em tela no seguinte modelo:
    Código: 0
    Nome: Rogerio Napoleao Júnior
    CPF: 111.111.111-11
    Vacina: Pfizer
    Data: 01/05/2022
    Numero do Lote: 123123123
    ==================================
    Código: 1
    Nome: Joao da Silva
    CPF: 111.111.111-11
    Vacina: Coronavac
    Data: 10/05/2022
    Numero do Lote: 333222333
    ==================================

O outro recurso necessário é busca por CPF, ao usuário digitar o CPF o programa deve fazer uma buscar e mostrar em tela apenas o CPF consultado, caso não exista uma informação “CPF não encontrado” deve ser mostrado na tela.

Para controlar este programa deverá ter um menu de opções como abaixo:
    1 - Cadastrar Vacina
    2 - Listar Aplicações
    3 - Consultar por CPF
    4 - Sair
Utilize os mais variados recursos aprendidos na disciplina. Seja criativo, não se prenda a uma unica forma de resolver este problema.

Logo após envie o código em C.
