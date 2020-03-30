#ifndef FUNCAOSINTOMA_H
#define FUNCAOSINTOMA_H

#include"estrutura.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


sintoma* criarSintoma(char* qualSintoma);
int adicionarSintomaAoPaciente(paciente* p1);
int printarSintomas(paciente* p1);
int finalizar(paciente* p1);


#endif // FUNCAOSINTOMA_H
