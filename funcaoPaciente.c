#include"funcaoPaciente.h"

char* retornaRisco(risco ri){
    static char tipoRisco[30];
    switch(ri){
    case 0:
        strcpy(tipoRisco,"Desconhecido");
        break;
    case 1:
        strcpy(tipoRisco,"Baixo risco");
        break;
    case 2:
        strcpy(tipoRisco,"Medio risco");
        break;
    case 3:
        strcpy(tipoRisco,"Alto risco");
        break;
    }
    return tipoRisco;
}
int editaPaciente(paciente *p1,char* nome,char* cpf, char* endereco){

        strcpy(p1->nome,nome);
        strcpy(p1->cpf,cpf);
        strcpy(p1->endereco,endereco);
}
int criaPaciente(paciente *p1,int idDoPaciente){
        char nome[500];
        char endereco[1000];
        char cpf[15];

        p1->idPaciente = idDoPaciente;

        printf("nome: ");
        fflush(stdin);
        gets(nome);

        printf("cpf: ");
        fflush(stdin);
        gets(cpf);

        printf("endereco: ");
        fflush(stdin);
        gets(endereco);


        fflush(stdin);
        strcpy(p1->nome,nome);
        strcpy(p1->endereco,endereco);
        strcpy(p1->cpf,cpf);
        p1->classeRisco = 0;
        p1->qtdsintoma=0;
        p1->sintoma = NULL;
        system("cls");
        adicionarSintomaAoPaciente(p1);
        system("cls");
}
int adicionaRisco(paciente *p1){
    int riscoPaciente;
    system("cls");
    printaPaciente(*p1,3);
    printf("\nQual o risco de %s?: (1 - Baixo Risco, 2 - Medio Risco, 3 - Alto Risco)\n",p1->nome);
    fflush(stdin);
    scanf("%d",&riscoPaciente);
    p1->classeRisco = riscoPaciente;
}
int ordemDeAtendimento(paciente p1[]){
    int i =0;
    system("cls");
    printf("A Ordem de Atendimento e:\n\n");
    printf("Alto Risco:\n");
    for(i=0;i<3;i++){
        if(p1[i].classeRisco == 3){
            printaPaciente(p1[i],4);
        }
    }
    printf("Medio Risco:\n");
    for(i=0;i<3;i++){
        if(p1[i].classeRisco == 2){
            printaPaciente(p1[i],4);
        }
    }
    printf("Baixo Risco:\n");
    for(i=0;i<3;i++){
        if(p1[i].classeRisco == 1){
            printaPaciente(p1[i],4);
        }
    }
}
int printaPaciente(paciente p1,int modo){
    switch(modo){
    case 1:
        printf("nome: %s\n",p1.nome);
        printf("cpf: %s\n",p1.cpf);
        printf("endereco: %s\n",p1.endereco);
        printf("classe risco: %s\n\n",retornaRisco(p1.classeRisco));
        break;

    case 2:
        printf("nome: %s\n",p1.nome);
        printf("cpf: %s\n",p1.cpf);
        printf("endereco: %s\n",p1.endereco);
        printf("classe risco: %s\n",retornaRisco(p1.classeRisco));
        printf("quantidade de sintomas: %d\n",p1.qtdsintoma);
        printf("sintomas: ");
        printarSintomas(&p1);
        printf("\n");
        break;
    case 3:
        printf("nome: %s\n",p1.nome);
        printf("quantidade de sintomas: %d\n",p1.qtdsintoma);
        printf("sintomas: ");
        printarSintomas(&p1);
        printf("\n");
        break;
    case 4:
        printf("\tnome: %s\n",p1.nome);
        printf("\n");
        break;

    }
}

