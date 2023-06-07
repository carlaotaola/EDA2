# ESTRUCTURA DE DATOS Y ALGORITMOS 2
Proyecto (RED SOCIAL): LET'S TRAVEL

#### NOMBRE DE LOS ESTUDIANTES:
Belén Méndez Echeverría

Carla Otaola Bernal

Ferran Mogas Ko

#### NIA DE LOS ESTUDIANTES:
268943

266426

268726

#### FECHA DE ENTREGA:
08-06-2023

## INFORME DEL PROYECTO:
### CONTENIDO:
1. Introducción

2. Objetivos del proyecto
   
   2.1 Se han cumplido los objetivos obligatorios 
   
   2.2 Se han cumplido los objetivos deseables
   
   2.3 Se han cumplido los objetivos de exploración

3. Solución
   
   3.1 Arquitectura del sistema
   
   3.2 Gestión de errores
   
   3.3 Diseño del modelo de datos
   
   3.4 Descripción y procesamiento del conjunto de datos

4. Referencias

5. Partes del código hechas con ayuda de IA

### INTRODUCCIÓN: (250 words max)
Este apartado tendría que describir el contexto, la definición de los problemas, 
las soluciones existentes que usted ha buscado para inspirarse, su propuesta y 
sus objetivos conseguidos y la estructura del informe. **(Hacerlo al último)**

### OBJETIVOS DEL PROYECTO:(2500 words max)

**Vista general**: Describe como se implementó. Más allá del que se los ha dado en el documento de orientación,
indicáis las principales características de las estructuras de datos y los algoritmos implementados hacia este 
objetivo y su comportamiento. Esto tendría que incluir:
Qué variables se han utilizado y con qué propósito?
Qué estructuras de datos se han elegido para este objetivo? Cuál es su uso esperado?
Qué era el algoritmo elegido para este objetivo? Cuál es su comportamiento esperado? Y su actuación a Big O?
Qué limitaciones tiene el algoritmo? Qué pasa con su aplicación?
Qué se puede mejorar? (*BORRAR ANTES DE ENTREGAR*)

**Tiempo**: tiempo necesario para desarrollar este objetivo (*BORRAR ANTES DE ENTREGAR*)

**Ubicación**: Qué línea de código y de qué fichero pertenece esta implementación. (*BORRAR ANTES DE ENTREGAR*)

#### SE HAN CUMPLIDO LOS OBJETIVOS OBLIGATORIOS:

##### Implementar como mínimo una Lista (List), una Pila (Stack) y una Cola (Queue) funcionales como parte de alguna de las funcionalidades del proyecto:

### LIST:
**VISTA GENERAL:**

'list': Es un puntero a una estructura de datos 'UsersList'. Representa la lista de usuarios y se utiliza como parámetro en las funciones.

'user': Es un puntero a una estrutura de datos 'User'. Representa un usuario que se agrega a la lista.

'node': Es un puntero a una estructura de datos 'UsersListNode'. Representa un nodo en la lista y se utiliza para agregar usuarios a la lista.

La estructura de datos utilizada es una lista doblemente enlazada ('UserList'). Cada nodo ('UserListNode') contiene un puntero al usuario y punteros al siguiente nodo ('next') y al nodo anterior ('prev').

El comportamineto esperado de las funciones es el siguiente:

'init_users_list': Iniciliza los valores de la lista. Establece los punteros 'first' y 'last' en nulo, el tamaño en cero y el indicador de lista ordenada como falso.

'add_user_to_list': Agrega un usuario a la lista. Crea un nuevo nodo, ajusta los punteros según si la lista está vacía o no, actualiza el tamaño y el indicador de lista ordenada.

'show_all_users_in_list': Muesttra todos los usuarios de la lista por su nombre de usuario.

'clear_users_list': Elimina todos los nodos de la lista.Si 'destroy_users' es verdadero, también detsruye los usuarios llamando a 'destroy_user'. Luego, llama a 'init_users_list' para restablecer la lista a su estado inicial.

La complejidad de estas operaciones depende del tamaño de la lista. Las operaciones dee agregar un usuario a la lista ('add_user_to_list') y mostrar todos los usuarios en la lista ('show_all_users_in_list') tienen una complejidad de O(1) en promedio, ya que se realizan en tiempo constante independientemente del tamaño de la lista. En cambio, la operacion de eliminar todos los usuarios de la lista ('clear_users_list') tiene una complejidad de O(n), donde n es el número de nodos en la lista. Esto se debe a que debe iterar sobre tods los nodos de la lista para liberar la memoria y restablecer la lista.

Limitaciones o posibles mejoras: Sería útil añadir verificaciones de puntero nulo y manejo de errores para evitar comportamientos inesperados.

**TIEMPO:** 50 min

**UBICACIÓN:** Archivo: *'user.c'* líneas 115-165

### STACK:
**VISTA GENERAL:** 

La funcionalidad 'UsersStack' es una estructura que representa la pila de usuarios. Tiene un puntero llamado 'top' que apunta al nodo superior de la pila. 

*UsersStackNode* es una estructura que representa un nodo en la pila. Contiene un punturo al usuario y un puntero al siguiente nodo en la pila.

*User* Es una estructura que representa a un usuario. Los detalles de esta estructura se encuentran en archivo: 'user'

El propósito de este código es proporcionar operaciones básicas de una pila para gestionar usuarios. Dichas operaciones son: Inicializar la pila de usuarios, estableciendo el puntero 'top' en NULL (*init_users_stack*). Verificar si la pila está vacía (*users_stack_empty*) Agregar un usuario a la parte superior de la pila, crear un nuevo nodo, asignando el usuario al nodo y ajustando los punteros para que el nuevo nodo se convierta en el nodo superior de la pila (*pop_users_stack*). Delvolver el usuario en la parte superior de la pila sin eliminarlo (*get_users_stack_top*). Vaciar la pila de usuarios liberando todos los nodos (*clear_users_stack*), luego llama a la función *init_users_stack* para restablecer la pila a su estado inicial. Por último, *fill_stack_with_n_random_users_from_list* llena la pila con 'n' usuarios selecionados aleatoriamente de una lista de usuarios '*UserList*'. Utiliza la función '*random_int*' para generar un índice aleatorio y busca el nodo correspondiente en la lista para agregarlo a la pila.

La complejidad de este algoritmo depende de la cantidad de usuarios 'n' y el tamañano de la lista. Si asumimos que la función 'random_int' tiene un tiempo constante de O(1) y la búsqueda en la lista tiene un tiempo lineal de O(n), el rendimiento general sería O(n^2).

Dentro de este objetivo pueden haber las siguientes limitaciones o posibles mejoras: El código no realiza comporbaciones para garantizar que los punteros no sean nulos antes de realizar operaciones. Sería útil añadir verificaciones de puntero nulo y manejo de errores para evitar comportamientos inesperados.

**TIEMPO:** 180 min

**UBICACIÓN:** Ficheros: *'user_stack.c' y 'user_stack.h'*

### QUEUE:
**VISTA GENERAL:**

**TIEMPO:**

**UBICACIÓN:**

##### Implementar funcionalmente uno de los algoritmos de búsqueda que se verán dentro del curso (LinearSearch o BinarySearch):
**VISTA GENERAL:**

'*list*': Es un puntero constante a una estructura de datos: '*UsersList*'.Representa la lista de usuarios en la cual se realizará la búsqueda.

'*username*': Es un puntero constante a una cadena de caracteres ('char'). Representa el nombre del usuario que se busca en la lista.

'*node*': Es un puntero a un nodo de la lista ('UsersListNode'). Se utiliza para iterar sobre los nodos de la lista durante la búsqueda.

'*node->user->username*': Accede al nombre de usuario almacenado en el nodo actual de la lista.

La estructura de datos utilizada es una lista enlazada ('UserList) que contiene nodos ('UsersListNode') que a su vez almacenan usuarios ('User').

El algoritmo utilizado para buscar un usuario por nombre de usuario es un enfoque de búsqueda lineal. Itera sobre los nodos de la lista, comparando el nombre de usuario del nodo actual con el nombre de usuario buscado utilizando la función 'strcmp' para determinar si son iguales.

La complejidad del algoritmo de búsqueda lineal es O(n), donde n es el número de nodos en la lista. Esto significa que el tiempo de ejecución del algoritmo aumenta de manera proporcional al tamaño de la lista.

En este objetivo se encuentran las siguientes limitaciones o posibles mejoras: La búsqueda lineal puede ser ineficiente en grandes listas, ya que se debe iterar sobre todos los elementos hasta encontrar el usuario o llegar al final de la lista. El algoritmo tampoco maneja casos en los que el nombre de usuario buscado es nulo. Una mejora adicional podría ser implementar algún tipo de índice o estructura de datos auxiliar para acelerar las búsquedas por nombre de usuario.

**TIEMPO:** 20 min

**UBICACIÓN:** Fichero: *'user.c'* líneas: 172-179.

##### Implementar funcionalmente uno de los algoritmos de ordenamiento que se verán a lo largo del curso (InsertionSort, BubbleSort, MergeSort o QuickSort):
**VISTA GENERAL:**

**TIEMPO:**

**UBICACIÓN:**

##### Implementar o bien un Diccionario (Dictionary) o bien una tabla Hash (HashTable) funcionales:
**VISTA GENERAL:**

**TIEMPO:**

**UBICACIÓN:**

#### SE HAN CUMPLIDO LOS OBJETIVOS DESEABLES: 

##### Leer datos de una fuente externa como un archivo de texto o CSV (No implica guardado de datos):
**VISTA GENERAL:**

'f': Es un puntero 'FILE'. Representa el archivo CSV del cual se leerán los datos del usuario.

'user': Es un puntero a una estructura de datos 'User'. Representa el usuario que se está leyendo desde el archivo CSV.

'stop': Es una variable del tipo 'char'. Representa el carácter de parada que indica el final de un campo en el archivo CSV.

La estructura de datos utilizada es una estructura 'User', que contiene los campos 'username', 'born_year', 'email', 'current_location' y 'preferences'. Cada campo es un arreglo de caracteres ('char') que almacena la información correspondiente al usuario.

El algoritmo utilizado tiene como objetivo leer un usuario desde una fila en un archivo CSV. Sigue los siguientes pasos:

1. Crea un nuevo usuario utilizando la función 'create_user()', que devuelve un puntero a una estructura 'User' vacía. 
 
2. Lee el campo 'username' desde el archivo CSV utilizando la función 'read_csv_token(f, user->username)'. El carácter de parada ('stop') indica si se ha leído correctamente el campo. 

3. Si el campo no termina con el separador CSV esperado, se destruye el usuario creado anteriormente, se muestra un mensaje de error y se retorna un puntero nulo.

4. Los pasos 2 y 3 se repiten para los campos 'born_year', 'email', 'current_location' y 'preferences'. Se verifica que cada campo termine con el separador CSV esperado.

5. Finalmente, se verifica que la fila CSV termine con el carácter de fin de línea ('CSV_ENDLINE'). Si no es así, se destruye el usuario, se muestra un mensaje de error y se retorna un puntero nulo.

6. Si todo el proceso se realiza sin problemas, se retorna el puntero al usuario creado y leído correctamente desde el archivo CSV.

El comportamiento esperado del algoritmo es leer los campos del usuario desde la fila CSV y crear una estructura de usuario válida con la información correspondiente.

La complejidad del algoritmo depende del tamaño de la fila CSV y el número de campos que se deben leer. Cada llamada a las funciones 'read_csv_token' y 'read_csv_number' tiene una complejidad de O(m), donde m es la longitud del campo a leer.

Limitaciones o posibles mejoras: El algoritmo asume que el formato del archivo CSV es correcto y sigue una estructura predefinida. No se realizan validaciones exhaustivas para todos los posibles errores de formato. No se maneja el caso en el que no se pueda crear el usuario correctamente debido a problemas de memoria.

**TIEMPO:** 180 min

**UBICACIÓN:** Fichero: *'user.c'* líneas: 183-241

##### Red Social temática y con una capa de personalización a nivel conceptual:
**VISTA GENERAL:**

**TIEMPO:**

**UBICACIÓN:**

#### SE HAN CUMPLIDO LOS OBJETIVOS DE EXPLORACIÓN: 

##### Implementar las funcionalidades de lectura y guardado de datos (Información de los usuarios y sus contactos, y demás que se quiera añadir) desde un archivo externo (.txt o csv):
**VISTA GENERAL:**

'list': Es un puntero a una estructura de datos UsersList. Representa la lista de usuarios a la cual se agregarán los usuarios leídos desde el archivo CSV.

'filename': Es un puntero a una cadena de caracteres que contiene el nombre del archivo CSV.

'f': Es un puntero a FILE. Representa el archivo CSV que se abrirá para lectura

El algoritmo utilizado tiene como objetivo llenar la lista de usuarios ('list') a partir de un archivo CSV. Sigue los siguientes pasos:

1. Intenta abrir el archivo CSV en modo lectura utilizando la función 'fopen'.

2. Si la apertura del archivo no tiene éxito, muestra un mensaje de error indicando que el archivo no se encontró y devuelve la función.

3. Dentro de un bucle 'while', lee usuarios desde el archivo CSV utilizando la función 'read_user_from_csv_row'.

4. Si se pudo leer un usuario válido desde el archivo (es decir, el puntero al usuario no es nulo), se agrega a la lista utilizando la función 'add_user_to_list'.

5. El bucle continúa hasta que se alcanza el final del archivo ('feof' indica que no se pueden leer más datos).

6. Una vez que se han leído todos los usuarios del archivo CSV, se cierra el archivo utilizando la función 'fclose'.

El comportamiento esperado del algoritmo es llenar la lista de usuarios con los usuarios leídos desde el archivo CSV.

La complejidad del algoritmo depende del número de usuarios en el archivo CSV y el tiempo de ejecución de las funciones 'read_user_from_csv_row' y 'add_user_to_list'. Si hay n usuarios en el archivo, la complejidad sería O(n).

Limitaciones o posibles mejoras: No se realizan validaciones exhaustivas del formato y contenido del archivo CSV. Si el archivo no sigue el formato esperado, se pueden producir errores o comportamientos inesperados.

**TIEMPO:** 30 min

**UBICACIÓN:** Archivo: *'user.c'* líneas: 243-260

### SOLUCIÓN:

#### Arquitectura del sistema: (750 words max)
Esta subsección tendría que incluir al menos un diagrama de la arquitectura del sistema y una descripción 
de los bloques principales y su funcionalidad.

#### Gestión de errores: (250 words max)
Esta subsección tendría que describir como se gestionaron los errores en el proyecto y el razonamiento que hay detrás.

#### Diseño del modelo de datos: (250 words max)
Esta subsección tendría que incluir al menos un diagrama de flujo de datos de la solución y su descripción.

#### Descripción y procesamiento del conjunto de datos: (250 words max)
Esta subsección tendría que incluir una descripción del(s) conjunto(s) de datos utilizados, como se leyeron y procesar.

### REFERENCIAS:
Esta sección tendría que incluir las referencias utilizadas en el informe. Estas referencias incluyen cualquier sitio web,
material de lectura, publicaciones o libros utilizados para la inspiración. **(Hacerlo al último, SOLO SI ES NECESARIO)**

### PARTES DEL CÓDIGO HECHAS CON AYUDA DE IA: **(Hacerlo al último, SOLO SI ES NECESARIO)**
