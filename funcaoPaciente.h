#ifndef FUNCAOPACIENTE_H
#define FUNCAOPACIENTE_H
#include<stdio.h>
#include"estrutura.h"

char* retornaRisco(risco ri);
int editaPaciente(paciente *p1,char* nome,char* cpf, char* endereco);
int criaPaciente(paciente *p1,int idDoPaciente);
int adicionaRisco(paciente *p1);
int ordemDeAtendimento(paciente p1[]);
int printaPaciente(paciente p1,int modo);

#endif // FUNCAOPACIENTE_H
