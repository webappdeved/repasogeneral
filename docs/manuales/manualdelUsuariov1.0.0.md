# **📕 GUÍA DE USUARIO Y OPERACIÓN DEL SISTEMA**

**Proyecto:** Aplicación Interactiva de Repaso en C++

**Institución:** E.E.S.T. N° 99 "Juana Azurduy" — Vicente López

**Asignatura:** Laboratorio de Programación (LPR) — 5° Año

**Autor:** Mansilla Muñoz York Elías (Grupo 99\)

**Versión:** v1.0.0 | **Fecha:** 25 de septiembre de 2026

## **📄 CONTROL DE VERSIONES**

| Versión | Fecha | Descripción |
| :---- | :---- | :---- |
| **v1.0.0** | 25/09/2026 | Emisión de la guía inicial del usuario para la versión ejecutable en consola. |

## **💻 1\. REQUISITOS MÍNIMOS DEL SISTEMA**

* **Sistema Operativo:** Windows 10 o Windows 11 (64-bit).  
* **Consola de Comandos:** Windows PowerShell o Símbolo del sistema (CMD).  
* **Memoria RAM:** $512MB$ libres.  
* **Almacenamiento:** $10MB$ de espacio disponible en disco.

## **🚀 2\. GUÍA PASO A PASO DE EJECUCIÓN**

### **Paso 1: Apertura de la Terminal**

Abra la carpeta del proyecto repasogeneral, presione la tecla Shift y haga clic derecho en un área vacía. Seleccione **"Abrir la ventana de PowerShell aquí"**.

### **Paso 2: Invocación del Ejecutable**

En la línea de comandos, ingrese la ruta del binario compilado y presione Enter:

.\\src\\repasogeneral.exe

### **Paso 3: Interpretación de los Resultados**

Una vez ejecutado, el programa desplegará automáticamente la secuencia de retos en pantalla.

*Figura 1*

*Salida en consola de los retos en C++*  
\=====================================================  
  TALLER INTEGRADOR REPASO \- ESTUDIANTE: Juana Azurduy  
\=====================================================

\=== RETO 1: SUMA RECURSIVA \===

Suma acumulada de 1 hasta 5: 15

\=== RETO 2: BÚSQUEDA EN MEMORIA CONTIGUA \===

\[SISTEMA\] Valor 18 hallado en el indice \[6\]

          Direccion RAM Hexadecimal: 0x61fe08

\=== RETO 3: INTERCAMBIO DE CELDAS \===

Valores previos  \-\> X: 100 (RAM: 0x61fe1c) | Y: 500 (RAM: 0x61fe18)

Valores actuales \-\> X: 500 (RAM: 0x61fe1c) | Y: 100 (RAM: 0x61fe18)  
\=====================================================

*Nota.* La captura ilustra la resolución secuencial de los tres retos mostrando las direcciones físicas hexadecimales reservadas en la memoria RAM del equipo.

## **❓ 3\. RESOLUCIÓN DE PROBLEMAS FRECUENTES (FAQ)**

### **1\. La ventana de la consola se abre y se cierra instantáneamente.**

* **Causa:** El programa finalizó su ejecución y Windows cerró la ventana emergente.  
* **Solución:** Ejecute siempre el archivo desde una ventana de PowerShell previamente abierta, en lugar de hacer doble clic sobre repaso.exe.

### **2\. Windows Defender o SmartScreen bloquea la ejecución.**

* **Causa:** El archivo ejecutable ha sido compilado localmente y no posee firma digital.  
* **Solución:** En la ventana de advertencia de SmartScreen, haga clic en *"Más información"* y luego seleccione el botón *"Ejecutar de todas formas"*.

## **📚 4\. REFERENCIAS**

* Microsoft Corporation. (2026). *Documentación de Windows PowerShell*. [https://learn.microsoft.com/powershell/](https://learn.microsoft.com/powershell/) 

