# Trabajo Práctico Transversal - Parte 1/3

## Integrantes del Grupo

- **Miño Ian Alejandro**
- **Joel Maximiliano Ruiz**
- **Contino Sarmiento Lucas Joaquín**
- **Bruno Ezequiel Costilla**

---

El **Trabajo Práctico Transversal (TPT)** es un trabajo de práctica de programación que se desarrolla a lo largo del cuatrimestre. Se utiliza el lenguaje **C** para su desarrollo, retomando contenidos ya estudiados en la asignatura *Programación*: **TAD**, **listas enlazadas**, **asignación dinámica de memoria** y **manejo de cadenas de caracteres**.

---

### 🎯 Objetivo del TPT

El objetivo final del TPT es construir un **TAD que modele los objetos matemáticos conjuntos y listas** con sus respectivas operaciones, para luego utilizar este TAD en la implementación de un algoritmo sobre **autómatas finitos**, que se estudia en esta asignatura.

---

### ❓ ¿Por qué lenguaje C?

Seguramente se preguntarán por qué no se da la libertad de elegir el lenguaje y las estructuras que cada uno considere apropiadas para la resolución del TPT.  
La respuesta es simple: **es necesario mantener una continuidad** no solo entre *TCI* y *TCII*, sino también entre *Programación* y *TCI*.

El uso del lenguaje **C** y de las estructuras aquí propuestas resultarán fundamentales en *Teoría de la Computación II*, por lo que se solicita realizar el esfuerzo necesario para trabajar teniendo estas premisas en cuenta.

---

### 👩‍💻 Valor formativo

Existen entornos de trabajo que brindan múltiples herramientas que facilitan la programación en lenguajes de alto nivel. Sin embargo, en *TCI* y *TCII* se trabaja en un nivel de abstracción más cercano a la máquina.  
Dado que posiblemente esta sea la **última oportunidad que tengan de hacerlo antes de pasar a lenguajes más modernos**, esta experiencia será **muy valiosa para su formación como programadores** y, en consecuencia, como **Analistas de Sistemas de Información**.

---

### 💡 Adaptabilidad como habilidad clave

Tengan en cuenta que a lo largo de su vida profesional se toparán con distintos lenguajes de programación: nuevos, de moda, clásicos, buenos y no tan buenos... y deberán ser capaces de adaptarse bajo distintas circunstancias.

Por eso es buena idea **profundizar en el lenguaje C**, que permite una programación más cercana a la máquina mediante la **manipulación de estructuras básicas** y la programación en consola.

---

### 📢 Invitación al desafío

Quedan **invitados al desafío**.  
Para la **regularización de la materia es obligatoria la aprobación del TPT**. Para su desarrollo pueden trabajar en grupos de **hasta 4 integrantes**.

> 💬 *Todos los miembros del grupo deben conocer, comprender y participar del desarrollo del TPT, ya que en la presentación final se harán preguntas a todos sobre la implementación realizada.*

---

## Objetivos de Aprendizaje

- **Manipular árboles en C.**
- **Modelar cadenas de caracteres, listas y conjuntos utilizando una estructura tipo árbol.**

---

La estructura que utilizaremos contará con **dos campos**:

1. Un campo de tipo **entero**, que permite definir qué tipo de dato es almacenado en esa estructura (*cadena, lista o conjunto*).
2. Un segundo campo que será una **unión** de dos tipos de datos: *cadena* y *árbol*.

El **árbol** es lo que nos va a permitir construir **conjuntos y listas heterogéneas y con distintos niveles de anidamiento**.

> ⚠️ *No nos preocupamos por la eficiencia.*  
De hecho, las estructuras de datos con las que vamos a trabajar **no son para nada eficientes**.  
Sin embargo, resultarán lo suficientemente **claras** como para poder operar con ellas mediante **algoritmos sencillos y elegantes**.

---

### 🌳 Componente básico de la estructura

El componente básico de la estructura de árbol para almacenar los conjuntos y listas es **muy simple**:

- El **nodo raíz** será de tipo entero y nos indicará el tipo de dato que se encuentra contenido en el árbol.
- El **hijo izquierdo** es un puntero al dato almacenado.
- El **hijo derecho** es un puntero al siguiente elemento en la estructura.

---

                       ________Tipo de dato________
                      |                           |
                      v                           v
                 ________                    ___________
                |  Dato  |                  | Siguiente |
                |        |                  |   dato    |
                ----------                  -------------

---

## Estructura básica del árbol

La forma básica del **árbol** es la que muestra la **Figura 1**. La clave está en que el **Tipo de dato** nos dará información de qué es lo que sigue en el árbol.

- La **raíz** podrá ser de tipo **conjunto** o **lista**.
- El **hijo izquierdo** apuntará o a una **cadena** o a un **árbol**.
- El **hijo derecho** apuntará al **siguiente elemento**.

---

### Definición en C

En el lenguaje **C**, contamos con la posibilidad de declarar **estructuras** como tipos definidos por el usuario. Teniendo en cuenta el tipo de dato `Str` trabajado en los **TP1, TP2** y **TP3**, utilizaremos la siguiente definición del tipo de dato para el TAD:

### Definición del tipo de dato en C

```c
#define STR 1
#define SET 2
#define LIST 3

struct dataType {
    int nodeType; // STR, SET, LIST
    union {
        Str str;
        struct {
            struct dataType* data;
            struct dataType* next;
        };
    };
};

typedef struct dataType* tData;
```

---

## Actividad y Recomendaciones

---

### Teniendo en cuenta la estructura definida anteriormente, dibuje los siguientes árboles:

1. **a)** {1, 2, 3}

2. **b)** {uno, 5, {3, 6}, 13}

---

### Defina el AFD que acepte cadenas sobre **0,1** cuya cantidad de **0** sea impar. Dibuje el árbol correspondiente a ese autómata.

## Requerimiento

---

### Implemente las funciones realizadas en los TPs 2 y 3 utilizando la estructura presentada.

1. **Inicializar una lista**
2. **Cargar una lista**
3. **Mostrar una lista**
4. **Crear un conjunto vacío**
5. **Cargar un conjunto**  
   - Considerar carga por consola y carga por cadena hardcodeada.
   - Considerar el conjunto vacío.
6. **Mostrar un conjunto**
7. **Implementar las operaciones de:**
   - Unión
   - Intersección
   - Diferencia
   - Cardinalidad
   - Pertenencia
   - Inclusión
   - Eliminar conjunto
