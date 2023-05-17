#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100
#define MAX_POSTS 100
#define PREFERENCES_COUNT 5
#define MAX_STRING_LEN 256


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
int num_users = 0;
char current_user_name;

typedef struct {
    char username[MAX_STRING_LEN];
    int born_year;
    char email[MAX_STRING_LEN];
    char current_location[MAX_STRING_LEN];
    char preferences[PREFERENCES_COUNT][MAX_STRING_LEN];
}User;

typedef struct UserListNode{
    User* user;
    char username[MAX_STRING_LEN];
    struct UsersListNode* next;
    struct UsersListNode* prev;
}UsersListNode;

typedef struct{
    struct UserListNode* first;
    struct UserListNode* last;
    size_t size;
}UsersList;

void init_users_list(UsersList* list);
void add_user_to_list(UsersList* list, User* user);
void show_all_users_in_list(UsersList* list);
void clear_users_list(UsersList* list);

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

void specific_user() {
    int user_name;
    printf("\nIngrese el nombre del usuario: ");
    scanf("%d", &user_name);


    if (user_name == NULL || user_name >= num_users) {
        printf("\nNombre de usuario no válido.\n");
        return;
    }

    current_user_name = user_name;
    printf("\n¡Ha iniciado sesión como %s!\n", users[current_user_name].name);
}
    void send_friend_request() {
        if (current_user_name == -1) {
            printf("\nDebe iniciar sesión como un usuario para usar esta opción.\n");
            return;
        }

        int friend_name;
        printf("\nIngrese el nombre del amigo: ");
        scanf("%d", &friend_name);

        if (friend_name < 0 || friend_name >= num_users) {
            printf("\nNombre de usuario no válido.\n");
            return;
        }
        int i;
        for (i = 0; i < users[current_user_name].num_friends; i++) {
            if (users[current_user_name].friend_ids[i] == friend_name) {
                printf("\nYa eres amigo de este usuario.\n");
                return;
            }
        }

        users[current_user_name].pending_ids[users[current_user_name].num_pending] = friend_name;
        users[current_user_name].num_pending++;

        printf("\nSolicitud de amistad enviada con éxito.\n");
    }
    void manage_friend_requests() {
        if (current_user_name == -1) {
            printf("\nDebe seleccionar un usuario. \n");
            return;
        }

        printf("\n Solicitudes pendientes: \n");
        int i;
        for (i = 0; i < users[current_user_name].num_pending; i++) {
            if (users[current_user_name].pending_ids[i] == current_user_name) {
                printf("\nYa has enviado una solicitud de amistad a este usuario.\n");
                return;
            }
        }
    }

    void make_post() {
        if (users[current_user_name].num_posts >= MAX_POSTS) {
            printf("\nNo se pueden agregar más publicaciones.\n");
            return;
        }
        struct Post post;
        printf("\nIngrese el contenido de la publicación (máximo 140 caracteres): ");
        scanf(" %[^\n]s", post.content);


        users[current_user_name].posts[users[current_user_name].num_posts] = post;
        users[current_user_name].num_posts++;


        printf("\nPublicación realizada con éxito.\n");

    }

    void list_posts() {
        if (users[current_user_name].num_posts == 0) {
            printf("\nNo hay publicaciones para mostrar.\n");
            return;
        }


        printf("\nLista de publicaciones:\n");
        for (int i = 0; i < users[current_user_name].num_posts; i++) {
            printf("%d. %s\n", i + 1, users[current_user_name].posts[i].content);
        }
    }

//int read_option(void){
    //int value;
    //if(scanf("%d", &value)!=1){
        //return -1;
        //return value;
    //}
//}

void init_user(User* user);
const char* get_user_preference(const User* u, int idx);
void set_user_preference(User* u, int idx, const char* pref);

void show_fill_user_data_menu(User* u);



void init_users_list(UsersList* list){
    list->first = NULL;
    list->last = NULL;
    list->size = 0;
}

void add_user_to_list(UsersList* list, User* user){
    struct UserListNode* node = (UsersListNode*) malloc(sizeof(UsersListNode));
    node->user = user;
    node->next = NULL;
    if (list->first == NULL){
        list->first = node;
        list->last = node;
        node->prev = NULL;
    }else{
        list->last->next = node;
        node->prev = list->last;
        list->last = node;
    }
    list->size++;
}

void show_all_users_in_list(UsersList* list){
    printf("Todos los usuarios: \n");
    for (struct UserListNode* node = list->first; node!=NULL; node = node->next){
        printf(" -%s\n", node->username);
    }
    printf("\n");
}

void clear_users_list(UsersList* list){
    UsersListNode* node = list->first;
    struct UserListNode* next;
    while(node != NULL){
        next = node->next;
        free(node->user);
        free(node);
        node = next;
    }
    init_users_list(list);
}

void show_fill_users_data_menu(User* user){
    int status = 0;
    while(status != 1){
        printf("Escribe un nombre de usuario:\n");
        status = scanf("%s", user->username);
    }
    status = 0;
    while(status != 1){
        printf("Escribe tu año de nacimiento:\n");
        status = scanf("%d", &user->born_year);
    }
    status = 0;
    for(int i =0; i < PREFERENCES_COUNT, i++;){
        status = 0;
        while(status!=1){
            printf("Escribe tus preferencias %d/%d:\n",(i+1), PREFERENCES_COUNT);
            status = scanf("%s", user->preferences[i]);
        }
    }
    printf("\n");
}


int main() {
    int option = -1;
    while (option != 5) {
        printf("\nMenú:\n");
        printf("1. Insertar un nuevo usuario.\n");
        printf("2. Listar todos los usuarios existentes.\n");
        printf("3. Operar como un usuario específico.\n");
        printf("4. Salir.\n");


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
                specific_user();
                break;
            case 4:
                printf("\n¡Hasta pronto!\n");
                exit(0);
            default:
                printf("\nOpción no válida. Inténtalo de nuevo.\n");
                break;
        }
    }
    return 0;
}