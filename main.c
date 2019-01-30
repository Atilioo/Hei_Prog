#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "paciente.h"
#include "funcaoPaciente.h"
#include "funcaoSintoma.h"

int main()
{
    paciente listaPacientes[3];
    printf("Adicionar Primeiro paciente:\n");
    criaPaciente(listaPacientes,1);
    printf("Adicionar Segundo paciente:\n");
    criaPaciente(listaPacientes+1,2);
    printf("Adicionar Terceiro paciente:\n");
    criaPaciente(listaPacientes+2,3);

    //adicionarSintomaAoPaciente(listaPacientes);
    //adicionarSintomaAoPaciente(listaPacientes+1);
    //adicionarSintomaAoPaciente(listaPacientes+2);


    printaPaciente(listaPacientes[0],2);
    printaPaciente(listaPacientes[1],2);
    printaPaciente(listaPacientes[2],2);

    adicionaRisco(listaPacientes);
    adicionaRisco(listaPacientes+1);
    adicionaRisco(listaPacientes+2);

    ordemDeAtendimento(listaPacientes);

    finalizar(&listaPacientes[0]);
    finalizar(&listaPacientes[1]);
    finalizar(&listaPacientes[2]);

    return 0;
}
