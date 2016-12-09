# Proyecto_Teoria
[TEO] Trabajo 1: AFnD a AFD
#Manual de usuario
**_Teoría de la Computación_
_Universidad Andres Bello_**

---
##Creacion de AFD desde AFND

_Autores: Jose Tomas Escobar y Sergio Troncoso_


###Introdución al programa###

El programa busca crear un **automata finito determinista** dada la tabla de transiciones de uno no determinista, para ello se debio utilizar el método de **clausura de epsilon** para la conversión. Adémas el programa generá la tabla de transicion de este nuevo automata determinista, la minimización de del automata a través del **método de conjuntos**, la creación de de la **expresión regular** asociada al AFD y la imagen gráfica de este. 

###Aspectos técnicos###
El lenguaje utilizado fue **C++11**, adémas para la creación de la imagen se utilizo la herramienta **Graphviz** que permite la creación de estos a través de archivos _.dot_.

El programa esta modulado y ambientado a objetos, con objetos separados para el AFD y el AFnD.

Para su inicio se pide que exista el archivo **_funcion_transicion.txt_**.

###Uso del programa
Para el uso de este se debe ingresar por consola:


`make all`

Para luego ejecutar:


`./program`

El programa pedira que ingrese el estado inicial y el estado final. Para luego crear los siguientes archivos:
![alt text](https://sc-cdn.scaleengine.net/i/823128ca3fbb1b0226ff43dcdeaab039.png)

-**AFD.txt:** Que contiene la tabla de transicion del AFD creado.

-**Min.txt:** Que contiene la tabla de transicion del AFD minimizado.

-**AFD.dot:** Necesario para la creación de la imagen.

-**AFD.dot.jpg:** Imagen del automata.

-**ER.txt:** Que contiene la expresión regular del automata

Adémas el programa mostrara los mensajes de exito de cada uno de los procesos

![alt text](https://sc-cdn.scaleengine.net/i/621615942ca72b5525e0f4f2450a4994.png)


