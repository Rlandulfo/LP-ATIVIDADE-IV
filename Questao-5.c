#include <stdio.h>
#include <string.h>

struct Funcionario {
    char nome[50];
    char cargo[50];
    float salario;
};

float calcularMediaSalarial(struct Funcionario funcionarios[], int numFuncionarios, const char cargoAlvo[]) {
    int count = 0;
    float somaSalarios = 0.0;

    for (int i = 0; i < numFuncionarios; ++i) {
    
        if (strcmp(funcionarios[i].cargo, cargoAlvo) == 0) {
            somaSalarios += funcionarios[i].salario;
            count++;
        }
    }

    if (count > 0) {
        return somaSalarios / count;
    } else {
        
        return -1.0;
    }
}

int main() {

    struct Funcionario funcionarios[] = {
        {"Joao", "Programador", 5000.0},
        {"Maria", "Analista", 4500.0},
        {"Carlos", "Programador", 5500.0},
        {"Ana", "Gerente", 7000.0},
        
    };

    int numFuncionarios = sizeof(funcionarios) / sizeof(funcionarios[0]);

    const char cargoAlvo[] = "Programador";

    float mediaSalarial = calcularMediaSalarial(funcionarios, numFuncionarios, cargoAlvo);

    if (mediaSalarial != -1.0) {
        printf("A média salarial dos programadores é: %.2f\n", mediaSalarial);
    } else {
        printf("Não há funcionários com o cargo de Programador.\n");
    }

    return 0;
}