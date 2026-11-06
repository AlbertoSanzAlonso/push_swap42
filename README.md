# Push_swap

> Because Swap_push doesn’t sound as natural.

Proyecto del Common Core de **42 Barcelona** desarrollado conjuntamente por **asanz-al** y **anmarti2**.

---

## 📌 Descripción

El objetivo de **push_swap** es ordenar una pila de números enteros recibida por argumentos utilizando dos pilas (`a` y `b`) y un conjunto limitado de instrucciones, optimizando al máximo el número total de operaciones ejecutadas.

El programa imprime la secuencia de instrucciones más corta posible para dejar la pila `a` ordenada de menor a mayor.

---

## 👥 Autores

* **Alberto Sanz Alonso** ([@asanz-al](https://github.com/AlbertoSanzAlonso))
* **Andreu Martins** ([@anmarti2](https://github.com/6xhky))

---

## 🕹️ Operaciones permitidas

| Operación | Descripción |
| :--- | :--- |
| **`sa`** / **`sb`** / **`ss`** | Intercambia los 2 primeros elementos del stack `a`, `b` o ambos a la vez. |
| **`pa`** / **`pb`** | Toma el primer elemento del stack opuesto y lo pone encima (`pb` manda de `a` a `b`). |
| **`ra`** / **`rb`** / **`rr`** | Rota el stack hacia arriba: el primer elemento pasa a ser el último. |
| **`rra`** / **`rrb`** / **`rrr`** | Rota el stack hacia abajo: el último elemento pasa a ser el primero. |

---

## 🚀 Compilación y Uso

El proyecto cuenta con un `Makefile` con las reglas habituales (`all`, `clean`, `fclean`, `re`).

```bash
# Compilar el binario
make

# Ejecutar con una lista de números
./push_swap 2 1 3 6 5 8

# Ejecutar pasando una cadena entre comillas
./push_swap "2 1 3 6 5 8"
