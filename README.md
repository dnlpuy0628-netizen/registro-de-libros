# registro-de-libros
progama usando opp para registrar libros

# Proyecto: Registro de Libros (POO)

## Autor
**DANIEL EDUARDO DUPUY**
## Matrícula 
**2024-3865**

---

## Descripción
Este proyecto consiste en un programa desarrollado en C++ aplicando los principios de la Programación Orientada a Objetos (POO). El sistema permite registrar la información de 5 libros mediante el uso de una clase encapsulada, almacenando los datos en un vector dinámico y mostrando finalmente el listado completo con los detalles de cada libro.

---

## Funciones
- Solicita el título del libro.
- Solicita el autor del libro.
- Solicita el año de publicación.
- Solicita la edición del libro.
- Solicita la cantidad de páginas.
- Almacena y procesa cada objeto instanciado dentro de un vector dinámico.
- Muestra el listado formateado en pantalla con la información de todos los libros registrados.

---

## Datos de entrada
- **Título del libro:** Cadena de texto (`string`).
- **Autor:** Cadena de texto (`string`).
- **Año de publicación:** Número entero (`int`).
- **Edición:** Cadena de texto (`string`).
- **Cantidad de páginas:** Número entero (`int`).

---

## Datos que procesa
- **Lectura y gestión del búfer:** Captura las entradas de texto y números gestionando los saltos de línea con `cin.ignore()`.
- **Instanciación de objetos:** Construye objetos dinámicos de la clase `libro` con los datos ingresados.
- **Almacenamiento:** Agrega los objetos al contenedor `vector<libro>` mediante la función `.push_back()`.
- **Estructuras de control:** Implementa bucles `for` para iterar el registro y la muestra de los 5 libros.

---

## Datos de salida
Imprime en pantalla la información completa de cada libro mediante el método `.presentacion()`:
- Título
- Autor
- Año de publicación
- Edición
- Cantidad de páginas

---

## Importancia de la Encapsulación en la POO
La encapsulación permite restringir el acceso directo a los atributos de la clase que se quieran mantener seguros, usando la palabra clave private, es importante para proteger los datos de modificaciones que no estén autorizadas

---

## Tecnologías utilizadas
- **Lenguaje:** C++
- **Entorno de desarrollo:** Visual Studio Code
- **Control de versiones:** Git / GitHub

---

## Cómo compilar y ejecutar
1. Compilar el archivo de código fuente:
   ```bash
   g++ opp.cpp -o opp
   
