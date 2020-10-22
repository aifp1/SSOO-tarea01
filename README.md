#Tarea 01 Sistemas Operativos

##Datos del autor:
- Nombre: Andrés Fuentes Pinto
- Correo electronico: andres.fuentesp@alumnos.uv.cl

##Explicacion del codigo

**Contador:**
- Variable i de tipo integer inicializada en 0 para ser usada como contador.

**Funcion salidaSigusr1:**
- Esta funcion contiene la variable tiempo la cual es la encargada de entregar el dia, mes, numero del dia, hora, minutos, segundos, y el año correspondiente al computador.
- Contiene un printf encargado de avisar que la señal ya etsa recibida.
- Esta funcion es llamada cuando recibe una señal SIGUSR1.

**Funcion salidaCodigo:**
- En esta funcion contiene el incremento de la variable i cada vez que entra a la funcion.
- Contiene una condicional if encargada de que al momento de que la variable i sea igual a 2, salir del programa por medio de la funcion exit(), la cual se encarga de salir al recibir una señal. 
- Esta funcion es llamada cuando recibe la señal SIGINT(recibe señales Control + C, o tambien DELETE) .
- La variable contador i tiene que ser igual a 2 ya que significa que se pulso dos veces Control + C .

**Funcion main**
- Esta funcion es el punto de inicio del programa.
- Contiene un ciclo while True (1). Dentro de este ciclo esta contenido un printf que es el ncargado de mostrarnos el id del proceso gracias a la funcion getpid() el cual estamos ejecutando. Tambien el ciclo no se esta ejecutando constantemente sino que tiene un tiempo de espera de 3 segundos gracias a la funcion sleep() .

**El codigo fuente (hora.c) se encuentra dentro de la carpeta src. **
