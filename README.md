# 📌 División en complemento a 9

> ⚠️ Estado: ***EN DESARROLLO*** Versión académica

Programa en lenguaje C que realiza divisiones enteras entre dos números muy grandes (hasta 350,000 dígitos), utilizando aritmética en complemento a 9, sin utilizar directamente operadores de división del lenguaje.

---

## 👥 Autores

- [JUAN SEBASTIÁN GUAYAZÁN CLAVIJO](https://github.com/JSGC-ECI) → <juan.guayazan-c@mail.escuelaing.edu.co>  
Organización de los Sistemas de Cómputo (ISIS ODSC-1 y ODSC-101)      
Decanatura Ingeniería de Sistemas → Centro de Estudios de Arquitectura Tecnológica y Seguridad     
Ingeniería de Sistemas    
Escuela Colombiana de Ingeniería Julio Garavito     
2025-i

---

## 🧠 Índice

- [📌 Nombre del Proyecto](#-división-en-complemento-a-9)
- [🚀 Características](#-características)
- [⚙️ Tecnologías](#️-tecnologías)
- [📦 Instalación](#-instalación-y-requisitos)
- [▶️ Uso](#️-uso)
- [🧪 Pruebas](#-pruebas)
- [📁 Estructura del Proyecto](#-estructura-del-proyecto)
- [📌 TODOs / Funcionalidades Futuras](#-todos--funcionalidades-futuras)
- [👥 Autores](#-autores)
- [📄 Licencia](#-licencia)

---

## 🚀 Características

- ✅ Soporta números de hasta 350,000 dígitos
- ✅ Realiza divisiones enteras utilizando operaciones de resta y complemento a 9
- ✅ Compatible con compiladores estándar de C como `gcc`
- ✅ Uso eficiente de memoria para operaciones con enteros grandes representados como arreglos

---

## ⚙️ Tecnologías

- Lenguaje: `C`
- Herramientas: `GCC`, `Makefile` (opcional)
- Dependencias: Ninguna externa (usa solo la biblioteca estándar)

---

## 📦 Instalación y Requisitos

### Clonar el repositorio

```bash
git clone https://github.com/JuanSebastianGuayazanClavijoECI/division-complemento9.git
cd division-complemento9
````

### Requisitos

* Compilador de C (`gcc` o compatible)
* Sistema operativo tipo UNIX o Windows con terminal compatible
* Editor de texto (VSCode, Vim, etc.)

### Instalación

```bash
gcc division.c -o division
```

---

## ▶️ Uso

Ejecuta el programa desde la terminal y proporciona la entrada por consola:

```bash
./division
```


> \[!NOTE]
> La entrada debe contener el número de casos, seguido por pares de líneas: dividendo y divisor.

> \[!WARNING]
> El programa no usa `div` ni `/`. Realiza la división simulando operaciones matemáticas en base al complemento a 9.

---

## 🧪 Pruebas

Puedes probar manualmente con:

### Ejemplo de entrada:

```
3
123
12
123
111
12
8
```

### Ejemplo de salida esperada:

```
10
3
12
3
13
7
```


---

## 📁 Estructura del Proyecto

```bash
📦 division-complemento9
 ┗ 📜 division.c
```

---

## 📌 TODOs / Funcionalidades Futuras

* [ ] Implementar manejo de números negativos
* [ ] Permitir divisiones con decimales
* [ ] Crear interfaz gráfica (opcional)
* [ ] Agregar pruebas automatizadas con `assert`

---

## 📄 Licencia

Este proyecto está licenciado bajo propósitos académicos y educativos. Puedes consultar el archivo [LICENSE](./LICENSE) para más información.

```
