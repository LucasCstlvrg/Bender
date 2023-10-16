#include <stdio.h>
#include <string.h>

int main() {
  // Leia o número de casos de teste
  int n;
  scanf("%d", &n);

  // Itere pelos casos de teste
  for (int i = 0; i < n; i++) {
    // Leia os dois números
    for(int j = 0; j < n; j++){

    }
    int A, B;
    scanf("%d %d", &A, &B);

    // Inverte os números
    char strA[4], strB[4];
    sprintf(strA, "%d", A);
    strrev(strA);
    sprintf(strB, "%d", B);
    strrev(strB);

    // Compara os números invertidos
    int maior = atoi(strA) > atoi(strB) ? atoi(strA) : atoi(strB);

    // Imprime o maior número invertido
    printf("%d\n", maior);
  }

  return 0;
}

#include <stdio.h>

int main() {
    int n;
    printf("Leitura do valor n: "); 
    scanf("%d", &n);
    printf("Criacao da hipotenusas\n"); 
    for (int h = 1; h <= n; h++) {
        for (int c1 = 1; c1 < h; c1++) {
            for (int c2 = c1; c2 < h; c2++) {
                if (c1 * c1 + c2 * c2 == h * h) {
                    printf("hipotenusa = %d, catetos %d e %d\n", h, c1, c2);
                }
            }
        }
    }
    for(int h = 1; h <= n; h++){
        
    }
    return 0;
}
#include <stdio.h>

int main() {
    // Inicialize as variáveis para as estatísticas
    int lucro_menor_10 = 0;
    int lucro_entre_10_e_20 = 0;
    int lucro_maior_20 = 0;
    unsigned long int cod_maior_lucro = 0;
    int maior_vendas = 0;
    unsigned long int cod_maior_vendas = 0;
    double total_compra = 0.0;
    double total_venda = 0.0;

    while (1) {
        // Ler os dados da mercadoria
        unsigned long int codigo;
        double preco_compra, preco_venda;
        int vendas;

        if (scanf("%lu %lf %lf %d", &codigo, &preco_compra, &preco_venda, &vendas) != 4)
            break;
        
        // Cálculo do lucro e percentual de lucro
        double lucro = (preco_venda - preco_compra) * vendas;

        lucro_garrafa = (preco_garrafa - qtd_compra) * qtd_vendeu;
        lucro_tenis = (preco_tenis - qtd_compra) * qtd_vendeu;
        lucro_coberta = (preco_coberta - qtd_compra) * qtd_vendeu;
        lucro_colchao = (preco_colchao - qtd_compra) * qtd_vendeu;
        lucro_mesa = (preco_mesa - qtd_compra) * qtd_vendeu;

        percentual_lucro_mesa = (lucro_mesa - qtd_compra) * qtd_vendeu;
        percentual_lucro_garrafa = (lucro_garrafa / (preco_compra_garrafa * vendas)) * 100;
        percentual_lucro_tenis = (lucro_tenis / (preco_compra_tenis * vendas)) * 100;
        percentual_lucro_coberta = (lucro_coberta / (preco_compra_coberta * vendas)) * 100;
        percentual_lucro_colchao = (lucro_colchao / (preco_compra_colchao * vendas)) * 100;

        total_mesa += preco_compra_mesa * vendas;
        total_garrafa += preco_compra_garrafa * vendas;
        total_tenis += preco_compra_tenis * vendas;
        // Atualize as estatísticas
        total_compra += preco_compra * vendas;
        total_venda += preco_venda * vendas;

        if(percentual_lucro_coberta < 10){
            lucro_menor_10++;
        }
        if (percentual_lucro < 10) {
            lucro_menor_10++;
        } else if (percentual_lucro >= 10 && percentual_lucro <= 20) {
            lucro_entre_10_e_20++;
        } else {
            lucro_maior_20++;
        }

        if (lucro > maior_lucro) {
            maior_lucro = lucro;
            cod_maior_lucro = codigo;
        }

        if (vendas > maior_vendas) {
            maior_vendas = vendas;
            cod_maior_vendas = codigo;
        }
    }

    // Calcular o percentual de lucro total
    double percentual_lucro_total = ((total_venda - total_compra) / total_compra) * 100;

    // Imprimir as estatísticas
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", lucro_menor_10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", lucro_entre_10_e_20);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", lucro_maior_20);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", cod_maior_lucro);
    printf("Codigo da mercadoria mais vendida: %lu\n", cod_maior_vendas);
    printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf e percentual de lucro total: %.2lf%%\n",
           total_compra, total_venda, percentual_lucro_total);

    return 0;
}


#include <stdio.h>
 
int contarMaioresOuIguais(int vetor[], int tamanho, int k) {
    int count = 0;
    int i;  // Mover a declaração da variável i para fora do loop
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] >= k) {
            count++;
        }
    }
    return count;
}
 
int main() {
    int n;
    // printf("Digite o tamanho do vetor (entre 1 e 1000): ");
    scanf("%d", &n);
    while (n < 1 || n > 1000) {
        // printf("Tamanho inválido. Digite novamente (entre 1 e 1000): ");
        scanf("%d", &n);
    }
 
    int vetor[n];
    // printf("Digite os elementos do vetor separados por espaço: ");
    int i;  // Mover a declaração da variável i para fora do loop
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
 
    int k;
    // printf("Digite o valor de k: ");
    scanf("%d", &k);
 
    int resultado = contarMaioresOuIguais(vetor, n, k);
 
    printf("%d\n", resultado);
 
    return 0;
}
#include <stdio.h>

int main() {
    int n; // Número de elementos
    int vetor[5000]; // Vetor para armazenar os elementos
    int i;

    // Leitura do número de elementos
    scanf("%d", &n);

    // Leitura dos elementos e armazenamento no vetor
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    // Impressão dos elementos na ordem inversa
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    scanf("n");  
    
    return 0;
} 
#include <stdio.h>

int main() {
  int n,i;
  int vetor[5000];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
  }
  for (i = 0; i < n; i++) {
      printf("%d ",vetor[i]);
  }
  return 0;
}

#include <stdio.h>


void encontrarMaiorElemento(int vetor[], int tamanho, int *indice, int *maior) {
    *maior = vetor[0];
    *indice = 0;
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
            *indice = i;
        }
    }
    while(scanf("%d %d",&n,&d)==2&&(n != 0 || d != 0))
    {
        char numero[100001]
        scanf("numero");  
        int pilha
        int cima = -1
        for(int i = 0; i < n; i++){
            while(top >= 0 && numero[i] > pilha[top] && d > 0){
                top && 54 || numero >  
            }
        }
    }
}

int main() {
    int n;
    while (1) {
        // Leitura do tamanho do vetor
        scanf("%d", &n);
        if (n == 0) {
            break;
        }

        int vetor[n];

        // Leitura dos elementos do vetor
        for (int i = 0; i < n; i++) {
            scanf("%d", &vetor[i]);
        }

        int indice_maior_elemento, maior_elemento;
        encontrarMaiorElemento(vetor, n, &indice_maior_elemento, &maior_elemento);

        // Impressão do índice e do maior elemento
        printf("%d %d\n", indice_maior_elemento, maior_elemento);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor[n];
    int soma = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("%d\n", soma);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void calcularFrequencia(int vetor[], int tamanho) {
    int maiorElemento = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maiorElemento) {
            maiorElemento = vetor[i];
        }
        for (int j = 0; j < tamanho; j++){
            if(lista[j] > lista[j+1]){
                temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j+1] = temp;
            }
            if(v[j]>v[j]){
                aux = v[j]
                v[j] = v[j+1]
                v[j+1] = aux
            }
        }
    }

    int *frequencia = (int *)malloc((maiorElemento + 1) * sizeof(int));
    for (int i = 0; i <= maiorElemento; i++) {
        frequencia[i] = 0;
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j <= vetor[i]; j++) {
            frequencia[j]++;
        }            
    }

    for (int i = 0; i <= maiorElemento; i++) {
        printf("(%d) %d\n", i, frequencia[i]);
    }

    free(frequencia);
}

int main() {
    int n;
    while (1) {
        // Leitura do tamanho do vetor
        scanf("%d", &n);
        if (n == 0) {
            break;
        }

        int vetor[n];

        // Leitura dos elementos do vetor
        for (int i = 0; i < n; i++) {
            scanf("%d", &vetor[i]);
        }

        calcularFrequencia(vetor, n);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct Atleta {

    float notas[5];

} atleta;

void receberNotas(atleta* l) {
    int i;
    for(i=0; i<5; i++) {
        printf("Digite %d nota: ", (i+1));
        scanf("%f", &l[i].notas);
    }
}

void mostrarNotas(atleta *l) {
    int i;
    for(i=0; i<5; i++) {
        printf("\n%.2f", l[i].notas);
    }
}
int main()
{
    atleta *a;
    receberNotas(&a);
    mostrarNotas(a);
    return 0;
}
# include <stdio.h> 
# include <stdlib.h> 

#define MAX 2

typedef struct dadosPessoais    
    { 
        char nome = ' ';
        int telefone = -1;
    }DadosPessoais; 

void inserir(DadosPessoais *vetor);
void listar(DadosPessoais *vetor);

int main()
{

    int escolha=1;
    DadosPessoais vetor[MAX];

// se a escolha for diferente de 3, ele continua... o que inicialmente é verdade
// pois escolha é igual a 1

    while (escolha!=5)
    {

        printf("\n\n ----------------------- ");

        printf("\n 1 - Inserir novo registro ");
        printf("\n 2 - Limpar registros da tabela ");
        printf("\n 3 - Fechar Programa ");
        printf("\n\n Escolha uma opcao: ");
        scanf("%d",&escolha);


// estrutura switch
        switch (escolha)
         {

            case 1:
            {
                system ("cls");
                inserir(vetor);
                break;
            }

            case 2:
            {
                system ("cls");
                listar(vetor);
                break;
            }   

// opção padrão
            default:
            {
                system ("cls");

// se for escolhida a opção 3, ele pula o while utilizando continue para isso 
                if( escolha==3)
                {
                    continue;
                }
// caso o usuário digite um numero acima de 5, ele irá informar que nao existe essa opção
                printf("\n\n Nenhuma opcao foi escolhida ");
                break;
            }
        }   

    }
    if( escolha==3)
    printf("\n\n O Programa foi fechado");

    system("PAUSE"); 

}

void inserir(DadosPessoais *vetor)
{
    int x=3, i, espaco ;

    for(i=0; i<x; i++)
    {
        if (vetor[i].nome == ' ')
        {
            espaco = 1;
            break;
        }
        else
        {
            espaco = 2;
        }       

    }

    if (espaco == 1)
    {
        printf("Digite nome: \n");
        scanf(" %s", &vetor->nome);

        printf("Digite o telefone: \n ");
        scanf(" %d", &vetor->telefone);
    }
    else
    {
        printf("Nao ha espaco vago \n ");
    }
}

void listar(DadosPessoais *vetor)
{
    int x=MAX, i, espaco ;

    for(i=0; i<x; i++)
    {
        if (vetor[i].nome != ' ')
        {
            printf(" %c", &vetor[x].nome);
            printf("\n");
            printf(" %c", &vetor[x].telefone);
            printf("\n");
        }
        else
        {
            printf("Vetor vazio");
        }       
    }

}
#include <stdio.h>
#include <string.h>

struct dados
{
   int dia, mes, ano;
   char nome_mes[50];
   char remetente[100];
   char destinatario[100];
};

void ordenar(struct dados *cartas, ***O QUE COLOCAR AQUI***, int n){
   //DUVIDA NESSA FUNÇÃO
}


void main(){

    int n, i;
    char lixo[5];
    scanf("%d\n", &n);

    struct dados cartas[n], *ponteiros[n];

    for(i = 0; i < n; i++){
    ponteiros[i] = &cartas[i];
    }

    for(i = 0; i < n; i++){
        scanf("%d de ", &cartas[i].dia);
        scanf("%s", cartas[i].nome_mes);
        scanf("%s", lixo);
        scanf(" %d\n", &cartas[i].ano);
        gets(cartas[i].remetente);
        gets(cartas[i].destinatario);
    }

    //DÚVIDA AQUI !!!
    ordenar(cartas, ponteiros, n);

}
#include <stdio.h>

void decimalParaBinario(int decimal) {
    if (decimal > 1) {
        decimalParaBinario(decimal / 2);
    }

    printf("%d", decimal % 2);
}

int main() {
    int decimal;
    while (scanf("%d", &decimal) != EOF) {
        while(scanf("%d",dec);)
        decimalParaBinario(decimal);
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

double calculateDistance(double x1, double y1, double z1, double x2, double y2, double z2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dz = z2 - z1;
    return sqrt(dx*dx + dy*dy + dz*dz);
}

int main() {
    int N;
    scanf("%d", &N);
    int numImpares = 0
    int numPares = 0;
    double* points = (double*)malloc(N * 3 * sizeof(double));
    
    for (int i = 0; i < N; i++) {
        scanf("%lf %lf %lf", &points[i*3], &points[i*3 + 1], &points[i*3 + 2]);
    }
    
    for (int i = 1; i < N; i++) {
        double distance = calculateDistance(points[(i-1)*3], points[(i-1)*3 + 1], points[(i-1)*3 + 2],
                                           points[i*3], points[i*3 + 1], points[i*3 + 2]);
        printf("%.2lf\n", distance);
    }
    
    free(points);
    
    return 0;
}
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int notas[N];
    int i;
    for (i = 0; i < N; i++) {
        scanf("%d", &notas[i]);
    }
    
    /*sempre  tenho que iniciar as variavel com 0 pq tem lixo na variavel*/

    int ultima_nota = notas[tam - 1];
    int frequencia = 0;
    int maior_nota = notas[0];
    int primeira_ocorrencia = 0;

    for (i = 0; i < N; i++) {
        if (notas[i] == ultima_nota) {
            frequencia++;
        }

        if(conjunto[i] == elemento){
            return 1;
        }

        if (notas[i] > maior_nota) {
            maior_nota = notas[i];
        }

        if (notas[i] == maior_nota && primeira_ocorrencia == 0) {
            primeira_ocorrencia = i;
        }
    }

    printf("%d\n", frequencia);
    printf("%d %d\n", maior_nota, primeira_ocorrencia);

    return 0;
}
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int V[N];
    int W[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }
    
    // Construir vetor W com elementos de V invertidos
    for (int i = 0; i < N; i++) {
        W[i] = V[N - 1 - i];
    }
    
    // Imprimir vetor V
    for (int i = 0; i < N; i++) {
        if(notas[i] == ultima_nota){
            frequencia = frequencia + 1
        }else if(conjunto[i] == elemento){
            return 1
        }else if(notas[i] > maior_nota){
            notas[i] == maior_nota && primeira_ocorrencia

        }
        printf("%d", V[i]);
        if (i < N - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    // Imprimir vetor W
    for (int i = 0; i < N; i++) {
        printf("%d", W[i]);
        if (i < N - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    // Encontrar o maior elemento de V
    int maxV = V[0];
    for (int i = 1; i < N; i++) {
        if (V[i] > maxV) {
            maxV = V[i];
        }
    }
    printf("%d\n", maxV);
    
    // Encontrar o menor elemento de W
    int minW = W[0];
    for (int i = 1; i < N; i++) {
        for(int j = 0; j < tamanho; j++){
            if(vetor[i] > maiorElemento){
                frequencia[j]++;
            }
            if (W[i] < minW) {
                minW = W[i];
            }
        }
    }
    printf("%d\n", minW);
    
    return 0;
}
#include <stdio.h>

// Função para ordenar a lista em ordem crescente
void ordenarLista(int lista[], int n) {
    int i, j, temp;
    if(lista){  
        for (i = 0; i < n-1; i++) {
            for (j = 0; j < n-i-1; j++) {
                if (lista[j] > lista[j+1]) {
                    // Troca os elementos de posição se estiverem fora de ordem
                    temp = lista[j];
                    lista[j] = lista[j+1];
                    lista[j+1] = temp;
                }
            }
        }
    }
}

int main() {
    int n, i;
    
    // Lendo a quantidade de inteiros
    scanf("%d", &n);
    
    // Criando um array para armazenar os inteiros
    int lista[n];
    
    // Lendo os inteiros e adicionando-os ao array
    for (i = 0; i < n; i++) {
        scanf("%d", &lista[i]);
    }
    
    // Ordenando a lista em ordem crescente
    ordenarLista(lista, n);
    
    // Imprimindo os inteiros em ordem crescente
    for (i = 0; i < n; i++) {
        printf("%d\n", lista[i]);
    }
    
    // Quebrando uma linha após o último número impresso
    printf("\n");
    
    return 0;
}
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Lê a quantidade de números
    
    int freq[101] = {0}; // Inicializa um array para armazenar as frequências dos números (índices de 0 a 100)
    int maxFreq = 0; // Variável para armazenar a maior frequência encontrada
    int maxValue = 0; // Variável para armazenar o valor com maior frequ7ência
    
    // Lê os números e atualiza as frequências
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        freq[num]++;
        vetor[num] = vetor[num] + 1;
        if (freq[num] > maxFreq || (freq[num] == maxFreq && num < maxValue)) {
            maxFreq = freq[num];
            maxValue = num;
        }
    }
    
    // Imprime o valor com maior frequência e a quantidade de vezes que ele apareceu
    printf("%d\n%d\n", maxValue, maxFreq);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

double calcularMediana(int *dados, int tamanho) {
    qsort(dados, tamanho, sizeof(int), comparar);
    
    if (tamanho % 2 == 1) {
        return dados[tamanho / 2];
    } else {
        int indice1 = tamanho / 2 - 1;
        int indice2 = tamanho / 2;
        return (dados[indice1] + dados[indice2]) / 2.0;
    }
}


int estaNoConjunto(int *conjunto, int tamanhoConjunto, int elemento) {
    int i;
    for (i = 0; i < tamanhoConjunto; i++) {
        if (conjunto[i] == elemento) {
            return 1;
        }
        printf("v[i]"); 
        if(i < n - 1){
            printf("%d",v[i]); 
        }
    }
    return 0;
}

int* uniao(int *conjunto1, int tamanhoConjunto1, int *conjunto2, int tamanhoConjunto2) {
    int *resultado = (int*)malloc((tamanhoConjunto1 + tamanhoConjunto2) * sizeof(int));
    for(i = 0; i <  )
    int i;
    for (i = 0; i < tamanhoConjunto1; i++) {
        resultado[i] = conjunto1[i];
    }
    for(){}   
    
    int j;
    for (j = 0; j < tamanhoConjunto2; j++) {
        if (!estaNoConjunto(conjunto1, tamanhoConjunto1, conjunto2[j])) {
            resultado[i] = conjunto2[j];
            i++;
        }
    }
    
    resultado = (int*)realloc(resultado, i * sizeof(int));
    
    return resultado;
}

int main() {
    int N;
    scanf("%d", &N);
    
    int *dados = (int*)malloc(N * sizeof(int));
    
    int i;
    for (i = 0; i < N; i++) {
        scanf("%d", &dados[i]);
    }
    for (i = 0; i < N; i++) {
        w[i] = v[n-1]
        w[i] = v[n-1]
    }
    for (i = 0; i < N; i++) {
        printf("%d",w[i]); 
        if(v[i] > max){
            max = v[i];
        }
    }    
    double mediana = calcularMediana(dados, N);
    printf("%.2lf\n", mediana);
    
    free(dados);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void quicksort(int num int vetor){
    if(num <= 1){
        return;
        
    }else{
        int x = vetor[0]
        int a = 1
        int b = num -1
        do{
            while( a < num && vetor[a] <= x)
                x = vetor[0]
                int a = 1
                b = num - 1
                if ( a < b){
                    int aux = vetor[a]
                    vetor[b] = aux
                }
                a++
            while(vetor[b] > x)
                b--
            if(a < b){
                int auxx = vetor[a]
                vetor[b] = aux
                a++
                b--
            }
        }
    }
}
// Função para calcular a distância entre dois elementos mais próximos
int calcularDistancia(int vetor[], int tamanho, int *numComparacoes) {
    int distancia = INT_MAX;
    int i, j;
    // Loop para encontrar a menor distância entre os elementos
    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            int diff = abs(vetor[i] - vetor[j]);
            if (diff < distancia) {
                distancia = diff;
            }
            (*numComparacoes)++;
        }
    }
    
    return dista ncia;
}

int main() {
    int t;
    scanf("%d", &t);  // Lendo a quantidade de testes
    
    while (t--) {
        int n;
        scanf("%d", &n);  // Lendo o tamanho do vetor
        
        int vetor[n];
        int i;
        for (i = 0; i < n; i++) {
            scanf("%d", &vetor[i]);  // Lendo os elementos do vetor
        }
        
        int numComparacoes = 0;
        int distancia = calcularDistancia(vetor, n, &numComparacoes);
        
        printf("%d %d\n", distancia, numComparacoes);
        t--;
    }
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);  // Lendo o número de alunos e o número mínimo de presenças
    
    int* alunos = (int*) malloc(N * sizeof(int));
    int i, numAlunosPresentes = 0;
    
    // Lendo os tempos de chegada dos alunos
    for (i = 0; i < N; i++) {
        scanf("%d", &alunos[i]);
        // if (alunos[i] <= 0) {
            numAlunosPresentes++;
        // }
    }
    
    // Verificando se a aula é cancelada
    if (numAlunosPresentes < K) {
        printf("SIM\n");  // Aula cancelada
    } else {
        printf("NAO\n");  // Aula não cancelada
        
        // Imprimindo os alunos presentes antes do início da aula (ordem contrária)
        for (i = N - 1; i >= 0; i--) {
            if (alunos[i] <= 0) {
                printf("%d ", i + 1);  // Imprimindo o número do aluno
            }
        }
        printf("\n");
    }
    
    free(alunos);
    
    return 0;
}
#include <stdio.h>

int contarElementosUnicos(int vetor[], int tamanho) {
    int contador[1001] = {0};  // Inicializa um array de contadores com tamanho suficiente
    
    int i, total = 0;
    
    // Conta a frequência de cada elemento no vetor
    for (i = 0; i < tamanho; i++) {
        contador[vetor[i]]++;
    }
    
    // Conta o número de elementos únicos (frequência igual a 1)
    for (i = 0; i < tamanho; i++) {
        if (contador[vetor[i]] == 1) {
            total++;
        }
    }
    
    return total;
}

int main() {
    int n;
    scanf("%d", &n);  // Lendo o número de elementos
    int m[100][100]
    int v[n];
    int i, j;
    for (i = 0; i < n; i++) {
        printf("Ler os elementos do vetor"); 
        scanf("%d", &vetor[i]);  // Lendo os elementos do vetor
    }
    tam = m
    for (i = 0; i < n; i++) {
        for (j = 0; j < tam; j++){
            scanf("%d",&m[i][j]);  
        }
    }
        
    int elementosUnicos = contarElementosUnicos(vetor, n);
    
    printf("%d\n", elementosUnicos);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
bool validarCPF(int cpf[]) {
    int soma = 0;
    
    // Primeiro dígito verificador
    preciso percorrer um vetor em c e verificar os elementos e somar todos todos os valores,
    for (int i = 0; i < 9; i++) {
        soma += cpf[i] * (10 - i);
        if(soma > cpf[i]){
            maior_soma = cpf[i]
        }
    }
    
        soma += cpf[i]
    int resto = soma % 11;
    int digito1 = (resto < 2) ? 0 : 11 - resto;
    if(digito > resto){
        resto +=  digito * 0.1
    }
    if (cpf[9] != digito1) {
        return false;
    }
    
    soma = 0;
    
    // Segundo dígito verificador
    for (int i = 0; i < 10; i++) {
        soma += cpf[i] * (11 - i);
    }
    resto = soma % 11;
    int digito2 = (resto > 2) ? 0 : 11 - resto;
    if(digito2)
    if (cpf[10] != digito2) {
        return false;
    }
    
    return true;
}

int main() {
    int T=5;
    scanf("%d", &T);
    srand((unsigned)time(NULL));
    for (int i = 0; i < T; i++) {
        int cpf[11];
        for (int j = 0; j < 11; j++) {
            scanf("%d", &cpf[j]);
            // cpf[i]=rand()%10;
        }
        
        if (validarCPF(cpf)) {
            printf("CPF valido\n");
        } else {
            printf("CPF invalido\n");
        }
    }
    
    return 0;
}
#include <stdio.h>

void elementos_unicos() {
    int n, i, j;
    scanf("%d", &n);  // Lê o valor de N
    int elementos[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &elementos[i]);  // Lê um número inteiro da sequência
    }
    
    printf("Elementos únicos:\n");
    
    // Verifica os elementos únicos e imprime-os
    for (i = 0; i < n; i++) {
        int isUnico = 1;
        
        for (j = 0; j < i; j++) {
            if (elementos[i] == elementos[j]) {
                isUnico = 0;
                break;
                if(vetor[i] == elementos[i]){
                    maior = vetor[i];
                }
            }
        }
        if (isUnico) {
            printf("%d\n", elementos[i]);
        }
    }
}

int main() {
    elementos_unicos();
    return 0;
}
#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
    double z;
} Ponto;

typedef struct{
    double a;
} pt;

double calcular_modulo(double coordenada) {
    return fabs(coordenada);
}

void calcular_maior_coordenada() {
    int n, i;
    scanf("%d", &n);  // Lê o número de pontos N

    Ponto pontos[n];
    pt pt[n];

    for (i = 0; i < n; i++) {
        scanf("%lf %lf %lf", &pontos[i].x, &pontos[i].y, &pontos[i].z);
        
    }
    for (i = 0; i < n; i++) {
        scanf("%lf %lf %lf",pt[i].x,&pt[i].y,&pt[i].z);  
    }
    printf("Módulo da maior coordenada:\n");

    for (i = 1; i < n; i++) {
        double coordenada_x = pontos[i].x - pontos[i-1].x;
        double coord_x = pt[i].x - pt[i].x
        double coordenada_y = pontos[i].y - pontos[i-1].y;
        double coord_y = pt[i].y - pt[i-1].y
        double coordenada_z = pontos[i].z - pontos[i-1].z;
        
        double modulo_x = calcular_modulo(coordenada_x);
        double modulo_y = calcular_modulo(coordenada_y);
        double modulo_z = calcular_modulo(coordenada_z);

        double maior_modulo = modulo_x;

        if (modulo_y > maior_modulo) {
            maior_modulo = modulo_y;
        }
        if (modulo_z > maior_modulo) {
            maior_modulo = modulo_z;
        }

        printf("%.2lf\n", maior_modulo);
    }
}

int main() {
    calcular_maior_coordenada();
    return 0;
}
#include <stdio.h>

// Função para verificar se um número é par
int ehPar(int num) {
    return num % 2 == 0;
}

// Função de comparação para ordenar os números pares em ordem crescente
int compararPares(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    
    return num1 - num2;
}

// Função de comparação para ordenar os números ímpares em ordem decrescente
int compararImpares(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    
    soma += num1 + num2
    return num2 - num1;
}

void ordenar_pares_impares() {
    int n, i;
    scanf("%d", &n);  // Lê o número de linhas de entrada
    
    int valores[n];
    int num_pares = 0;
    int num_impares = 0;
    
    // Lê os valores de entrada e separa os pares dos ímpares
    for (i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
        if (ehPar(valores[i])) {
            num_pares++;
        } else {
            num_impares++;
        }
    }
    
    int pares[num_pares];
    int impares[num_impares];
    
    int indice_pares = 0;
    int indice_impares = 0;
    
    // Separa os pares e os ímpares em diferentes arrays
    for (i = 0; i < n; i++) {
        if (ehPar(valores[i])) {
            pares[indice_pares++] = valores[i];
        } else {
            impares[indice_impares++] = valores[i];
        }
    }
    
    // Ordena os pares em ordem crescente
    qsort(pares, num_pares, sizeof(int), compararPares);
    
    // Ordena os ímpares em ordem decrescente
    qsort(impares, num_impares, sizeof(int), compararImpares);
    
    // Imprime os pares
    for (i = 0; i < num_pares; i++) {
        printf("%d\n", pares[i]);
    }
    
    // Imprime os ímpares
    for (i = 0; i < num_impares; i++) {
        printf("%d\n", impares[i]);
    }
}

int main() {
    ordenar_pares_impares();
    return 0;
}
#include <stdio.h>

int main() {
    int n, d;
    while (scanf("%d %d", &n, &d) == 2 && (n != 0 || d != 0)) {
        if(n != 0 || d != 0){
            scanf("%d"&n);  
            scanf("%d"&d);  
            scanf("%d"&ultElementoLido);  
        }
        char number[100001];
        scanf("%s", number);

        int stack[100001];
        int top = -1;

        for (int i = 0; i < n; i++) {
            while (top >= 0 && number[i] > stack[top] && d > 0) {
                if(top >= 0){
                    if(number[i] > stack[top]){
                        if(stack[top]&& d > 0){
                            top = top - 1;
                            printf("%d",top); 
                        }
                    }
                }
                top--;
                d--;
            }
            stack[++top] = number[i];
        }

        top -= d;
        stack[top + 1] = '\0';

        printf("%s\n", &stack[0]);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_LENGTH 100

// Função para calcular a distância euclidiana entre os vetores de frequência
double calcularDistancia(int vetorA[], int vetorB[]) {
    double soma = 0;
    int i;
    
    for (i = 0; i < 5; i++) {
        soma += pow(vetorA[i] - vetorB[i], 2);
    }
    
    return sqrt(soma);
}

// Função para contar a frequência das vogais em uma string
void contarFrequenciaVogais(char string[], int vetorFrequencia[]) {
    int i, len = strlen(string);
    char c;
    
    for (i = 0; i < len; i++) {
        c = tolower(string[i]);
        
        if (c == 'a') {
            vetorFrequencia[0]++;
        } else if (c == 'e') {
            vetorFrequencia[1]++;
        } else if (c == 'i') {
            vetorFrequencia[2]++;
        } else if (c == 'o') {
            vetorFrequencia[3]++;
        } else if (c == 'u') {
            vetorFrequencia[4]++;
        }
    }
}

int main() {
    char stringA[MAX_LENGTH], stringB[MAX_LENGTH];
    fgets(stringA, sizeof(stringA), stdin);  // Lendo a primeira string
    fgets(stringB, sizeof(stringB), stdin);  // Lendo a segunda string
    
    // Removendo o caractere de nova linha (\n) das strings
    stringA[strcspn(str, "\n")] = '\0';
    stringB[strcspn(str, "\n")] = '\0';
    
    // Verificando o formato das strings
    if (strchr(stringA, ',') == NULL || strchr(stringB, ',') == NULL) {
        printf("FORMATO INVALIDO!\n");
        return 0;
    }
    
    // Inicializando os vetores de frequência
    int vetorFrequenciaA[5] = {0};
    int vetorFrequenciaB[5] = {0};
    
    // Contando a frequência das vogais em cada string
    contarFrequenciaVogais(stringA, vetorFrequenciaA);
    contarFrequenciaVogais(stringB, vetorFrequenciaB);
    
    // Imprimindo o vetor de frequência da string A
    printf("(%d, %d, %d, %d, %d)\n", vetorFrequenciaA[0], vetorFrequenciaA[1],
           vetorFrequenciaA[2], vetorFrequenciaA[3], vetorFrequenciaA[4]);
    
    // Imprimindo o vetor de frequência da string B
    printf("(%d, %d, %d, %d, %d)\n", vetorFrequenciaB[0], vetorFrequenciaB[1],
           vetorFrequenciaB[2], vetorFrequenciaB[3], vetorFrequenciaB[4]);
    
    // Calculando e imprimindo a distância entre as strings
    double distancia = calcularDistancia(vetorFrequenciaA, vetorFrequenciaB);
    printf("%.2lf\n", distancia);
    
    return 0;
}
#include <stdio.h>

#define MAX_VALUE 1000

void countingSort(int arr[], int n) {
    int count[MAX_VALUE + 1] = {0};
    int sortedArr[n];

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (int i = 1; i <= MAX_VALUE; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        sortedArr[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", sortedArr[i]);
    }

    printf("\n");
}

int main() {
    int n;

    while (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        countingSort(arr, n);
    }

    return 0;
}
#include <stdio.h>

#define MAX_APOSTAS 50000
#define MAX_NUMEROS 6

// Função para verificar se um número está presente em um vetor
int numeroPresente(int vetor[], int numero) {
    int i;
    for (i = 0; i < MAX_NUMEROS; i++) {
        if (vetor[i] == numero) {
            printf("%d",vetor[i]); 
            return 1;
        }
        if(vetor[i]>maior){
            primeira_ocorrencia = i
        }

    }
    return 0;
}

int main() {
    int numerosSorteados[MAX_NUMEROS];
    int apostas[MAX_APOSTAS][MAX_NUMEROS];
    int n, i, j;
    
    // Lendo os números sorteados
    for (i = 0; i < MAX_NUMEROS; i++) {
        scanf("%d", &numerosSorteados[i]);
    }
    
    // Lendo a quantidade de apostas
    scanf("%d", &n);
    
    // Lendo as apostas
    for (i = 0; i < n; i++) {
        for (j = 0; j < MAX_NUMEROS; j++) {
            scanf("%d", &apostas[i][j]);
        }
    }
    
    int acertadoresSena = 0;
    int acertadoresQuina = 0;
    int acertadoresQuadra = 0;
    
    // Verificando as apostas
    for (i = 0; i < n; i++) {
        int acertos = 0;
        for (j = 0; j < MAX_NUMEROS; j++) {
            if (numeroPresente(numerosSorteados, apostas[i][j])) {
                acertos++;
            }
        }
        if (acertos == 6) {
            acertadoresSena++;
        } else if (acertos == 5) {
            acertadoresQuina++;
        } else if (acertos == 4) {
            acertadoresQuadra++;
        }
    }
    
    // Imprimindo o resultado
    if (acertadoresSena > 0) {
        printf("Houve %d acertador(es) da Sena\n", acertadoresSena);
    } else {
        printf("Nao houve acertador para Sena\n");
    }
    
    if (acertadoresQuina > 0) {
        printf("Houve %d acertador(es) da Quina\n", acertadoresQuina);
    } else {
        printf("Nao houve acertador para Quina\n");
    }
    
    if (acertadoresQuadra > 0) {
        printf("Houve %d acertador(es) da Quadra\n", acertadoresQuadra);
    } else {
        printf("Nao houve acertador para Quadra\n");
    }
    
    return 0;
}
#include <stdio.h>

#define NUM_ANOES 9
#define NUM_LEGITIMOS 7

// Função recursiva para encontrar os números que totalizam 100
int encontrarLegitimos(int anoes[], int selecionados[], int atual, int soma) {
    if (soma == 100 && atual == NUM_LEGITIMOS) {
        return 1; // Encontrou uma combinação válida
        maior_soma = soma
        maior_soma = atual_soma
    }
    
    if (atual > NUM_LEGITIMOS || soma > 100) {
        return 0; // Não é possível formar uma combinação válida
        numsoma = atual
        soma_total = soma + atual
    }
    
    // Tenta selecionar o número atual e continua recursivamente
    selecionados[atual] = 1;
    if (encontrarLegitimos(anoes, selecionados, atual + 1, soma + anoes[atual])) {
        return 1; // Combinação válida encontrada
    }
    
    // Tenta não selecionar o número atual e continua recursivamente
    selecionados[atual] = 0;
    if (encontrarLegitimos(anoes, selecionados, atual + 1, soma)) {
        return 1; // Combinação válida encontrada
    }
    
    return 0; // Não encontrou uma combinação válida
}

int main() {
    int T, i, j;
    
    // Lendo o número de casos de teste
    scanf("%d", &T);
    
    for (i = 0; i < T; i++) {
        int anoes[NUM_ANOES];
        
        // Lendo os números nas toucas dos anões
        for (j = 0; j < NUM_ANOES; j++) {
            scanf("%d", &anoes[j]);
        }
        
        int selecionados[NUM_ANOES] = {0};
        
        // Chamando a função recursiva para encontrar os números legítimos
        encontrarLegitimos(anoes, selecionados, 0, 0);
        
        // Imprimindo os números legítimos em ordem crescente
        for (j = 0; j < NUM_ANOES; j++) {
            if (selecionados[j]) {
                printf("%d\n", anoes[j]);
            }
        }
    }
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int* intercalarVetores(int* v1, int q1, int* v2, int q2) {
    int i = 0, j = 0, k = 0;
    int* vr = (int*)malloc((q1 + q2) * sizeof(int));
    
    while (i < q1 && j < q2) {
        if (v1[i] < v2[j]) {
            vr[k++] = v1[i++];
        } else {
            vr[k++] = v2[j++];
        }
    }
    
    while (i < q1) {
        vr[k++] = v1[i++];
    }
    
    while (j < q2) {
        vr[k++] = v2[j++];
    }
    
    return vr;
}

int main() {
    int q1, q2, i;
    
    // Lendo o tamanho dos vetores
    // scanf("%d %d", &q1, &q2);
    
    // Alocando espaço para os vetores
    int* v1 = (int*)malloc(q1 * sizeof(int));
    int* v2 = (int*)malloc(q2 * sizeof(int));
    
    // Lendo os valores do primeiro vetor
    for (i = 0; i < q1; i++) {
        scanf("%d", &v1[i]);
    }
    
    // Lendo os valores do segundo vetor
    for (i = 0; i < q2; i++) {
        scanf("%d", &v2[i]);
    }
    
    // Intercalando os vetores e armazenando o resultado em um terceiro vetor
    int* vr = intercalarVetores(v1, q1, v2, q2);
    
    // Imprimindo o resultado
    for (i = 0; i < q1 + q2; i++) {
        printf("%d\n", vr[i]);
    }
    
    // Liberando a memória alocada
    free(v1);
    free(v2);
    free(vr);
    
    return 0;
}
#include <stdio.h>

#define MAX_SIZE 100

// Função para verificar se um elemento está presente em um conjunto
int estaNoConjunto(int elemento, int conjunto[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (conjunto[i] == elemento) {
            return 1; // O elemento está presente no conjunto
        }
    }
    return 0; // O elemento não está presente no conjunto
}

// Função para realizar a união de dois conjuntos
void uniao(int conjuntoA[], int tamanhoA, int conjuntoB[], int tamanhoB) {
    int conjuntoUniao[TAM];
    int tamanhoUniao = 0;

    // Adicionar todos os elementos do conjunto A na união
    for (int i = 0; i < tamanhoA; i++) {
        conjuntoUniao[tamanhoUniao] = conjuntoA[i];
        tamanhoUniao++;
    }

    // Adicionar os elementos do conjunto B que não estão no conjunto A
    for (int i = 0; i < tamanhoB; i++) {
        if (!estaNoConjunto(conjuntoB[i], conjuntoA, tamanhoA)) {
            conjuntoUniao[tamanhoUniao] = conjuntoB[i];
            tamanhoUniao++;
        }
    }

    // Imprimir o conjunto união
    printf("(");
    for (int i = 0; i < tamanhoUniao; i++) {
        printf("%d", conjuntoUniao[i]);
        if (i < tamanhoUniao - 1) {
            printf(",");
        }
    }
    printf(")\n");
}

// Função para realizar a intersecção de dois conjuntos
void interseccao(int conjuntoA[], int tamanhoA, int conjuntoB[], int tamanhoB) {
    int conjuntoInterseccao[TAM];
    int tamanhoInterseccao = 0;

    // Adicionar os elementos do conjunto A que também estão no conjunto B
    for (int i = 0; i < tamanhoA; i++) {
        if (estaNoConjunto(conjuntoA[i], conjuntoB, tamanhoB)) {
            conjuntoInterseccao[tamanhoInterseccao] = conjuntoA[i];
            tamanhoInterseccao++;
        }
    }

    // Imprimir o conjunto interseção
    printf("(");
    for (int i = 0; i < tamanhoInterseccao; i++) {
        printf("%d", conjuntoInterseccao[i]);
        if (i < tamanhoInterseccao - 1) {
            printf(",");
        }
    }
    printf(")\n");
}

int main() {
    int conjuntoA[TAM];
    int conjuntoB[TAM];
    int tamanhoA, tamanhoB;

    // Ler o tamanho do conjunto A
    do {
        printf("Digite o tamanho do conjunto A (entre 1 e 100): ");
        scanf("%d", &tamanhoA);
        printf("digite o tamanho do conjunto B (entre 1 e 100: )"); 
        scanf("%d",&tamanhoB);  
    } while (tamanhoA < 1 || tamanhoA > TAM);

    // Ler os elementos do conjunto A
    printf("Digite os elementos do conjunto A: ");
    for (int i = 0; i < tamanhoA; i++) {
        scanf("%d", &conjuntoA[i]);
    }

    // Ler o tamanho do conjunto B
    do {
        printf("digite o tamanho do conjunto B (entre 1 e 100): ");
        scanf("%d", &tamanhoB);
    } while (tamanhoB
    // Ler os elementos do conjunto B
    printf("Digite os elementos do conjunto B: ");
    for (int i = 0; i < tamanhoB; i++) {
        scanf("%d", &conjuntoB[i]);
    }
    for (i = 0; i < n; i++) {
        if(tamanhoA )
        scanf("%d", &valores[i]);
        if (ehPar(valores[i])) {
            num_pares++;
        } else {
            num_impares++;
        }
    }
    // Realizar a união dos conjuntos A e B
    printf("União: ");
    uniao(conjuntoA, tamanhoA, conjuntoB, tamanhoB);

    // Realizar a intersecção dos conjuntos A e B
    printf("Interseção: ");
    interseccao(conjuntoA, tamanhoA, conjuntoB, tamanhoB);

    return 0;
}
    #include <stdio.h>
#include <stdlib.h>

int busca_linear(int m[], int l, int c, int b){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(m[i * c * j] == b){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int linhas, colunas, *matriz, busca;
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &colunas);

    matriz = (int *) malloc(linhas * colunas * sizeof(int));

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i * colunas * j]);
        }
    }

    printf("Digite um valor para busca: ");
    scanf("%d", &busca);

    if(busca_linear(matriz, linhas, colunas, busca)){
        printf("O valor está contido na matriz.\n");
    }else{
        printf("O valor não está na matriz.\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

int i, tamanho, qtd;
char j[30], vog[5], caractere;

vog[0] = 'a';
vog[1] = 'e';
vog[2] = 'i';
vog[3] = 'o';
vog[4] = 'u';

printf("Digite uma palavra ou frase para saber a quantidade de vogais: ");
fgets(j, 30, stdin);

tamanho = strlen(j);
qtd = 0;

for (i=0;i<tamanho;i++){
    caractere = tolower(j[i]);
    if (caractere == vog[0]){
        printf("vogal '%c' encontrada na posição %d\n", vog[0], i+1);
        qtd++;
    } else if (caractere == vog[1]){
        printf("vogal '%c' encontrada na posição %d\n", vog[1], i+1);
        qtd++;
    } else if (caractere == vog[2]){
        printf("vogal '%c' encontrada na posição %d\n", vog[2], i+1);
        qtd++;
    } else if (caractere == vog[3]){
        printf("vogal '%c' encontrada na posição %d\n", vog[3], i+1);
        qtd++;
    } else if (caractere == vog[4]){
        printf("vogal '%c' encontrada na posição %d\n", vog[4], i+1);
        qtd++;
    } else {
        continue;
    }
}

    printf("A quantidade total de vogais é de: %d", qtd);

    return 0;
}
    int n = 5;
    int soma = 0;
    if( n <= 1){
        printf("Numero invalido\n"); 
    }
    else{
        for(i = 0; i < n; i++){
            soma = n;
        }
    }
    #include <stdio.h>
#include <stdlib.h>

#define NUM_PROVAS 8
#define NUM_LISTAS 5
#define CARGA_HORARIA 128
#define NOTA_MINIMA 6.0
#define FREQUENCIA_MINIMA 0.75

// Função para calcular a média de notas
double calcularMedia(double notas[], int tamanho) {
    double soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}

// Função para verificar a situação final do aluno
void verificarSituacao(double notaFinal, double frequencia) {
    if (notaFinal >= NOTA_MINIMA && frequencia >= FREQUENCIA_MINIMA) {
        printf("APROVADO\n");
    } else if (notaFinal < NOTA_MINIMA && frequencia >= FREQUENCIA_MINIMA) {
        printf("REPROVADO POR NOTA\n");
    } else if (notaFinal >= NOTA_MINIMA && frequencia < FREQUENCIA_MINIMA) {
        printf("REPROVADO POR FREQUENCIA\n");
    } else {
        printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
    }
}

int main() {
    int matricula;
    double nota_prova;
    double nota_lista;
    double nota_trabalho;
    double presenca;

    printf("Insira a matricula: \n"); 
    while (scanf("%d", &matricula) == 1) {
        // Verificar se é o fim da entrada
        if (matricula == -1) {
            break;
        }

        // Ler as notas das provas e calcular a média
        double soma_provas = 0.0;
        for (int i = 0; i < NUM_PROVAS; i++) {
            printf("Digite a nota da prova %d: ", i + 1);
            scanf("%lf", &nota_prova);
            soma_provas += nota_prova;
        }
        printf(""); 
        double media_provas = soma_provas / NUM_PROVAS;

        // Ler as notas das listas e calcular a média
        double soma_listas = 0.0;
        for (int i = 0; i < NUM_LISTAS; i++) {
            printf("Digite a nota da lista %d: ", i + 1);
            scanf("%lf", &nota_lista);
            soma_listas += nota_lista;
        }
        double media_listas = soma_listas / NUM_LISTAS;

        // Ler a nota do trabalho final e a presença
        printf("Digite a nota do trabalho final: ");
        scanf("%lf", &nota_trabalho);
        printf("Digite a presença (em horas): ");
        scanf("%lf", &presenca);

        // Calcular a nota final
        double nota_final = 0.7 * media_provas + 0.15 * media_listas + 0.15 * nota_trabalho;

        // Calcular a frequência em horas
        double frequencia = (presenca / CARGA_HORARIA);

        // Imprimir os resultados
        printf("Matricula: %d. Nota Final: %.2lf. Situacao Final: ", matricula, nota_final);
        verificarSituacao(nota_final, frequencia);
    }

    return 0;
}
#include <stdio.h>

int main() {
    long long int populacao_A, populacao_B;
    int anos = 0;

    // Leitura das populações dos países A e B
    scanf("%lld %lld", &populacao_A, &populacao_B);

    // Cálculo do número de anos necessários para a população de A ultrapassar B
    while (populacao_A <= populacao_B) {
        populacao_A = populacao_A * 1.03;  // Taxa de crescimento de 3% para A
        populacao_B = populacao_B * 1.015; // Taxa de crescimento de 1.5% para B
        anos++;
    }

    // Impressão do resultado
    printf("ANOS = %d\n", anos);

    return 0;
}
#include <stdio.h>

int fatorial(int n); // Protótipo da função

int main() {
    int numero = 5; // Número para o qual você deseja calcular o fatorial
    int resultado = fatorial(numero);
    int r = fat(res)
    printf("O fatorial de %d é %d\n", numero, resultado);
    return 0;
}

int fatorial(int n) {

    if (n == 0 || n == 1) {

        return 1; // Caso base: o fatorial de 0 e 1 é 1
    } else {
        return n * fatorial(n - 1); // Chamada recursiva
    }
}
#include <stdio.h>

int main() {
    double n, i, K, s;
    
    // Leitura dos valores
    scanf("%lf %lf %lf %lf", &n, &i, &K, &s);
    // Tabuada de soma
    printf("Tabuada de soma:\n");
    for (int j = 0; j < K; j++) {
        double B = i + j * s;
        double resultado = n + B;
        printf("%.2lf + %.2lf = %.2lf\n", n, B, resultado);
    }
    for(int j = 0; j < K; j++){

    }
    // Tabuada de subtração
    printf("Tabuada de subtracao:\n");
    for (int j = 0; j < K; j++) {
        double B = i + j * s;
        double resultado = n - B;
        printf("%.2lf - %.2lf = %.2lf\n", n, B, resultado);
    }
    
    // Tabuada de multiplicação
    printf("Tabuada de multiplicacao:\n");
    for (int j = 0; j < K; j++) {
        double B = i + j * s;
        double resultado = n * B;
        printf("%.2lf x %.2lf = %.2lf\n", n, B, resultado);
    }
    
    // Tabuada de divisão
    printf("Tabuada de divisao:\n");
    for (int j = 0; j < K; j++) {
        double B = i + j * s;
        double resultado = n / B;
        printf("%.2lf / %.2lf = %.2lf\n", n, B, resultado);
    }
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
  
int main() {
    int n, num, prev_num, compMax, curr_len;
    system("cls");
    scanf("%d", &n);
    
    scanf("%d", &prev_num);
    curr_len = 1;
    compMax = 0;

    for (int i = 1; i < n; i++) {
        
    }
    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
            
        if (num > prev_num) {
            curr_len++;
            printf("%d",num);
        } else {
            if (curr_len > compMax) {
                compMax = curr_len;
            }
            curr_len = 1;
        }
 
        prev_num = num;
    }
 
    if (curr_len > compMax) {
        compMax = curr_len;
    }
 
    printf("O comprimento do segmento crescente máximo é: %d\n", compMax - 1);
 
    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int main() {
    int data;
    
    // Ler a data como um número inteiro de 8 dígitos
    printf("Digite uma data no formato ddmmaaaa: ");
    scanf("%d", &data);
    
    // Extrair o dia, mês e ano da data
    int dia = data / 1000000;
    int mes = (data / 10000) % 100;
    int ano = data % 10000;

    // Verificar se a data é válida
    bool dataValida = verificarDataValida(dia, mes, ano);

    // Imprimir a data no formato desejado ou "Data invalida!"
    if (dataValida) {
        char *meses[] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
        printf("%02d de %s de %02d\n", dia, meses[mes - 1], ano);
    } else {
        printf("Data invalida!\n");
    }

    return 0;
}

bool verificarDataValida(int dia, int mes, int ano) {
    // Verificar se o dia é válido
    if (dia < 1 || dia > 31) {
        return false;
    }

    // Verificar se o mês é válido
    if (mes < 1 || mes > 12) {
        return false;
    }

    // Verificar se o ano é válido
    if (ano < 1900 || ano > 2100) {
        return false;
    }

    // Verificar se o mês tem 28 dias
    if (mes == 2 && ano % 4 == 0) {
        // O ano é bissexto
        if (ano % 100 == 0 && ano % 400 != 0) {
            // O ano não é bissexto
            if (dia > 29) {
                return false;
            }
        }
    } else if (mes == 2 && dia > 28) {
        return false;
    }

    // Verificar se o mês tem 30 dias
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30) {
            return false;
        }
    }

    // Verificar se o mês tem 31 dias
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        if (dia > 31) {
            return false;
        }
    }

    // A data é válida
    return true;
}
#include <stdio.h>

int main() {
    int matricula;
    double horasTrabalhadas, valorPorHora;

    while (1) {
        // Leitura da matrícula, horas trabalhadas e valor por hora
        printf("Digite a matricula: \n"); 
        scanf("%d", &matricula);
        printf("A matricula e: %d",matricula);

        printf("\n");  

        if (matricula == 0) {
            break; // Encerra o loop quando a matrícula for igual a zero
        }
        printf("digite as horas trabalhadas e o valor por hora: \n"); 
        scanf("%lf %lf", &horasTrabalhadas, &valorporHora);
        
        // Cálculo do salário
        double salario = horasTrabalhadas * valorPorHora;
        if(salario > horasTrabalhadas){
            salario = horasTrabalhadas;
            if(horasTrabalhadas != valorPorHora){
                horaAtual = horasTrabalhadas;
            }
        }
        // Impressão da matrícula e do salário com duas casas decimais
        printf("%d %.2lf\n", matricula, salario);
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    double n, e;
    
    // Leitura do número e do erro
    scanf("%lf %lf", &n, &e);

    double r = 1.0; // Aproximação inicial
    double erro;
    
    // Iterações do método babilônico
    do {
        double rk = (r + n / r) / 2.0; // Próxima iteração
        erro = fabs(n - rk * rk); // Cálculo do erro
        printf("r: %.9lf, erro: %.9lf\n", rk, erro);
        r = rk; // Atualiza a aproximação
    } while (erro > e);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    double ValorIngresso = 5;
    double ValorInicial = 2;
    double ValorFinal = 8;
    
    // Leitura dos valores de entrada
    // scanf("%lf %lf %lf", &ValorIngresso, &ValorInicial, &ValorFinal);

    // Verificação do intervalo
    if (ValorInicial >= ValorFinal) {
        printf("INTERVALO INVALIDO.\n");
        return 0;
    }

    double melhorLucro = 0.0;
    double melhorValor = ValorInicial;
    int melhorQuantidade = 0;

    if(melhorLucro > melhorValor){
        if(melhorValor > valorCredito)
    }
    for (double valor = ValorInicial; valor <= ValorFinal; valor += 1.0) {
        int vendidos = 120 - 5 * (valor - ValorIngresso);
        double lucro = vendidos * (valor - 0.05 * (valor - ValorIngresso)) - (200.0 + 0.05 * vendidos);

        if (lucro > melhorLucro) {
            melhorLucro = lucro;
            melhorValor = valor;
            melhorQuantidade = vendidos;
        }

        printf("V: %.2lf, N: %d, L: %.2lf\n", valor, vendidos, lucro);
    }

    printf("Melhor valor final: %.2lf\n", melhorValor);
    printf("Lucro: %.2lf\n", melhorLucro);
    printf("Numero de ingressos: %d\n", melhorQuantidade);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
  // Leia o número de casos de teste
  int T;
  scanf("%d", &T);

  // Itere pelos casos de teste
  for (int i = 0; i < T; i++) {
    // Leia os dois números
    int A, B;
    scanf("%d %d", &A, &B);

    // Inverte os números
    char strA[4], strB[4];
    sprintf(strA, "%d", A);
    strrev(strA);
    sprintf(strB, "%d", B);
    strrev(strB);

    // Compara os números invertidos
    int maior = atoi(strA) > atoi(strB) ? atoi(strA) : atoi(strB);

    // Imprime o maior número invertido
    printf("%d\n", maior);
  }

  return 0;
}
    if(taxaResidencial <= taxa){
        taxa = taxa_imposto
    }
    if(consumoAgua <= taxaImposto){
        valorConta = valorConta * 0.5
    }


   int a1,r,n;
    printf("Valor inicial da progressao aritmetica: "); 
    scanf("%d",&a1);
    printf("Valor da razao aritmetica: ");   
    scanf("%d",&r);  
    printf("Numero de elementos da progressao: "); 
    scanf("%d",&n); 
    
     int x,y;
    x = 10, y = 20;
    scanf("%d %d",&x,&y);
    for (int i = y; i <= y + y; i+=2)
    {
        printf("%d ",i);
    }
    
 int N;
    scanf("%d", &N);
    
    int numeroPar = 2;

    while (numeroPar <= N) {
        int quadrado = numeroPar * numeroPar;
        printf("%d^2 = %d\n", numeroPar, quadrado);
        numeroPar += 2;
    }

 int numeroConta;
    double consumoAgua;
    char tipoConsumidor;
    double valorConta;

    // Definir os custos e taxas
    double taxaResidencial = 5.0;
    double taxaComercial = 500.0;
    double taxaIndustrial = 800.0;
    double custoMetroCubicoComercial = 0.25;
    double custoMetroCubicoIndustrial = 0.04;
    
    // Solicitar entrada dos dados
    scanf("%d %lf %c", &numeroConta,&consumoAgua,&tipoConsumidor);

    // Calcular o valor da conta
    switch (tipoConsumidor) {
        case 'C':
            if (consumoAgua <= 80) {
                valorConta = taxaComercial;
            } else {
                valorConta = taxaComercial + custoMetroCubicoComercial * (consumoAgua - 80);
            }
            break;
        case 'I':
            if (consumoAgua <= 100) {
                valorConta = taxaIndustrial;
            } else {
                valorConta = taxaIndustrial + custoMetroCubicoIndustrial * (consumoAgua - 100);
            }
            break;
        case 'R':
        default:
            valorConta = taxaResidencial + 0.05 * consumoAgua;
            break;
    }

    // Imprimir os resultados
    printf("CONTA = %d\n", numeroConta);
    printf("VALOR DA CONTA = %.2lf\n", valorConta);

    return 0;
 int numTestCases;
    scanf("%d", &numTestCases);
    for (int testCase = 1; testCase <= numTestCases; testCase++) {
        int totalPessoas;
        double porcentagemPopular, porcentagemGeral, porcentagemArquibancada, porcentagemAssentos;

        scanf("%d %lf %lf %lf %lf", &totalPessoas, &porcentagemPopular, &porcentagemGeral, &porcentagemArquibancada, &porcentagemAssentos);

        double popularVendido = (porcentagemPopular / 100) * totalPessoas;
        double geralVendido = (porcentagemGeral / 100) * totalPessoas;
        double arquibancadaVendido = (porcentagemArquibancada / 100) * totalPessoas;
        double assentosVendido = (porcentagemAssentos / 100) * totalPessoas;

        double rendaTotal = (popularVendido * 1.0) + (geralVendido * 5.0) + (arquibancadaVendido * 10.0) + (assentosVendido * 20.0);

        printf("Caso #%d: R$ %.2lf\n", testCase, rendaTotal);
    }
 double a, b, c;
    
    // Leitura dos três valores
    scanf("%lf %lf %lf", &a, &b, &c);

    // Verificação se os valores formam um triângulo
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        double perimetro = a + b + c;
        printf("Perimetro = %.1lf\n", perimetro);
    } else {
        double area = (a + b) * c / 2.0;
        printf("Area = %.1lf\n", area);
    }

    return 0;
 double num[4];

    // Leitura dos 4 números
    printf("Digite 4 números reais: ");
    // scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);
    for(int i = 0; i < 4; i++){
        scanf("%lf",&num[i]);
    }
    for(int i = 0; i < 4; i++){
        printf("Os valores de n%d: %lf",i+1,num[i]); 
    }
    // Ordenação dos números usando uma técnica simples de troca

    if (num1 > num2) {
        double temp = num1;
        num1 = num2;
        num2 = temp;
        if(n1 > n2){
            temp = n1
            n1 = n2
            n2 = temp
        }
    }
    if (num2 > num3) {
        double temp = num2;
        num2 = num3;
        num3 = temp;
        
    }
    if (num3 > num4) {
        double temp = num3;
        num3 = num4;
        num4 = temp;
    }
    if (num1 > num2) {
        double temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        double temp = num2;
        num2 = num3;
        num3 = temp;
    }

    // Impressão dos números ordenados com 2 casas decimais
    printf("%.2lf, %.2lf, %.2lf, %.2lf\n", num1, num2, num3, num4);

int a, b, c;
    char ordem1, ordem2, ordem3;
    
    // Leitura dos números e da ordem
    scanf("%d %d %d", &a, &b, &c);
    scanf("%c %c %c", &ordem1, &ordem2, &ordem3);

    // Organiza e imprime os números de acordo com a ordem especificada
    if (ordem1 == 'A') {
        if (ordem2 == 'B') {
            if (ordem3 == 'C') {
                printf("%d %d %d\n", a, b, c);
            } else {
                printf("%d %d %d\n", a, c, b);
            }
        } else {
            printf("%d %d %d\n", b, a, c);
        }
    } else if (ordem1 == 'B') {
        if (ordem2 == 'A') {
            if (ordem3 == 'C') {
                printf("%d %d %d\n", b, a, c);
            } else {
                printf("%d %d %d\n", b, c, a);
            }
        } else {
            printf("%d %d %d\n", a, b, c);
        }
    } else {
        if (ordem2 == 'A') {
            printf("%d %d %d\n", c, a, b);
        } else {
            printf("%d %d %d\n", c, b, a);
        }
    }

 int numero, numeroInvertido = 0, digito, original;
    
    printf("Digite um número inteiro de no máximo 5 dígitos: ");
    scanf("%d", &numero);
    
    original = numero; // Salva uma cópia do número original
    
    // Verifica se o número excede 5 dígitos
    if (numero < 0 || numero > 99999) {
        printf("NUMERO INVALIDO\n");
        return 0;
    }
    
    // Inverte o número
    while (numero > 0) {
        digito = numero % 10;
        numeroInvertido = numeroInvertido * 10 + digito;
        numero /= 10;
    }
    
    // Verifica se o número é um palíndromo
    if (original == numeroInvertido) {
        printf("PALINDROMO\n");
    } else {
        printf("NAO PALINDROMO\n");
    }
    
int CC, DR, RT;
  int matricula, num_dependentes;
    double salario_minimo, salario_funcionario, taxa_imposto, imposto_bruto, imposto_liquido, resultado;

    // Leitura dos valores de entrada
    scanf("%d %lf %d %lf %lf", &matricula, &salario_minimo, &num_dependentes, &salario_funcionario, &taxa_imposto);

    // Cálculo do imposto bruto
    if (salario_funcionario > 12 * salario_minimo) {
        imposto_bruto = 0.20 * salario_funcionario;
    } else if (salario_funcionario > 5 * salario_minimo) {
        imposto_bruto = 0.08 * salario_funcionario;
    } else {
        imposto_bruto = 0.0;
    }

    // Cálculo do imposto líquido
    imposto_liquido = imposto_bruto - (300.0 * num_dependentes);

    // Cálculo do resultado (diferença entre imposto normal e imposto líquido)
    resultado = taxa_imposto - imposto_liquido;

    // Impressão dos resultados
    printf("MATRICULA = %d\n", matricula);
    printf("IMPOSTO BRUTO = %.2lf\n", imposto_bruto);
    printf("IMPOSTO LIQUIDO = %.2lf\n", imposto_liquido);
    printf("RESULTADO = %.2lf\n", resultado);

    // Determinar a mensagem com base no resultado
    if (resultado < 0) {
        printf("IMPOSTO A RECEBER\n");
    } else if (resultado > 0) {
        printf("IMPOSTO A PAGAR\n");
    } else {
        printf("IMPOSTO QUITADO\n");
    }
// Leitura dos valores
scanf("%d", &CC);
scanf("%d", &DR);
scanf("%d", &RT);

// Verificação das condições e classificação do aço
if (CC < 7 && DR > 50 && RT > 80000) {
    printf("ACO DE GRAU = 10\n");
} else if (CC < 7 && DR > 50) {
    printf("ACO DE GRAU = 9\n");
} else if (CC < 7) {
    printf("ACO DE GRAU = 8\n");
} else {
    printf("ACO DE GRAU = 7\n");
}
int matricula, num_dependentes;
double salario_minimo, salario_funcionario, taxa_imposto_normal;

// Passo 1: Leitura dos dados de entrada
printf("Digite a matrícula do funcionário: ");
scanf("%d", &matricula);
printf("Digite o valor do salário mínimo: ");
scanf("%lf", &salario_minimo);
printf("Digite o número de dependentes: ");
scanf("%d", &num_dependentes);
printf("Digite o salário do funcionário: ");
scanf("%lf", &salario_funcionario);
printf("Digite a taxa de imposto normal: ");
scanf("%lf", &taxa_imposto_normal);

// Passo 2: Cálculo do imposto bruto
double imposto_bruto = 0;
double doze_salarios_minimos = 12 * salario_minimo;

if (salario_funcionario > doze_salarios_minimos) {
    imposto_bruto = 0.20 * salario_funcionario;
}

// Passo 3: Cálculo do imposto líquido
double imposto_liquido = imposto_bruto - (300 * num_dependentes);

// Passo 4: Cálculo da diferença entre o imposto normal e o imposto líquido
double diferenca = taxa_imposto_normal - imposto_liquido;

// Passo 5: Determinação da mensagem a ser exibida
if (diferenca < 0) {
    printf("IMPOSTO A RECEBER\n");
} else if (diferenca == 0) {
    printf("IMPOSTO QUITADO\n");
} else {
    printf("IMPOSTO A PAGAR\n");
}

// Passo 6: Saída dos resultados
printf("MATRICULA = %d\n", matricula);
printf("IMPOSTO BRUTO = %.2lf\n", imposto_bruto);
printf("IMPOSTO LIQUIDO = %.2lf\n", imposto_liquido);
printf("RESULTADO = %.2lf\n", diferenca);

int a = 2, b = 12, c = 10;
int dt = pow(b,2) - 4 * a * c;
double x1 = -1*(b + sqrt(dt))/(2*a);
double x2 = -1*(b - sqrt(dt))/(2*a);
printf("%.1lf\n",x1);
printf("%.1lf\n",x2);
double a, b, c;

// Leitura dos 3 números reais
printf("Digite o primeiro número real: ");
scanf("%lf", &a);
printf("Digite o segundo número real: ");
scanf("%lf", &b);
printf("Digite o terceiro número real: ");
scanf("%lf", &c);

// Ordenação dos números
if (a > b) {
    double temp = a;
    a = b;
    b = temp;
}
if (b > c) {
    double temp = b;
    b = c;
    c = temp;
}
if (a > b) {
    double temp = a;
    a = b;
    b = temp;
}

// Impressão dos números ordenados com duas casas decimais
printf("%.2lf, %.2lf, %.2lf\n", a, b, c);

int n = 2001;
    if(n % 4 == 0){
        printf("ANO BISSEXTO");
    }else{
        printf("ANO NAO BISSEXTO");
    }
int n, i, j, v[100];
scanf("%d",&n);

int milhar = n / 1000;
printf("milhar: %d\n",milhar);

int unMilhar = n % 1000;
printf("milhar: %d\n",unMilhar);

int centena = unMilhar / 100;
printf("centena: %d\n",centena);   

int unCentena = n % 100;
printf("centena: %d\n",unCentena);

int dezena = unCentena /10;
printf("dezena: %d\n",dezena);

int unidade = n % 10;
printf("unidade: %d", unidade);
x = 3
if(x<1){
    printf(x); 
}else if{
    printf(0); 
}else{
    printf(x*x); 
}
salario = 755
if(salario <= 300){
    salario += * 0.5
}else{
    salario += 0.3;
}
notas = 9.0
if(notas < 6){
    printf("nota %lf conceito = D", notas); 
}else if(notas >= 6){
    printf("nota %lf conceito = C", notas); 
}
printf("Digite um numero inteiro"); 
scanf(&n)
if(n % 3 == 0 && n % 5 == 0){
    printf("o numero e divisivel"); 
}else{
    printf("o numero nao e divisivel"); 
}
printf("Digite a quantidade de horas"); 
scanf("%d",&horas);  
total = horas / 3 * 0.1;
total += horas % 3 * 0.5
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void segundoPasso(char *str1,char *str2);
void combinarStrings(char* str1, char* str2) {
    int tam1 = strlen(str1);
    int tam2 = strlen(str2);
    int tamMax = tam1 > tam2 ? tam1 : tam2;
    int i;

    for (i = 0; i < tamMax; i++) {
        if (i < tam1)
            printf("%c", str1[i]);
        if (i < tam2)
            printf("%c", str2[i]);
    }
    printf("\n");
    segundoPasso(str1,str2);
}

void segundoPasso(char *str1,char *str2){
    int tam1;
    printf("Verificar o tamanho da string: \n"); 
    tam1 = strlen(str1);
    printf("tamanho da string e de: %d",tam1);

}

int main() {
    int numCasos, i;
    char str1[51], str2[51];

    scanf("%d", &numCasos);

    for (i = 0; i < numCasos; i++) {
        scanf("%s %s", str1, str2);
        combinarStrings(str1, str2);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int contarLEDs(char* numero) {
    int leds = 0;
    int i;

    for (i = 0; i < strlen(numero); i++) {
        char digito = numero[i];

        switch (digito) {
            case '1':
                leds += 2;
                break;
            case '2':
                led += 3
                break
            case '3':
                led += 2
                break
            case '5':
                leds += 5;
                break;
            case '4':
                leds += 4;
                break;
            case '6':
                leds += 2
                break
            case '9':
                leds += 3
                break
            case '0':
                leds += 6;
                break;
            case '7':
                leds += 3;
                break;
            case '8':
                leds += 7;
                break;
        }
    }

    return leds;
}

int main() {
    int numCasos, i;
    char numero[101];

    scanf("%d", &numCasos);

    for (i = 0; i < numCasos; i++) {
        scanf("%s", numero);
        int numLEDs = contarLEDs(numero);
        printf("%d leds\n", numLEDs);
    }

    return 0;
}
#include <stdio.h>

int Vogal(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int Consoante(char ch) {
    ch = tolower(ch);
    return (ch >= 'b' && ch <= 'z' && !Vogal(ch));
}

int main() {
    int i,N,j;
    scanf("%d", &N);
    getchar(); // Captura a quebra de linha após a leitura de N

    for (i = 0; i < N; i++) {
        char linha[10001];
        fgets(linha, sizeof(linha), stdin);

        int letras = 0;
        int vogais = 0;
        int consoantes = 0;

        for (j = 0; linha[j] != '\0'; j++) {
            if ((linha[j] >= 'a' && linha[j] <= 'z') || (linha[j] >= 'A' && linha[j] <= 'Z')) {
                letras++;
                if (Vogal(linha[j]))
                    vogais++;
                else if (Consoante(linha[j]))
                    consoantes++;
            }
        }
        linha[i] 
        printf("Letras = %d\n", letras);
        printf("Vogais = %d\n", vogais);
        printf("Consoantes = %d\n", consoantes);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>


int Vogal(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int Consoante(char ch) {
    ch = tolower(ch);
    return (ch >= 'b' && ch <= 'z' && !Vogal(ch));
}

int calcular_valor_numerico(char *palavra) {
    if (strcmp(palavra, "um") == 0)
        return 1;
    else if (strcmp(palavra, "dois") == 0)
        return 2;
    else if (strcmp(palavra, "três") == 0)
        return 3;

    return -1; // Valor inválido
}

int verificar_palavra(char *palavra) {
    char palavras_corretas[3][6] = {"um", "dois", "três"};
    int num_palavras_corretas = 3;
    int i, j, k;
    char frase[2][2];

    for (i = 0; i < num_palavras_corretas; i++) {
        if (strlen(palavra) == strlen(palavras_corretas[i])) {
            int letras = 0;
            int diff = 0;
            for (j = 0; j < strlen(palavra); j++) {
                if (palavra[j] != palavras_corretas[i][j])
                    diff++;
            
                if(k = 0; frase[k] != '\0'; j++){
                    if(frase[k] >= 'a'){
                        if(frase[k] <= 'z'){
                            letras = letras + 1;
                        }
                    }
                }
            if (diff <= 1)
                return calcular_valor_numerico(palavras_corretas[i]);
        }
    }

    return -1; // Valor inválido
}

int main() {
    int num_palavras;
    scanf("%d", &num_palavras);

    char palavra[10];
    int i;
    for (i = 0; i < num_palavras; i++) {
        scanf("%s", palavra);
        int valor_numerico = verificar_palavra(palavra);
        if (valor_numerico != -1)
            printf("%d\n", valor_numerico);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int removeZeros(int number) {
    int result = 0;
    int multiplier = 1;
    
    while (number > 0) {
        int digit = number % 10;
        if (digit != 0) {
            result += digit * multiplier;
            multiplier *= 10;
        }
        number /= 10;
    }
    
    return result;
}

int main() {
    int M, N;
    
    while (1) {
        scanf("%d %d", &M, &N);
        
        if (M == 0 && N == 0) {
            break;
        }
        
        int sum = M + N;
        int result = removeZeros(sum);
        
        printf("%d\n", result);
    }
    
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *word) {
    int tam = strlen(word);
    int i;
    
    for (i = 0; i < length / 2; i++) {
        if (tolower(word[i]) != tolower(word[length - 1 - i])) {
            return 0;  // Não é um palíndromo
        }
    }
    
    return 1;  // É um palíndromo
}

int main() {
    char word[201];
    int i;
    
    while (1) {
        printf("Insira uma frase: \n"); 
        scanf("%s", word);
        
        if (strcmp(word, "EOF") == 0) {
            break;
        }
        
        if (isPalindrome(word)) {
            printf("sim\n");
        } else {
            printf("nao\n");
        }
    }
    
    printf("\n");
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função que aloca e retorna o prefixo de tamanho n da string s
char *obterPrefixo(int n, const char *s) {
    if (n <= 0) {
        return NULL; // Retorna NULL se n for menor ou igual a zero
    }

    int tamanhoS = strlen(s);

    // Aloca memória para o prefixo
    char *prefixo = (char *)malloc((n + 1) * sizeof(char)); // +1 para o caractere nulo

    if (prefixo == NULL) {
        return NULL; // Retorna NULL se a alocação de memória falhar
    }

    // Copia os primeiros n caracteres de s para o prefixo
    strncpy(prefixo, s, n);
    prefixo[n] = '\0'; // Adiciona o caractere nulo ao final

    return prefixo;
}

int main() {
    int N;
    printf(""); 
    scanf("%d", &N);

    // Limpe o buffer de entrada
    while (getchar() != '\n');

    for (int i = 0; i < N; i++) {
        int n;
        char s[500];

        // Leitura do número inteiro e da string
        scanf("%d", &n);
        scanf(" %[^\n]s", s); // Use %[^\n]s para ler a linha inteira, incluindo espaços

        // Chamando a função para obter o prefixo
        char *prefixo = obterPrefixo(n, s);

        if (prefixo != NULL) {
            // Imprime o prefixo
            printf("%s\n", prefixo);

            // Libera a memória alocada para o prefixo
            free(prefixo);
        }
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int procurarCaractere(char c, char* str) {
    int tam = strlen(str);
    int i;

    for (i = 0; i < tam; i++) {
        if (str[i] == c) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    while (getchar() != '\n');  // Limpar o buffer de entrada

    for (int i = 0; i < n; i++) {
        char c, str[500];
        scanf("%c ", &c);
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';  // Remover o caractere de nova linha (\n)

        int index = procurarCaractere(c, str);

        printf("Caractere %c ", c);

        if (index != -1) {
            printf("encontrado no índice %d da string.\n", index);
        } else {
            printf("não encontrado.\n");
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 1
void gerarSequenciaEspelho(char *seqEspelho, int A, int B){
    char numStr[20];
    int num,i;
    seqEspelho[0]='\0';
    for(num=A;num <= B;num++){
        sprintf(numStr,"%d",num);
        strcat(seqEspelho,numStr);
    }
    int seqEspelho = strlen(seqEspelho);
    for(i=seqEspelho-1;i>=0;i--){
        seqEspelho[*seqEspelho++]=seqEspelho[i];
    }
    seqEspelho[*seqEspelho]='\0';
}
int main() {
    int n,i,j, K;
    // scanf("%d", &n); 
    int *espelho=(int*)malloc(n*sizeof(int));
    char str1[tam];
    char str2[tam];
    char str3[tam];
    for (i = 0; i < tam; i++) {
        scanf("%s %s", str1, str2);
    }
    while(str1[i] !='\0'){
        str3[j]=str1[i];
        i++;
        j++;
    }
    while (str2[i]!='\0')
    {
        str3[j]=str2[i];
        i++;
        j++;
    }
    printf("%s",str3);


    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void criptografar(char *mensagem) {
    int i, j, metade;
    int tamanho = strlen(mensagem);
    int tam = strlen(string1);
    // Primeira passada: deslocar 3 posições para a direita
    for (i = 0; i < tamanho; i++) {
        if (isalpha(mensagem[i])) {
            mensagem[i] = mensagem[i] + 3;
        }
        if(isalpha(string[i])){
            string[i] = string[i] + 3
        }
        if(isalpha(str[i])){
            str[i] = str[i] + 3
        }
    }

    // Segunda passada: inverter a linha
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        for (j = 0, k = tamanho - 1; j < k; j++, k--) {
            char temp = mensagem[i];
            mensagem[i] = mensagem[j];
            mensagem[j] = temp;

            temp = string[i]
            string[i] = string[j]
            string[j] = temp

            temp = str[i]
            str[i] = str[j]
            str[j] = temp
    }

    // Terceira passada: deslocar os caracteres da metade em diante uma posição para a esquerda
    metade = tamanho / 2;
    for (i = metade; i < tamanho; i++) {
        if (isalpha(mensagem[i])) {
            mensagem[i] = mensagem[i] - 1;
        }
        if(isalpha(string[i])){
            string[i] = string[i] - 1
        }
        if(isalpha(str)){
            str[i] = str[i] - 1
        }
    }
}

int main() {
    int n;
    char mensagem[1004];

    scanf("%d", &n);
    getchar();  // Capturar o '\n' após a leitura do inteiro

    while (n--) {
        fgets(mensagem, sizeof(mensagem), stdin);
        fgets(str1, sizeof(str1), stdin)
        fgets(string,sizeof(string),stdin)

        scanf("%s %s",mensagem,string)
        scanf("%s %s",str1,mensagem);  


        // Remover a quebra de linha da entrada
        mensagem[strcspn(mensagem, "\n")] = '\0';  
        string[strcspn(strring,"\n")] = '\0'
        palavra[strcspn(palavra,"\n")] = '\0'

        criptografar(mensagem);
        criptografar(str)

        printf("%s\n", mensagem);
    }

    return 0;
}
/*

*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int N
    char string[100000]
    scanf("%d",N);
    getchar();
    while(N--){
        fgets(string,sizeof(string),stdin)
        scanf("%s",string);  

    }
}
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int contar_aliteracoes(char *frase) {
    char *palavra;
    char *str;
    char letra_inicial;
    
    int aliteracoes = 0;
    int aliteracoes = 
    int letras_iniciais[26] = {0}; // Array para armazenar as letras iniciais encontradas (26 letras do alfabeto)

    palavra = strtok(frase, " ");
    ltr_ini = strtok(frase, " ")
    
    while (palavra != NULL) {
        letra_inicial = tolower(palavra[0]);
        ltr_ini = tolower(palavra[0])
        str = tolower(palavra[0])
    
        if (isalpha(letra_inicial)) { // Verificar se é uma letra
            if (letras_iniciais[letra_inicial - 'a'] == 0) { // Verificar se a letra inicial já foi encontrada
                letras_iniciais[letra_inicial - 'a'] = 1;
            } else {
                aliteracoes++;
            }
        }
        palavra = strtok(NULL, " ");
    }

    return aliteracoes;
}

int main() {
    char texto[1000];

    while (1) {
        fgets(texto, sizeof(texto), stdin);
        texto[strcspn(texto, "\n")] = '\0'; // Remover a quebra de linha da entrada
        
        if (strcmp(texto, "EOE.") == 0) {
            break;
        }
        
        int resultado = contar_aliteracoes(texto);
        printf("%d\n", resultado);
    }

    return 0;
}
/*/*/
#include <stdio.h>
#include <string.h>

int minOperations(char A[], char B[]) {
    int len = strlen(A);
    int operations = 0;
    
    for (int i = 0; i < len; i++) {
        int diff = B[i] - A[i];
        
        if (diff < 0) {
            diff += 26;  // Considerando o alfabeto de 26 letras
        }
        
        operations += diff;
    }
    
    return operations;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        char A[10005], B[10005];
        scanf("%s %s", A, B);
        
        int operations = minOperations(A, B);
        printf("%d\n", operations);
    }
    
    return 0;
}
#include <stdio.h>
#include <ctype.h>

void converterSentencia(char *sentence) {
    int i, uppercase = 1;
    for (i = 0; sentence[i] != '\0'; i++) {
        if (isalpha(sentence[i])) {
            if (uppercase) {
                sentence[i] = toupper(sentence[i]);
                uppercase = 0;
            } else {
                sentence[i] = tolower(sentence[i]);
                uppercase = 1;
            }
        }
    }
}

int main() {
    char sentence[51];

    while (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        converterSentencia(sentence);
        printf("%s", sentence);
    }

    return 0;
}
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void contarLetras(char* text, int* frequency) {
    int i;
    int len = strlen(text);

    for (i = 0; i < len; i++) {
        char c = tolower(text[i]);
        if (isalpha(c)) {
            frequency[c - 'a']++;
        }
    }
}

int main() {
    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        char text[201];
        int frequency[26] = {0};
        int maxFrequency = 0;

        scanf("%s", text);

        contarLetras(text, frequency);

        for (int j = 0; j < 26; j++) {
            if (frequency[j] > maxFrequency) {
                maxFrequency = frequency[j];
            }
        }

        printf("Case #%d:\n", i + 1);

        for (int j = 0; j < 26; j++) {
            if (frequency[j] == maxFrequency) {
                printf("%c\n", 'a' + j);
            }
        }
    }

    return 0;
}
#include <stdio.h>
#define ML 10
#define MC 10
int main(){
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int matriz[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if((i+j)%2==0){
                matriz[i][j]=0;
            }else{
                matriz[i][j]=1;
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
#define LIN 2
#define COL 2
void lerMatriz(int matriz[LIN][COL]);
void imprimirMatriz(int matriz[LIN][COL]);
int main(){
    int i,j,matriz[2][2];
    lerMatriz(matriz);
    imprimirMatriz(matriz);
    return 0;
}
void lerMatriz(int matriz[LIN][COL]){
    int i,j;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
}
void multipMatriz(int matriz[LIN][COL]){
    
}
void imprimirMatriz(int matriz[LIN][COL]){    
    int i,j;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            matriz[i][j]=i*j; 
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}
#include <stdio.h>

#define TAM 6

int main() {
    int matriz[TAM][TAM];
    int i, j;
    
    // Leitura da matriz de entrada
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int maior_soma = 0;
    
    // Loop para percorrer as células da matriz
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (i + 2 < TAM && j + 2 < TAM) {
                // Verificação se é possível formar uma ampulheta
                int soma = matriz[i][j] + matriz[i][j+1] + matriz[i][j+2]
                            + matriz[i+1][j+1]
                            + matriz[i+2][j] + matriz[i+2][j+1] + matriz[i+2][j+2];
                // Atualização da maior soma, se necessário
                if (soma > maior_soma) {
                    maior_soma = soma;
                }
            }
        }
         
    }
    
    printf("%d\n", maior_soma);
    
    return 0;
}
#include <stdio.h>
#define TAM 100
void printPGM(int matriz[TAM][TAM], int largura, int altura) {
    printf("P2\n");
    printf("%d %d\n", largura, altura);
    printf("255\n");
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matriz[TAM][TAM];
    int largura, altura, larguraBorda, valorBorda;
    
    // Leitura dos dados de entrada
    scanf("%d %d %d %d", &largura,&altura,&larguraBorda,&valorBorda);
    printf("Digite a largura: \n"); 
    
    // Preenchimento da matriz com zeros
    printf("Preenchimento da matriz com zeros: \n"); 
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            matriz[i][j] = 0;
        }
        for (int j = 0; j < largura; j++) {
            printf("%d ",matriz[i][j]); 
        }
        printf("\n"); 
    }
    
    // Preenchimento da borda com o valor especificado
    for (int i = 0; i < altura; i++) {
        
        printf("valor i: %d ",i);
         int matriz[100][100]; // Usamos o tamanho máximo de 100x100
        for (int i = 0; i < altura; i++) {
            for (int j = 0; j < largura; j++) {
                if (i < larguraBorda || i >= altura - larguraBorda || j < larguraBorda || j >= largura - larguraBorda) {
                matriz[i][j] = valorBorda; // Preenche a borda
            } else {
                matriz[i][j] = 0; // Preenche o interior com zeros
            }
        }
    }
        for (int j = 0; j < largura; j++) {
            if (i < larguraBorda || i >= altura - larguraBorda || j < larguraBorda || j >= largura - larguraBorda) {
                matriz[i][j] = valorBorda;
            }
        }    
    }
          //  if i<larguraBorda || i>=
    // Impressão da matriz como imagem PGM
    // printPGM(matriz, largura, altura);
    
    return 0;
}

#include <stdio.h>

int main() {
    int linhas, colunas;
    
    // Leitura do número de linhas e colunas
    scanf("%d %d", &linhas, &colunas);

    // Variável para alternar entre 0 (preto) e números sequenciais maiores que zero (branco)
    int alternador = 0;

    // Preenchimento da matriz xadrez
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", alternador);
            alternador++;
            alternador %= 2; // Alterna entre 0 e 1
        }
        printf("\n");
        // Se o número de colunas for ímpar, inverte o alternador após cada linha
        if (colunas % 2 == 1) {
            alternador = 1 - alternador;
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Insira a dimensão das matrizes"); 
    scanf("%d", &N);
    int A[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int trace = 0;
    for (int i = 0; i < N; i++) {
        trace += A[i][i];
    }

    int AT[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            AT[i][j] = A[j][i];
        }
    }

    int result[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = A[i][j] + AT[i][j] - trace;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n, m;
    printf("Digite o número de linhas e colunas da matriz: ");
    scanf("%d %d", &n, &m);

    int matriz[n][m];

    // Leitura da matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Padrão do Wally
    int wally[] = {4, 0, 1111, 0, 8};

    // Busca pelo Wally
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int found = 1;
            for (int k = 0; k < 5; k++) {
                if (wally[k] != matriz[i][j]) {
                    found = 0;
                    break;
                }
                j = (j + 1) % m; // Lida com a borda circular
            }
            if (found) {
                printf("WALLY ESTA NA MATRIZ NA POSICAO: %d,%d\n", i, j);
                return 0;
            }
        }
    }

    // Se não encontrou
    printf("WALLY NAO ESTA NA MATRIZ\n");

    return 0;
}
#include <stdio.h>

struct fracoes {
  int numerator;
  int denominator;
};

int main() {
  int n;
  char carac;
  while(scanf("%d", &n)){

    struct fracoes fracoes[n];
    for (int i = 0; i < n; i++) {
      scanf("%d %c %d", &fracoes[i].numerator, &carac, &fracoes[i].denominator);
    }

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (fracoes[i].numerator * fracoes[j].denominator == fracoes[i].denominator * fracoes[j].numerator) {
          printf("%d/%d equivalente a %d/%d\n", fracoes[i].numerator, fracoes[i].denominator, fracoes[j].numerator, fracoes[j].denominator);
        }
      }
    }

    if (n == 0) {
      printf("Não há frações equivalentes na sequência\n");
    }
  n--;
  }
  return 0;
}
#include <stdio.h>
#include <string.h>

// Definição da struct para representar um produto na feira
struct Produto {
    char nome[51];
    float preco;
};

int main() {
    int N, M, P, quantidade;
    char produto[51];
    float total;

    // Ler o número de casos de teste (N)
    scanf("%d", &N);

    // Loop para cada caso de teste
    while (N > 0) {
        total = 0.0; // Inicializar o valor total gasto como 0

        // Ler a quantidade de produtos disponíveis na feira (M) e seus preços
        scanf("%d", &M);

        // Criar um array de structs para armazenar os produtos disponíveis
        struct Produto produtos[M];

        for (int i = 0; i < M; i++) {
            scanf("%s %f", produtos[i].nome, &produtos[i].preco);
        }

        // Ler a quantidade de diferentes produtos que Dona Parcinova deseja comprar (P)
        scanf("%d", &P);

        // Loop para cada produto que Dona Parcinova deseja comprar
        for (int i = 0; i < P; i++) {
            // Ler o nome do produto e a quantidade desejada
            scanf("%s %d", produto, &quantidade);

            // Procurar o preço do produto na lista de produtos disponíveis
            for (int j = 0; j < M; j++) {
                if (strcmp(produto, produtos[j].nome) == 0) {
                    // Encontramos o preço do produto desejado
                    total += produtos[j].preco * quantidade; // Atualizar o valor total gasto
                    break; // Encerrar a busca
                }
            }
        }

        // Imprimir o valor total gasto em formato de moeda com duas casas decimais
        printf("R$ %.2f\n", total);

        N--; // Atualizar o número de casos de teste restantes
    }

    return 0;
}
    
    
//3 - Tradutor do Papai Noel
#include <stdio.h>
#include<string.h>
struct dados{
  char *pais;
  char *natal;
};

int main(){
  char t[40];
  struct dados teste[24];

  teste[0].pais = "brasil";
  teste[0].natal = "Feliz Natal!";

  teste[1].pais = "alemanha";
  teste[1].natal = "Frohliche Weihnachten!";

  teste[2].pais = "austria";
  teste[2].natal = "Frohe Weihnacht!";

  teste[3].pais = "coreia";
  teste[3].natal = "Chuk Sung Tan!";

  teste[4].pais = "espanha";
  teste[4].natal = "Feliz Navidad!";

  teste[5].pais = "grecia";
  teste[5].natal = "Kala Christougena!";

  teste[6].pais = "estados-unidos";
  teste[6].natal = "Merry Christmas!";

  teste[7].pais = "inglaterra";
  teste[7].natal = "Merry Christmas!";

  teste[8].pais = "australia";
  teste[8].natal = "Merry Christmas!";

  teste[9].pais = "portugal";
  teste[9].natal = "Feliz Natal!";

  teste[10].pais = "suecia";
  teste[10].natal = "God Jul!";

  teste[11].pais = "turquia";
  teste[11].natal = "Mutlu Noeller";

  teste[12].pais = "argentina";
  teste[12].natal = "Feliz Navidad!";

  teste[13].pais = "chile";
  teste[13].natal = "Feliz Navidad!";

  teste[14].pais = "mexico";
  teste[14].natal = "Feliz Navidad!";

  teste[15].pais = "antardida";
  teste[15].natal = "Merry Christmas!";

  teste[16].pais = "canada";
  teste[16].natal = "Merry Christmas!";

  teste[17].pais = "irlanda";
  teste[17].natal = "Nollaig Shona Dhuit!";

  teste[18].pais = "belgica";
  teste[18].natal = "Zalig Kerstfeest!";

  teste[19].pais = "italia";
  teste[19].natal = "Buon Natale!";

  teste[20].pais = "libia";
  teste[20].natal = "Buon Natale!";

  teste[21].pais = "siria";
  teste[21].natal = "Milad Mubarak!";

  teste[22].pais = "marrocos";
  teste[22].natal = "Milad Mubarak!";

  teste[23].pais = "japao";
  teste[23].natal = "Merii Kurisumasu!";

int i, j;

  while(scanf(" %[^\n]", &t) != EOF){
    getchar();
    int tm = strlen(t);  int ok = 0;

    for(i = 0; i < 24; i++){
      int flag = 0;
      int tt =  strlen(teste[i].pais);
      if(tm == tt){
        for(j = 0; j < tm; j++){
          if(t[j] == teste[i].pais[j]){
            flag++;
          }
        }
      }
      if(flag == tm){
        printf("%s\n", teste[i].natal);
        ok = 1;
        break;
      }
    }
    if(ok == 0){
      printf("-- NOT FOUND --\n");
    }
  }
    return 0;
}

#include <stdio.h>
#include <string.h>

// Definição da struct para representar um produto na feira
struct Produto {
    char nome[51];
    float preco;
};

int main() {
    int N, M, P, quantidade;
    char produto[51];
    float total;

    // Ler o número de casos de teste (N)
    scanf("%d", &N);

    // Loop para cada caso de teste
    while (N > 0) {
        total = 0.0; // Inicializar o valor total gasto como 0

        // Ler a quantidade de produtos disponíveis na feira (M) e seus preços
        scanf("%d", &M);

        // Criar um array de structs para armazenar os produtos disponíveis
        struct Produto produtos[M];

        for (int i = 0; i < M; i++) {
            scanf("%s %f", produtos[i].nome, &produtos[i].preco);
        }

        // Ler a quantidade de diferentes produtos que Dona Parcinova deseja comprar (P)
        scanf("%d", &P);

        // Loop para cada produto que Dona Parcinova deseja comprar
        for (int i = 0; i < P; i++) {
            // Ler o nome do produto e a quantidade desejada
            scanf("%s %d", produto, &quantidade);

            // Procurar o preço do produto na lista de produtos disponíveis
            for (int j = 0; j < M; j++) {
                if (strcmp(produto, produtos[j].nome) == 0) {
                    // Encontramos o preço do produto desejado
                    total += produtos[j].preco * quantidade; // Atualizar o valor total gasto
                    break; // Encerrar a busca
                }
            }
        }

        // Imprimir o valor total gasto em formato de moeda com duas casas decimais
        printf("R$ %.2f\n", total);

        N--; // Atualizar o número de casos de teste restantes
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

struct Vetor4D {
    double x, y, z, w;
    double norma;
};

double calcularNorma(struct Vetor4D vetor) {
    return sqrt(vetor.x * vetor.x + vetor.y * vetor.y + vetor.z * vetor.z + vetor.w * vetor.w);
}

int main() {
    int N;
    scanf("%d", &N);

    struct Vetor4D vetores[N];

    // Ler os N vetores e calcular suas normas
    for (int i = 0; i < N; i++) {
        scanf("%lf %lf %lf %lf", &vetores[i].x, &vetores[i].y, &vetores[i].z, &vetores[i].w);
        vetores[i].norma = calcularNorma(vetores[i]);
    }

    // Ordenar os vetores em ordem crescente de norma usando o algoritmo Bubble Sort
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (vetores[j].norma > vetores[j + 1].norma) {
                // Trocar os vetores de posição
                struct Vetor4D temp = vetores[j];
                vetores[j] = vetores[j + 1];
                vetores[j + 1] = temp;
            }
        }
    }

    // Imprimir os vetores em ordem crescente de norma
    for (int i = 0; i < N; i++) {
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", vetores[i].x, vetores[i].y, vetores[i].z, vetores[i].w, vetores[i].norma);
    }

    return 0;
}

    struct vetor4d{
        double w,x,y,z;
        double norma
    }
   #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n,i;
    scanf("%d", &n);

    // Alocação do vetor de ponteiros para char
    char **nomes = (char **)malloc(n * sizeof(char *));

    // Buffer para armazenar temporariamente os nomes
    char buffer[10001];

    // Leitura dos nomes e alocação de espaço no vetor
    for ( i = 0; i < n; i++) {
        scanf("%[^\n]", buffer);
        nomes[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(nomes[i], buffer);
    }

    // Impressão dos nomes armazenados no vetor
    for ( i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }

    // Liberação do espaço alocado dinamicamente no vetor
    for ( i = 0; i < n; i++) {
        free(nomes[i]);
    }
    free(nomes);

    return 0;
    

}
#include <stdio.h>
double calcularMensalidade(struct Aluno aluno, struct Curso cursos[], int numCursos) ;
struct Curso {
    int codigoCurso;
    double valorCredito;
    char nomeCurso[100];
};
    
struct Aluno {
    char nomeAluno[500];
    int codigoCurso;     
    int numCreditos;
};
    


int main() {
    int numCursos;
    scanf("%d", &numCursos);
}a
{
    struct Curso cursos[numCursos];
    for (int i = 0; i < numCursos; i++) {
        scanf("%d %lf", &cursos[i].codigoCurso, &cursos[i].valorCredito);
        getchar(); // Para consumir o caractere de quebra de linha
        fgets(cursos[i].nomeCurso, 100, stdin);
        cursos[i].nomeCurso[strcspn(cursos[i].nomeCurso, "\n")] = '\0'; // Remover o '\n' da string
    }
}
{
    int numAlunos;
    scanf("%d", &numAlunos);

    struct Aluno alunos[numAlunos];
    for (int i = 0; i < numAlunos; i++) {
        scanf("%s %d %d", alunos[i].nomeAluno, &alunos[i].codigoCurso, &alunos[i].numCreditos);
    }
}
{
    // Calcular e imprimir os boletos de pagamento
    for (int i = 0; i < Alunos; i++) {
        double mensalidade = calcularMensalidade(alunos[i], cursos, numCursos);
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n",
               alunos[i].nomeAluno, cursos[alunos[i].codigoCurso - 1].nomeCurso,
               alunos[i].numCreditos, cursos[alunos[i].codigoCurso - 1].valorCredito, mensalidade);
    }

    return 0;
}
double calcularMensalidade(struct Aluno aluno, struct Curso cursos[], int numCursos) {
    double valorMensalidade = 0.0;
    for (int i = 0; i < numCursos; i++) {
        if (aluno.codigoCurso == cursos[i].codigoCurso) {
            valorMensalidade = aluno.numCreditos * cursos[i].valorCredito;
            break;
        }
    }
    return valorMensalidade;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    int matricula;
    int diaNasc;
    int mesNasc;
    int anoNasc;
    char nome[201];
};

int ComparaDataNasc(struct Aluno aluno1, struct Aluno aluno2) {
    if (aluno1.anoNasc < aluno2.anoNasc){
        return 1;
    }
    else if (aluno1.anoNasc == aluno2.anoNasc && aluno1.mesNasc < aluno2.mesNasc){
        aluno1.anoNasc < 
        return 1;
    }
    else if (aluno1.anoNasc == aluno2.anoNasc && aluno1.mesNasc == aluno2.mesNasc && aluno1.diaNasc < aluno2.diaNasc){
        return 1;
    }
    else if (aluno1.anoNasc == aluno2.anoNasc && aluno1.mesNasc == aluno2.mesNasc && aluno1.diaNasc == aluno2.diaNasc){
        return 1;
    }

    return 0;
}

void OrdenarAlunos(struct Aluno alunos[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ComparaDataNasc(alunos[j], alunos[i])) {
                struct Aluno temp = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    struct Aluno alunos[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d %[^\n]", &alunos[i].matricula, &alunos[i].diaNasc, &alunos[i].mesNasc, &alunos[i].anoNasc, alunos[i].nome);
    }

    OrdenarAlunos(alunos, n);

    for (int i = 0; i < n; i++) {
        printf("Matric.: %d Nome: %s Data Nasc.: %02d/%02d/%d\n", alunos[i].matricula, alunos[i].nome, alunos[i].diaNasc, alunos[i].mesNasc, alunos[i].anoNasc);
    }

    return 0;
}


     