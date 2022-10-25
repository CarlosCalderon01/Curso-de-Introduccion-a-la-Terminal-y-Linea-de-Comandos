//--------------------------------------------------//--------------------------------------------------//
//--------------------------------------------------//--------------------------------------------------//
//--------------------------------------------------//--------------------------------------------------//

// Resumen - Comandos De Clase

//     1-) Tabla de comandos - Aprendiendo a caminar en la terminal [Clase 3-4]

//             Comando	    Función

//             mkdir	    Make Directory Crea carpetas
//             touch	    Crea archivos
//             cp	        Copy Copia archivos
//             mv	        Move mueve archivos
//             rm	        Remove elimina archivos o carpetas

//         El comando rm tiene varias opciones. Las más usadas son:

//             -i (de interactive) te pregunta si estás seguro de eliminar el archivo
//             -r (de recursive) elimina todo lo que esté dentro de una carpeta
//             -f (de force) fuerza a borrar todo.

//     2-) Tabla de comandos - Explorando el contenido de nuestros archivos [Clase 5]

//             Comando	    Función

//             head	    Muestra las primeras 10 líneas
//             tail	    Muestra las últimas 10 líneas
//             less	    Muestra todo el contenido dentro de la consola
//             xdg-open	Abre un programa para inspeccionar ese archivo
//             nautilus	Abre en la interfaz de ventanas la carpeta que selecciones

//     3-) Tabla de comandos - Wildcars [Clase 7]

//             Wildcard	Función
            
//                 *	    Busca todo
//                 ?	    Busca por cantidad de caracteres
//                 []	    Busca por caracteres específicos

//     4-) Tabla de comandos - Redirecciones [Clase 8]

//             Operador	    Función

//             >	        Redirecciona la salida. Por defecto redirecciona el Standar Output
//             >>	        Concatena la salida con lo que ya tenga el archivo a donde se está redirigiendo la salida
//             2>	        Redirecciona el file descriptor 2 (En este caso Standar Error)
//             2>&1	        Redirecciona el file descriptor 2 y 1

//     5-) Tabla de comandos - Pipe Operator [Clase 9]

//             Operador	    Función

//             >	        Redirecciona la salida. Por defecto redirecciona el Standar Output
//             >>	        Concatena la salida con lo que ya tenga el archivo a donde se está redirigiendo la salida
//             2>	        Redirecciona el file descriptor 2 (En este caso Standar Error)
//             2>&1	        Redirecciona el file descriptor 2 y 1

    
//     6-) Tabla de comandos - Encadenando comandos: operadores de control [Clase 10]

//             Operador	Función

//             ;	        Ejecuta de forma síncrona los comandos específicados
//             &	        Ejecuta de forma asíncrona los comandos específicados
//             &&	        Ejecuta el comando si el anterior se ejecutó correctamente
//             ||	        Ejecuta el comando si el anterior o la combinación de los anteriores resultaron en verdadero

//             Comando	    Función

//             echo	    Imprime el mensaje que le indiques
//             cal	        De calendar imprime un calendario con la fecha actual
//             date	    Imprime la fecha actual

//     7-) Tabla de comandos - Cómo se manejan los permisos [Clase 11]

//             Atributo	Tipo de archivo
            
//             -	        Es un archivo normal, como un documento de texto, una foto, un video, etc.
//             d	        Por directory es un directorio
//             l	        Es un enlace simbólico. Es algo que veremos en próximas clases
//             b	        Bloque especial, son archivos que manejan información para el sistema, como la información de un disco duro

//         Tipos de permisos:

//             Símbolo	    Significado	    Permiso

//             r	        readable	    Significa que puede leer su contenido
//             w	        writable	    El usuario puede editar el contenido del archivo, también el nombre y los permisos
//             x	        executable	    El usuario puede ejecutarlo en caso de que sea un programa

//         Modo octal:

//             Octal       Binario     Permisos

//             0           000         ---
//             1           001         --x
//             2           010         -w-
//             3           011         -wx
//             4           100         r--
//             5           101         r-x
//             6           110         rw-
//             7           111         rwx

//             r	w	x		r	-	x		r	-	-
//             1	1	1		1	0	1		1	0	0
//                 7				5				1	

//     8-) Tabla de comandos - Modificando permisos en la terminal [Clase 12]

//         Cómo cambiar los permisos de un archivo (chmod).

//                 owner	        group	others

//                 u (de user)	    g	    o

//                 Operador	Función

//                 +	        Añade un permiso
//                 -	        Quita un permiso
//                 =	        Asigna un permiso

//         Tabla de comandos whoami, su y chmod.

//             Comando	    Función
//             whoami	    Muesta el usuario con el que se está trabajando
//             su	        Switch User Cambia al usuario al que le especifiques
//             chmod	    Cambia los permisos de un archivo
//             chown	    Change Owner Cambia el propietario de un archivo

//             Example:

//             chmod u-r mitexto.txt --> quitar el permiso de read a el usuario user en el archivo.txt
//             chmod u-x,go=w mitexto.txt --> quitar al usuario el permiso ejecutar Y al usuario grupo y otros les permite solo leer el archivo.txt
//             chmod 755
//             passwd --> Cahnge password with comand

//     9-) Tabla de comandos - Comandos de búsqueda [Clase 14]

//             Opción	    Función

//             -size	    Busca por el peso
//             -mindepth	Asigna una profundidad mínima
//             -maxdepth	Asigna una profundidad máxima
//             -type	    Busca por el tipo de archivo
//             -name	    Busca por el nombre del archivo

//     10-) Tabla de comandos - Usando el comando grep [Clase 15]

//             ¿Qué significa grep?
//             “Grep” significa Global Regular Expression Print.
//             El comando grep utiliza regex (Regular Expression) para realizar su búsqueda.

//             Example:

//                 grep towers movies.csv
//                 grep -i movies.csv --> ignora las mayusculas y minusculas.
//                 grep -c the movies.csv 
//                 grep -ci the movies.csv
//                 grep -v towers movie.csv --> peliculas sin towers
//                 wc movies.csv --> 
//                 wc -l movies.csv -->
//                 wc -w movies.csv -->
//                 wc -c movies.csv -->
            
//             Tabla de funciones de grep:

//                 Opción	Función

//                 -m	    Limita las líneas de la búsqueda
//                 -c	    Cuenta las ocurrencias
//                 -v	    Excluye las ocurrencias
//                 -i	    Ignora él case sensitive


//     11-) Tabla de comandos - Utilidades de red [Clase 16]

//             Tabla de comandos de utilidades de red:
        
//             Comando	    Función

//             ifconfig	Muestra la configuración de los dispositivos de red
//             ping	    Envía paquetes a una dirección para comprobar su conectividad
//             curl	    Muestra por consola el archivo devuelto por la dirección
//             wget	    Guarda el archivo devuelto por la dirección

//     12-) Tabla de comandos - Comprimiendo archivos tar y zip [Clase 17]

//         Opciones del comando tar:

//             Recuerda siempre colocar la opción -f.

//                 Opción	Función

//                 c	    Comprimir
//                 x	    Descomprimir
//                 z	    Especifica que lo que se va a comprimir o descomprimir tiene extensión “.tar.gz” o “.tgz”
//                 v	    Muestra lo que está comprimiendo o descomprimiendo

//         Comando zip:

//             Recuerda que si lo que vas a comprimir es una carpeta tienes que usar la opción -r.

//                     Comando	    Función

//                     zip	        Comprimir
//                     unzip	    Decomprimir

//     13-) Tabla de comandos - Manejo de procesos [Clase 18]

//         Tabla de comandos para manejo de procesos en la terminal:

//                 Example:

//                         kill [idproceso] -->
//                         top --> si presiono H detro de top me muestra un menu de ayuda
//                         buscar y recomeindan comando h top 100% mejor

//                         Comando	Función

//                         ps	    Muestra una tabla con los procesos que se están ejecutando
//                         top	    Muestra una interfaz con los procesos que se están ejecutando más los recursos que consumen información adicional
//                         kill	Mata el proceso que le indiques

//     14-) Tabla de comandos - [Clase 19]

//                 editor de texto bin es el mas popular y el que usan en varias clases de platzi, incluido este Curso

//                 COmandos:

//                 vim
//                 Tabla de comandos para uso de Vim:

//                         Comando	    Función

//                         vim	        Abre el archivo especificado. Si no existe lo crea
//                         :q	        Cierra el editor
//                         :w	        Guarda los cambios
//                         /búsqueda]	Busca dentro del texto
//                         dd	        En el modo normal, selecciona una línea y la borra
                
//                 Example:
                
//                 vim index.html


//--------------------------------------------------//--------------------------------------------------//
//--------------------------------------------------//--------------------------------------------------//
//--------------------------------------------------//--------------------------------------------------//