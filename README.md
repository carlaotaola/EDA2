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
**VISTA GENERAL:** 

La funcionalidad *UsersStack* es una estructura que representa la pila de usuarios. Tiene un puntero llamado 'top' que apunta al nodo superior de la pila. 

*UsersStackNode* es una estructura que representa un nodo en la pila. Contiene un punturo al usuario y un puntero al siguiente nodo en la pila.

*User* Es una estructura que representa a un usuario. Los detalles de esta estructura se encuentran en archivo: *user*

El propósito de este código es proporcionar operaciones básicas de una pila para gestionar usuarios. Dichas operaciones son: Inicializar la pila de usuarios, estableciendo el puntero 'top' en NULL (*init_users_stack*). Verificar si la pila está vacía (*users_stack_empty*) Agregar un usuario a la parte superior de la pila, crear un nuevo nodo, asignando el usuario al nodo y ajustando los punteros para que el nuevo nodo se convierta en el nodo superior de la pila (*pop_users_stack*). Delvolver el usuario en la parte superior de la pila sin eliminarlo (*get_users_stack_top*). Vaciar la pila de usuarios liberando todos los nodos (*clear_users_stack*), luego llama a la función *init_users_stack* para restablecer la pila a su estado inicial. Por último, *fill_stack_with_n_random_users_from_list* llena la pila con 'n' usuarios selecionados aleatoriamente de una lista de usuarios '*UserList*'. Utiliza la función '*random_int*' para generar un índice aleatorio y busca el nodo correspondiente en la lista para agregarlo a la pila.

La complejidad de este algoritmo depende de la cantidad de usuarios 'n' y el tamañano de la lista. Si asumimos que la función 'random_int' tiene un tiempo constante de O(1) y la búsqueda en la lista tiene un tiempo lineal de O(n), el rendimiento general sería O(n^2).

Dentro de este objetivo pueden haber las siguientes limitaciones o posibles mejoras: El código no realiza comporbaciones para garantizar que los punteros no sean nulos antes de realizar operaciones. Sería útil añadir verificaciones de puntero nulo y manejo de errores para evitar comportamientos inesperados.

**TIEMPO:** 180 min

**UBICACIÓN:** Ficheros: *user_stack*

##### Implementar funcionalmente uno de los algoritmos de búsqueda que se verán dentro del curso (LinearSearch o BinarySearch):
**VISTA GENERAL:**

**TIEMPO:**

**UBICACIÓN:**

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

**TIEMPO:**

**UBICACIÓN:**

##### Red Social temática y con una capa de personalización a nivel conceptual:
**VISTA GENERAL:**

**TIEMPO:**

**UBICACIÓN:**

#### SE HAN CUMPLIDO LOS OBJETIVOS DE EXPLORACIÓN: 

##### Implementar las funcionalidades de lectura y guardado de datos (Información de los usuarios y sus contactos, y demás que se quiera añadir) desde un archivo externo (.txt o csv):
**VISTA GENERAL:**

**TIEMPO:**

**UBICACIÓN:**

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
material de lectura, publicaciones o libros utilizados para la inspiración. **(Hacerlo al último)**

### PARTES DEL CÓDIGO HECHAS CON AYUDA DE IA: **(Hacerlo al último)**
