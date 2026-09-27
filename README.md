# 🛠️ ACTIVIDAD 6: TALLER PRÁCTICO DE REPASO Y CONSOLIDACIÓN EN C++

> **Asignatura:** Laboratorio de Programación (LPR) — 5° Año  
> **Institución:** E.E.S.T. N° 99 "Juana Azurduy" - Vicente López  
> **Profesor:** Prof. Mansilla Muñoz York  
> **Ciclo Lectivo:** 2026  

---

## 🎯 DESCRIPCIÓN DEL PROYECTO

Este repositorio contiene la suite modular de C++ correspondiente a la **Actividad 6**, orientada a ejercitar y consolidar tres pilares de bajo nivel:

1. **Reto 1 (Recursividad):** Gestión de la Pila de Llamadas (*Stack*) y aplicación de caso base de parada para evitar el colapso por *Stack Overflow*.
2. **Reto 2 (Búsqueda Secuencial):** Recorrido indexado en arreglos contiguos de memoria RAM, optimizando el tiempo de ejecución $O(n)$ mediante la instrucción `break`.
3. **Reto 3 (Punteros e Intercambio Físico):** Pasaje por dirección (`&`) y desreferenciación (`*`) para la modificación directa de celdas de memoria.

---

## 🗂️ ESTRUCTURA OBLIGATORIA DEL REPOSITORIO

```text
repasogeneral/
├── .gitattributes                  <-- Normalización de finales de línea
├── .gitignore                      <-- Reglas de exclusión de binarios (.exe, .vscode)
├── LICENSE                         <-- Licencia MIT de uso escolar
├── README.md                       <-- Portada técnica del proyecto
├── Docs/
│   ├── EEST99_LPR2026_ACT06_Informe_v1.0.0.pdf
│   └── CHANGELOG.md                <-- Bitácora de versionado SemVer
├── src/
│   ├── main.cpp                    <-- Código fuente C++ unificado
│   └── repasogeneral.exe                  <-- Ejecutable local (ignorado por Git)
└── Capturas/
    ├── ejecucion_repasogeneral.png        <-- Captura de pantalla de la terminal
    └── traza_memoria.png           <-- Diagrama de distribución en la RAM
```

---

## 🧠 DIAGRAMA DE TRAZA DE MEMORIA RAM

Esquema de bloques correspondiente a la disposición de direcciones físicas en la Pila (*Stack*):

```text
DIRECCIÓN HEX      VARIABLE / CONCEPTO       VALOR EN CELDA
+------------------+-------------------------+------------------+
|   0x61fe1c       | int x (main)            | 500 (ex 100)     |
+------------------+-------------------------+------------------+
|   0x61fe18       | int y (main)            | 100 (ex 500)     |
+------------------+-------------------------+------------------+
|   0x61fe08       | vectorDatos[6]          | 18               |
+------------------+-------------------------+------------------+
|   0x61fdf0       | int* ptrA               | 0x61fe1c         |
+------------------+-------------------------+------------------+
|   0x61fde8       | int* ptrB               | 0x61fe18         |
+------------------+-------------------------+------------------+
|   0x61fde0       | int temporal            | 100 (búfer)      |
+------------------+-------------------------+------------------+

PILA DE LLAMADAS RECURSIVAS (STACK FRAMES):
[ sumaRecursiva(0) ] -> Retorna 0 (Caso Base)
[ sumaRecursiva(1) ] -> Retorna 1 + 0 = 1
[ sumaRecursiva(2) ] -> Retorna 2 + 1 = 3
[ sumaRecursiva(3) ] -> Retorna 3 + 3 = 6
[ sumaRecursiva(4) ] -> Retorna 4 + 6 = 10
[ sumaRecursiva(5) ] -> Retorna 5 + 10 = 15 -> Entregado a main()
```

---

## 💻 COMPILACIÓN Y EJECUCIÓN EN POWERSHELL

Para compilar y ejecutar el programa desde la terminal integrada de Visual Studio Code:

```powershell
# 1. Compilar el código fuente C++
g++ src/main.cpp -o src/repasogeneral.exe

# 2. Ejecutar la aplicación en Windows
.\src\repasogeneral.exe
```

---

## 🌐 SINCRO DUAL-REMOTE (GITHUB + GITLAB)

Comandos ejecutados para mantener sincronizados simultáneamente ambos repositorios remotos:

```powershell
# Configuración de remotos
git remote add origin [https://github.com/webappdeved/repasogeneral.git](https://github.com/webappdeved/repasogeneral.git)
git remote set-url --add --push origin [https://gitlab.com/webapplicationsdevelopmentde/repasogeneral.git](https://gitlab.com/webapplicationsdevelopmentde/repasogeneral.git)

# Envío unificado
git push origin main
```