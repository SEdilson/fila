typedef struct elem Telem;
typedef struct fila Fila;

Fila* criaFila();
bool inserir(Fila *f, int info);
bool remover(Fila *f, int *info);
int tamanho(Fila *f);
