# **📘 MANUAL TÉCNICO DEL PROGRAMADOR Y ARQUITECTURA DE CÓDIGO**

**Proyecto:** Suite de Repaso e Integración C++ (Actividad 6\)

**Institución:** E.E.S.T. N° 99 "Juana Azurduy" — Vicente López

**Asignatura:** Laboratorio de Programación (LPR) — 5° Año

**Docente:** Mansilla Muñoz York Elías (Grupo 99\)

**Autor / Grupo:** Mansilla Muñoz York Elías (Grupo 99\)

**Fecha:** 25 de septiembre de 2026 | **Versión:** v1.0.0

## **📄 CONTROL DE VERSIONES Y CHANGELOG**

| Versión | Fecha | Autor | Descripción de Cambios |
| :---- | :---- | :---- | :---- |
| **v1.0.0** | 25/09/2026 | Prof. York | Versión inicial de la suite modular de C++ con soporte Dual-Remote. |

## 

## 

## **🏗️ 1\. ARQUITECTURA DEL SISTEMA Y ENTORNO DE DESARROLLO**

### **Requisitos del Entorno**

* **Compilador:** g++ (MinGW-w64 GCC v8.1.0 o superior). Estándar C++11 habilitado.  
* **IDE recomendado:** Visual Studio Code con extensión *C/C++ Extension Pack*.  
* **Shell:** Windows PowerShell 5.1 o PowerShell Core 7+.

### **Estructura de Directorios del Repositorio**

REPASOGENERAL/

├── .gitattributes                  \<-- Normalización de finales de línea  
├── .gitignore                      \<-- Exclusiones de Git (.exe, .vscode/)  
├── LICENSE                         \<-- Licencia MIT de uso escolar  
├── README.md                     \<-- Portada técnica del proyecto  
├── docs/                           \<-- Documentación y manuales técnicos  
│   └── InformeEEST1\_LPR2026\_ACT06\_G03\_Informe\_v1.0.0.pdf  
│   ├── CHANGELOG.md	\<-- Bitácora de versionado SemVer  
│   └── manuales/  
│       ├── manual\_programador\_v1.0.0.pdf  
│       ├── manual\_programador\_v1.0.0.md  
│       └── manual\_usuario\_v1.0.0.pdf  
│       └── manual\_usuario\_v1.0.0.md  
├── src/                            \<-- Código fuente compilable  
│   ├── main.cpp		\<-- Código fuente C++ unificado  
│   └── repasogeneral.exe	\<-- Ejecutable local (ignorado por Git)  
└── capturas/                       \<-- Evidencias de ejecución (.png)  
    ├── ejecucion\_repasogeneral.png	\<-- Captura de pantalla de la terminal  
    └── traza\_memoria.png		\<-- Diagrama de distribución en la RAM

## **🧩 2\. DOCUMENTACIÓN DE MÓDULOS Y FUNCIONES (src/main.cpp)**

### **Módulo 1: int sumaRecursiva(int n)**

* **Propósito:** Calcula la suma acumulada de enteros positivos desde $1$ hasta n.  
* **Firma:** int sumaRecursiva(int n)  
* **Lógica:** Implementa una condición de corte explicita (if (n \<= 0\) return 0;). Cada llamada genera un marco (*Stack Frame*) en la pila hasta alcanzar el caso base, evitando desbordamientos de memoria (*Stack Overflow*).

### **Módulo 2: Búsqueda Secuencial (Bloque en main)**

* **Propósito:** Localizar la presencia de un número dentro de un arreglo contiguo en memoria.  
* **Complejidad Temporal:** $O(n)$ en el peor caso.  
* **Optimización:** Incorpora la sentencia break inmediatamente tras hallar la coincidencia, deteniendo las iteraciones innecesarias del ciclo for. Imprime la dirección RAM utilizando el operador \&vectorDatos\[i\].

### **Módulo 3: void intercambiarValores(int\* ptrA, int\* ptrB)**

* **Propósito:** Realizar la permutación de valores entre dos celdas de memoria externas mediante paso por referencia con punteros.  
* **Firma:** void intercambiarValores(int\* ptrA, int\* ptrB)  
* **Mecánica:**  
  1. int temporal \= \*ptrA; $\rightarrow$ Copia el contenido de la primera celda en un búfer.  
  2. \*ptrA \= \*ptrB; $\rightarrow$ Escribe el valor de la segunda celda en la primera.  
  3. \*ptrB \= temporal; $\rightarrow$ Asigna el valor guardado en el búfer a la segunda celda.

## 

## **⚙️ 3\. INSTRUCCIONES DE COMPILACIÓN Y DEPURACIÓN**

### **Compilación desde PowerShell**

Ubicándose en la raíz del proyecto, ejecute:

\# Compilación del fuente hacia la carpeta src

g++ src/main.cpp \-o src/repasogeneral.exe

\# Ejecución del binario resultante

.\\src\\repasogeneral.exe

### **Diagnóstico de Errores Frecuentes**

1. **Error: 'g++' no se reconoce como un comando interno...**  
   * *Causa:* Las variables de entorno de Windows (PATH) no incluyen el directorio bin de MinGW.  
   * *Solución:* Agregar C:\\mingw64\\bin al PATH del sistema y reiniciar la consola.  
2. **Error: fatal error: iostream: No such file or directory**  
   * *Causa:* Instalación incompleta o corrupta de MinGW-w64.

## **📚 4\. REFERENCIAS**

* Kernighan, B. W., & Ritchie, D. M. (1988). *El lenguaje de programación C* (2.ª ed.). Prentice Hall.  
* Stroustrup, B. (2013). *The C++ programming language* (4th ed.). Addison-Wesley.