# Manual del Programador — Actividad 5 (SISTEMAPROYECTO)

## ¿Qué es una Estructura (struct) y cómo se usa la Flecha (->)?

### 1. ¿Qué es la estructura EntidadProyecto?
Una **estructura** (`struct`) es como armar una "ficha de datos" personalizada. Nos sirve para agrupar información de distinto tipo sobre una misma cosa en un solo lugar. 

En nuestro código, la ficha `EntidadProyecto` guarda 3 datos juntos:
* **id** (`int`): Un número entero para identificar la ficha (por ejemplo: `101`).
* **nombre** (`char[50]`): Un texto de hasta 50 letras para ponerle un nombre o descripción (por ejemplo: `"Sensor Taller"`).
* **metrica** (`float`): Un número con coma decimal para guardar un valor de medición (por ejemplo: `24.5`).

---

### 2. Modificar datos con Punteros y la Flecha (->)
Cuando le pasamos la ficha a la función `cargarDatos()`, no le enviamos una copia de toda la ficha porque eso ocuparía espacio de más en la memoria RAM. En su lugar, le enviamos la dirección exacta de memoria donde está guardada la ficha original usando un **puntero** (`ptr`).

Como `ptr` guarda una dirección de memoria y no la ficha directamente, C++ no nos deja usar el punto normal. Por eso usamos el operador **flecha** (`->`):

* **Sintaxis:** `ptr->metrica`
* **¿Qué significa en criollo?:** "Andá a la casilla de memoria guardada en `ptr` y escribí el dato directamente dentro de la ficha original".