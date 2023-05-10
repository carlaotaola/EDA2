#include "user.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100
#define MAX_POSTS 100
#define MAX_PREFERENCIAS 5
#define MAX_LENGTH 256

struct Post {
    char content[140];
};


struct User{
    char name[50];
    int age;
    int num_friends;
    int friend_ids[MAX_USERS];
    int num_pending;
    int pending_ids[MAX_USERS];
    struct Post posts[MAX_POSTS];
    int num_posts;
};



struct User users[MAX_USERS];
int num_users=0;
int current_user_id = -1;




void insert_user(){
    if (num_users>=MAX_USERS){
        printf("No se pueden añadir más usuarios. \n");
        return;
    }
    struct User user;
    printf("Ingrese el nombre del usuario: \n");
    scanf("%s", user.name);
    printf("Ingrese la edad del usuario: \n");
    scanf("%d", &user.age);


    user.num_friends = 0;
    user.num_pending = 0;
    user.num_posts = 0;


    users[num_users]=user;
    num_users++;


    printf("Usuario agregado con éxito \n");


}


void list_users(){
    if(num_users==0){
        printf("\n No hay usuarios en la lista por crear \n");
        return;
    }
    printf("\n Lista de usuarios: \n");
    for (int i=0; i<num_users; i++){
        printf("Nombre: %s\tEdad: %d\n", users[i].name, users[i].age);


    }
}
void select_user() {
    int user_id;
    printf("\nIngrese el ID del usuario: ");
    scanf("%d", &user_id);


    if (user_id < 0 || user_id >= num_users) {
        printf("\nID de usuario no válido.\n");
        return;
    }


    current_user_id = user_id;
    printf("\n¡Ha iniciado sesión como %s!\n", users[current_user_id].name);
}
void send_friend_request() {
    if (current_user_id == -1) {
        printf("\nDebe iniciar sesión como un usuario para usar esta opción.\n");
        return;
    }


    int friend_id;
    printf("\nIngrese el ID del amigo: ");
    scanf("%d", &friend_id);


    if (friend_id < 0 || friend_id >= num_users) {
        printf("\nID de usuario no válido.\n");
        return;
    }
    int i;
    for (i = 0; i < users[current_user_id].num_friends; i++) {
        if (users[current_user_id].friend_ids[i] == friend_id) {
            printf("\nYa eres amigo de este usuario.\n");
            return;
        }
    }


    users[current_user_id].pending_ids[users[current_user_id].num_pending] = friend_id;
    users[current_user_id].num_pending++;


    printf("\nSolicitud de amistad enviada con éxito.\n");
}
void manage_friend_requests() {
    if (current_user_id == -1) {
        printf("\nDebe seleccionar un usuario. \n");
        return;
    }


    printf("\n Solicitudes pendientes: \n");
    int i;
    for (i = 0; i < users[current_user_id].num_pending; i++) {
        if (users[current_user_id].pending_ids[i] == current_user_id) {
            printf("\nYa has enviado una solicitud de amistad a este usuario.\n");
            return;
        }
    }
}


int read_option(void){
    int value;
    if(scanf("%d", &value)!=1){
        return -1;
        return value;
    }
}
int main() {
    int option = -1;
    while (option != 4) {
        printf("\nMenú:\n");
        printf("1. Insertar un nuevo usuario.\n");
        printf("2. Listar todos los usuarios existentes.\n");
        printf("3. Salir.\n");


        printf("\nSeleccione una opción: ");
        scanf("%d", &option);


        switch (option) {
            case 1:
                insert_user();
                break;
            case 2:
                list_users();
                break;
            case 3:
                printf("\n¡Hasta pronto!\n");
                exit(0);
            default:
                printf("\nOpción no válida. Inténtalo de nuevo.\n");
                break;
        }
    }
    return 0;
}

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
