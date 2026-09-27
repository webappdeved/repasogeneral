# 🛠️ ACTIVIDAD 6: TALLER PRÁCTICO DE REPASO Y CONSOLIDACIÓN EN C++

> **Asignatura:** Laboratorio de Programación (LPR) — 5° Año  
> **Institución:** E.E.S.T. N° 99 "Juana de Arco" - Vicente López  
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
├── docs/
│   ├── EEST99_LPR2026_ACT06_Informe_v1.0.0.pdf
│   └── CHANGELOG.md                <-- Bitácora de versionado SemVer
├── src/
│   ├── main.cpp                    <-- Código fuente C++ unificado
│   └── repaso.exe                  <-- Ejecutable local (ignorado por Git)
└── capturas/
    ├── ejecucion_repaso.png        <-- Captura de pantalla de la terminal
    └── traza_memoria.png           <-- Diagrama de distribución en la RAM