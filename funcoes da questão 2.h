
typedef struct NoPilha {
    int dado;
    struct NoPilha* proximo;
} NoPilha;


typedef struct {
    NoPilha* topo;
} Pilha;


Pilha* criarPilha() {
Pilha* novaPilha = (Pilha*)malloc(sizeof(Pilha));
novaPilha->topo = NULL;
return novaPilha;
}
void empilhar(Pilha* pilha, int dado) {
NoPilha* novoNo = (NoPilha*)malloc(sizeof(NoPilha));
novoNo->dado = dado;
novoNo->proximo = pilha->topo;
pilha->topo = novoNo;
}

void desempilhar(Pilha* pilha) {
if (pilha->topo != NULL) {
NoPilha* noRemovido = pilha->topo;
pilha->topo = pilha->topo->proximo;
free(noRemovido);
}
}
void imprimirPilha(Pilha* pilha) {
NoPilha* noAtual = pilha->topo;
printf("Pilha: ");
while (noAtual != NULL) {
printf("%d ", noAtual->dado);
noAtual = noAtual->proximo;
}
printf("\n");
}


void limparPilha(Pilha* pilha) {
while (pilha->topo != NULL) {
desempilhar(pilha);
}
}

void imprimirTopoPilha(Pilha* pilha) {
if (pilha->topo != NULL) {
printf("Topo da Pilha: %d\n", pilha->topo->dado);
} else {
printf("A Pilha está vazia.\n");
}
}


typedef struct NoFila {
int dado;
struct NoFila* proximo;
} NoFila;


typedef struct {
NoFila* frente;
NoFila* tras;
} Fila;


Fila* criarFila() {
Fila* novaFila = (Fila*)malloc(sizeof(Fila));
novaFila->frente = NULL;
novaFila->tras = NULL;
return novaFila;
}


void enfileirar(Fila* fila, int dado) {
NoFila* novoNo = (NoFila*)malloc(sizeof(NoFila));
novoNo->dado = dado;
novoNo->proximo = NULL;

if (fila->tras == NULL) {
fila->frente = novoNo;
fila->tras = novoNo;
 } else {
fila->tras->proximo = novoNo;
fila->tras = novoNo;
}
}


void desenfileirar(Fila* fila) {
if (fila->frente != NULL) {
NoFila* noRemovido = fila->frente;
fila->frente = fila->frente->proximo;
free(noRemovido);

if (fila->frente == NULL) {
fila->tras = NULL;
}
}
}


void imprimirFila(Fila* fila) {
NoFila* noAtual = fila->frente;
printf("Fila: ");
while (noAtual != NULL) {
printf("%d ", noAtual->dado);
 noAtual = noAtual->proximo;
}
printf("\n");
}


void limparFila(Fila* fila) {
while (fila->frente != NULL) {
desenfileirar(fila);
}
}


int encontrarMaiorElementoFila(Fila* fila) {
int maiorElemento = fila->frente->dado;
NoFila* noAtual = fila->frente->proximo;

while (noAtual != NULL) {
if (noAtual->dado > maiorElemento) {
maiorElemento = noAtual->dado;
}
noAtual = noAtual->proximo;
}

return maiorElemento;
}

int encontrarMenorElementoFila(Fila* fila) {
int menorElemento = fila->frente->dado;
NoFila* noAtual = fila->frente->proximo;

while (noAtual != NULL) {
if (noAtual->dado < menorElemento) {
menorElemento = noAtual->dado;
}
noAtual = noAtual->proximo;
}

return menorElemento;
}
