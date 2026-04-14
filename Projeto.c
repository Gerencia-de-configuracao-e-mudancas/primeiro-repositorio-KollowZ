#include <stdio.h>
#include <conio.h>

int definir_tamanho(int linhas, int colunas) {
    return linhas * colunas;
}
void zerar_matriz(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) vetor[i] = 0;
}
void imprimir_matriz(int vetor[], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", vetor[i * colunas + j]);
        }
        printf("\n");
    }
}
void colocar_elemento(int vetor[], int linhas, int colunas) {
        int linha, coluna, valor; 
        for (int k = 0; k < linhas * colunas; k++) {

            printf("Digite a linha: ");
            scanf("%d", &linha);

            printf("Digite a coluna: ");
            scanf("%d", &coluna);

            printf("Digite o valor: ");
            scanf("%d", &valor);

            vetor[(linha-1) * colunas + (coluna-1)] = valor;

            printf("Matriz atualizada:\n");
            imprimir_matriz(vetor, linhas, colunas);
        }
}


int main(){
    int tamanho, linhas, colunas;
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);   
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);
    tamanho = definir_tamanho(linhas, colunas);
    int vetor[tamanho];
    zerar_matriz(vetor, tamanho);
    printf("Matriz zerada:\n");
    imprimir_matriz(vetor, linhas, colunas);
    colocar_elemento(vetor, linhas, colunas);
    printf("Matriz final:\n");
    imprimir_matriz(vetor, linhas, colunas);

    

    getch();

    return 0;
}