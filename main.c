#include "user.h"
#include <stdio.h>
#include <string.h>

#define MAX_PREFERENCIAS 5
#define MAX_LENGTH 256

typedef struct {
    char NOMBRE_USUARIO[MAX_LENGTH];
    int EDAD;
    char CORREO_ELECTRONICO[MAX_LENGTH];
    char UBICACION_ACTUAL_CIUDAD[MAX_LENGTH];
    char PREFERENCIAS[MAX_LENGTH][MAX_PREFERENCIAS];
} USUARIO;

void init_USUARIO(USUARIO* USUARIO);
const char* get_USAURIO_PREFERENCIA(const* u, int i);
void set_USUARIO_PREFERENCIA(USUARIO* u, int i, const char* pref);

void mostra_USUARIO_DATA_MENU(USUARIO* u);

typedef struct UsuarioListNode{
    USUARIO* USUARIO;
    struct UsuarioListNode* next;
    struct USUARIOListNode* prev;
}UserListNode;

typedef struct{
    UsuarioListNode* first;
    UsuarioListNode* last;
    size_t size;
}UsuarioList;
