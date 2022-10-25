// NAME OF CURSE: Curso de Introducción a la Terminal y Línea de Comandos
// NAME OF TEACHER: ENRIQUE DEVARS

//--------------------------------------------------//--------------------------------------------------//

//CLASE [1 - 2 / 22] ¿Qué es la terminal?

    // La terminal -->

    //     interfaz grafica que simula una linea de comandos. (es la ventana)

    //     terminal: ventanita que nos muestra el promt, este aloja a la shell

    // La Shell -->

    //     linea de comandos = shell

    //     lina de comandos(shell): un programa que toma comandos y los pasa al sistema operativo para hacer algo.

    // Types of shell:

    //     Bourne shell
    //     Bash shell (Linux)
    //     Z Shell
    //     C Shell
    //     Korn Shell
    //     Fish Shell
    //     powerShell (Windows)

    // Un comando -->

    //     se puede ejecutar desde la terminal, puede recibir parametros y opciones.

//--------------------------------------------------//--------------------------------------------------//

//CLASE [3 - 4 / 22] Aprendiendo a caminar en la terminal

    // Comandos Basicos

    //     ls --> listar archivos de la carpeta actual.
    //     ls -l --> listar archivos de la carpeta actual + info
    //     ls -ls --> lista por tamaño
    //     ls - lr --> lista de reversa

    //     cd --> para moverme entre carpetas
    //     clear || Ctrl + l   --> para limpiar toda la terminal
    //     pwd --> imprime la ubicacion actual
    //     file --> describe el archivo que nombraste
    //     tree -L 2 -- muestra carpeta y sub carpetas
    //     mkdir --> crea carpeta
    //     touch --> crear archicos
    //     cp name1 nam2 --> copia1 y pega2
        
    //     mv name ubicacion --> para mover carpetas
    //     mv name1 name2 --> para renombrar
        
    //     rm --> borrar archivo
    //     rm -i --> borrado interactive
    //     rm -rf --> (BORRADO FORSOZO PELIGROSO)

    // Tabla de comandos

    //     Aquí tienes una tabla que te ayudará a recordar todos estos comandos:

    //         Comando	    Función

    //         mkdir	    Make Directory Crea carpetas
    //         touch	    Crea archivos
    //         cp	        Copy Copia archivos
    //         mv	        Move mueve archivos
    //         rm	        Remove elimina archivos o carpetas

    //     El comando rm tiene varias opciones. Las más usadas son:

    //         -i (de interactive) te pregunta si estás seguro de eliminar el archivo
    //         -r (de recursive) elimina todo lo que esté dentro de una carpeta
    //         -f (de force) fuerza a borrar todo.

//--------------------------------------------------//--------------------------------------------------//

//CLASE [ 5 / 22] Explorando el contenido de nuestros archivos

    // head --> la cabezera de un archivo (10 por defecto)
    // head name -n 15 --> la cabezera de un archivo (15)

    // tail --> ultimas 10
    // tail name -n 20--> ultimas 20

    // less --> comando muy importante

    // less name.archivo --> muestra todo el contenido (solo lectura)
    // note: el "/" dentro del archivo busca palabras
    // Tecla Q o ctrl + Q para salir
    // xdg-open --> abre name.archivo 
    // para matar un proceso en la terminal --> ctrl + c
    // nautilus --> abre una carpeta de forma grafica

    // Tabla de comandos.

    //     Comando	    Función

    //     head	    Muestra las primeras 10 líneas
    //     tail	    Muestra las últimas 10 líneas
    //     less	    Muestra todo el contenido dentro de la consola
    //     xdg-open	Abre un programa para inspeccionar ese archivo
    //     nautilus	Abre en la interfaz de ventanas la carpeta que selecciones

//--------------------------------------------------//--------------------------------------------------//

//CLASE [ 6 / 22] ¿Qué es un comando?

    // Un comando es:

    // Un comando es un mensaje enviado al ordenador que provoca una respuesta en este sistema y se comporta como una orden,
    // pues informa al dispositivo informático que debe ejecutar una acción según la indicación que pueda enviarse.

    //     1-) un programa ejecutable
    //     2-) un comando de utilidad de shell
    //     3-) una funcion de shell
    //     4-) un alias


    //     type namecommand --> explica lo que hace el comando
    //     alias l="ls -lh" --> crear mis propios comandos con alias (de forma temporal)
    //     help --> pedir ayuda sobre tus comandos
    //     ls --help --> describe como usar el comando creo
    //     man cd -- > manual de usuario del command
    //     info --> los mismo que man pero mas resumido
    //     whatis cd --> mismo que info pero aun mas resumido

//--------------------------------------------------//--------------------------------------------------//

//CLASE [ 7 / 22] Wildcars

    // Las wildcards o comodines son una serie de caracteres especiales
    // que nos permiten encontrar patrones o realizar búsquedas más avanzadas.
    // Es aplicable para archivos y directorios.

    // Las wildcards te sirven para realizar seccionamiento de archivos o directorios,
    // ademas de ls los wildcards tambien pueden usarse con cualquier comando que realice
    // la manipulación de archivos como mv, cp y rm.

    // Tabla de wildcards:

    // Wildcard	    Función
    //     *	    Busca todo
    //     ?	    Busca por cantidad de caracteres
    //     []	    Busca por caracteres específicos

    // Examples:

    // ls +.txt --> lsta todos los txt
    // ls datos* --> lista todos los archivos con el nombre datos mas cualquier caracteres
    // ls datos? --> datos + dato sin conocer
    // ls datos??? --> datos + 3caracteres sin conocer
    // ls -d [[:upper:]]* --> busca con archivos en mayus 
    // ls -d [[:lower:]]+ --> mismo pero minuscula
    //         [:alnum:]
    //         [:digit:]
    // ls [ad]*

//--------------------------------------------------//--------------------------------------------------//

//CLASE [ 8 / 22] Redirecciones: Comó funciona la shell

    // Qué son las entradas y salidas de la terminal
    // En la consola nosotros generamos una entrada cuando escribimos y una salida casi siempre que ejecutamos un comando.
    // A las entradas típicamente se les suele llamar Standard Input y a las salidas Standard Output, además se les suele abreviar como stdin y stdout respectivamente.

    //                                             stdout --> standar output 1
    //         stdin = --> standar input 0                                         Computador
    //                                             stderr --> standar error 2

    // 1-) stdout --> standar output 1

    //     El "stdout" sirve para redireccionar archivos o carpetas a un archivo.

    //     Example:
    //     ls Pictures > mis archivos.txt        
    //     ls Pictures >> mis archivos.txt --> para concatenar archivos

    // 2-) stderr --> standar error 2

    //     El "stderr" sirve para redireccionar el error publicado a un archivos o carpetas y que no se pierda el error.

    //     Note: tiene que especificar el 2 para que se guarde el error antes del >

    //     Example:
    //     ls aafasdf 2> error.txt

    //     ls Pictures/ > output.txt 2>&1 ---> este comando sirve par
    //     2>&1 ---> este comando sirve para redireccionar un output, y si sale error se registra el error.

    // 3-) stdin = --> standar input 0

    //     sirve para pasar datos de entrada aun archivo.
    //     Example: pasarle el valor 100 al conversor de monedas.

    // 4-) Tabla de operadores:

    //     Operador	    Función

    //     >	        Redirecciona la salida. Por defecto redirecciona el Standar Output
    //     >>	        Concatena la salida con lo que ya tenga el archivo a donde se está redirigiendo la salida
    //     2>	        Redirecciona el file descriptor 2 (En este caso Standar Error)
    //     2>&1	        Redirecciona el file descriptor 2 y 1

//--------------------------------------------------//--------------------------------------------------//

//CLASE [ 9 / 22] pipe operator

    // Tabla de comandos pipe operator:

    // Pipe operator es un operador que permite tomar la salida de un comando y pasarla como entrada de otro comando.
    // Aprendamos más comandos que te van a ayudar.

    // Comando	        Función
    
    // sort	            Organiza allfabéticamente una salida
    // cat	            Concatena dos entradas
    // tee	            Crea un archivo en base a una entrada
    // Contribución     Creada con los aportes de: Miguel Gonzalez.

    // Example:
    // ls -lh | less
    // ls -lh | tee output.txt | less
    // ls -lh Pictures | short | tees output.txt | less
    
    // sudo apt install cowsay
    // lolcat --> cambia texto de color
    // cowsay --> vaca diciendo hola
    // echo "Hola PLatzi" | lolcat
    // cowsay "Hola amigos" | lolcat
    // cowsay "Hola amigos" | lolcat | tee vaca.txt

//--------------------------------------------------//--------------------------------------------------//

//CLASE [ 10 / 22] Encadenando comandos: operadores de control

    // Los operadores de control son símbolos reservados por la terminal que nos permiten encadenar comandos.

    // Tabla de operadores:

    // Operador	    Función

    //     ;	    Ejecuta de forma síncrona los comandos específicados
    //     &	    Ejecuta de forma asíncrona los comandos específicados
    //     &&	    Ejecuta el comando si el anterior se ejecutó correctamente
    //     ||	    Ejecuta el comando si el anterior o la combinación de los anteriores resultaron en verdadero

    // Comando	    Función

    // echo	        Imprime el mensaje que le indiques
    // cal	        De calendar imprime un calendario con la fecha actual
    // date	        Imprime la fecha actual

    // Examples.
    // ls & date & cal
    // mkdir test && cd test
    // cd ssgasfadgad || touch archivos.txt || echo "archivos creado"

//--------------------------------------------------//--------------------------------------------------//

//CLASE [ 11 / 22] Cómo se manejan los permisos

    Los permisos son las capacidades que tiene cada usuario dentro del sistema operativo,
    no todos los usuar  ios pueden hacer todas las acciones sobre ciertos archivos y carpetas.

        Tipos de archivos: El primer caracter puede ser uno de estos 3:

            Atributo	Tipo de archivo
            
            -	        Es un archivo normal, como un documento de texto, una foto, un video, etc.
            d	        Por directory es un directorio
            l	        Es un enlace simbólico. Es algo que veremos en próximas clases
            b	        Bloque especial, son archivos que manejan información para el sistema, como la información de un disco duro

    Permisos de usuario

        Los siguientes caracteres se leen de 3 en 3, por cada uno de los tipos de usuario.

    Owner

        El dueño del archivo, si no se ha cambiado, es quien lo creo y tiene mayor jerarquía sobre los otros 3.
        Le corresponden los primeros 3 caracteres de los permisos.

    Group

        Se puede crear grupos de usuarios para darle a todos o varios los mismos permisos.
        A estos usuarios le corresponden el cuarto, quinto y sexto caracter de los permisos
        de usuarios y tienen mayor jerarquía que el último.

    World

        También llamado “otros”, es cualquier otro usuario que no pertenezca a un grupo de usuario
        y tampoco sea el dueño,este tiene la menor jerarquía.

    Tipos de permisos:

        Símbolo	    Significado	    Permiso

        r	        readable	    Significa que puede leer su contenido
        w	        writable	    El usuario puede editar el contenido del archivo, también el nombre y los permisos
        x	        executable	    El usuario puede ejecutarlo en caso de que sea un programa

//-----------------------------------------------------------------------------------------------------------------------------------
        
        Recuerda que el primer caracter es el tipo y los siguientes se cuentan de 3 en 3 representando cada usuario.
    
                d	                    rwx	                        r-x	                                r-x

        Esto es un directorio	        owner	                    group	                            world

                                El dueño puede leer,
                                escribir y ejecutar	    El grupo puede leer y ejecutar	    Los demás pueden leer y ejecutar

//-----------------------------------------------------------------------------------------------------------------------------------


                                -	                                        rw-	                            r–	                        r–

        Esto es un archivo normal, como una imágen o un video	            owner	                        group	                    world

                                                                El dueño puede leer y escribir	El grupo sólo puede leer	El resto sólo puede leer

1-) Representando permisos de forma octal.

r	w	x
1	0	1

r	w	x
1	1	1
    7	 

r	-	x
1	0	1
    5	 

r	w	x		r	-	x		r	-	-
1	1	1		1	0	1		1	0	0
    7				5				1	

Modo octal

Octal       Binario     Permisos

0           000         ---
1           001         --x
2           010         -w-
3           011         -wx
4           100         r--
5           101         r-x
6           110         rw-
7           111         rwx

//--------------------------------------------------//--------------------------------------------------//

//CLASE [ 12 / 22] Modificando permisos en la terminal


    1-) Cómo cambiar los permisos de un archivo (chmod).

            owner	        group	others

            u (de user)	    g	    o

            Operador	Función

            +	        Añade un permiso
            -	        Quita un permiso
            =	        Asigna un permiso

    2-) Tabla de comandos whoami, su y chmod.

        Comando	    Función
        whoami	    Muesta el usuario con el que se está trabajando
        su	        Switch User Cambia al usuario al que le especifiques
        chmod	    Cambia los permisos de un archivo
        chown	    Change Owner Cambia el propietario de un archivo

    Example:
    chmod u-r mitexto.txt --> quitar el permiso de read a el usuario user en el archivo.txt
    chmod u-x,go=w mitexto.txt --> quitar al usuario el permiso ejecutar Y al usuario grupo y otros les permite solo leer el archivo.txt
    chmod 755
    passwd --> Change password with comand
//--------------------------------------------------//--------------------------------------------------//

//CLASE [ 13 / 22] Cómo configurar variables de entorno

    Las variables de entorno son útiles cuando necesitamos que cierta información prevalezca para poder trabajar más rápido o necesitamos guardar información para no tener que recordarla constantemente.

        Variables de entorno en Linux:

            Variable	    Contenido

            HOME	        Indica el home del usuario
            PATH	        Indica las direcciones de donde están los binarios que usa el sistema
            BASH_VERSION	Indica la versión del bash que estás utilizando
            SHELL	        Dirección de la shell que estás utilizando

    ¿Cómo crear tus propias variables de entorno?
    
        En el home de tu usuario debe haber un archivo oculto llamado “.bashrc”,
        lo puedes ver ejecutando el comando ls -la la opción -a es de all.

    Example:

    printenv --> imprime todas las variables de entorno
    echo $HOME
    cd $HOME
    echo $PATH

    DOnde modificar mis varaibles de entorno

    code .bashrc --> el que tengo que modificar es este para linux.
    

//--------------------------------------------------//--------------------------------------------------//

//CLASE [ 14 / 22] Comandos de búsqueda

    Example:

    which code, which obs --> encuentra la ubicacion del programa

    find ./ -name file ---> busca todos los archivos que se llaman file
    find ./ -name *.txt --> bsuca todos los txt del computadora
    find ./ -type d -name Documents -->
    find ./ -type f -name *.log -->
    find ./ -size 20m --> encuentra por tamaño
    
    Tabla de comandos de búsqueda:

    Opción	    Función

    -size	    Busca por el peso
    -mindepth	Asigna una profundidad mínima
    -maxdepth	Asigna una profundidad máxima
    -type	    Busca por el tipo de archivo
    -name	    Busca por el nombre del archivo



//--------------------------------------------------//--------------------------------------------------//

//CLASE [ 15 / 22] TITULO


    Usando el comando grep [Clase 15]

        ¿Qué significa grep?
        “Grep” significa Global Regular Expression Print.
        El comando grep utiliza regex (Regular Expression) para realizar su búsqueda.

        Tabla de funciones de grep:

            Opción	Función

            -m	    Limita las líneas de la búsqueda
            -c	    Cuenta las ocurrencias
            -v	    Excluye las ocurrencias
            -i	    Ignora él case sensitive

        Example:

            grep towers movies.csv
            grep -i movies.csv --> ignora las mayusculas y minusculas.
            grep -c the movies.csv 
            grep -ci the movies.csv
            grep -v towers movie.csv --> peliculas sin towers
            wc movies.csv --> 
            wc -l movies.csv -->
            wc -w movies.csv -->
            wc -c movies.csv -->

//--------------------------------------------------//--------------------------------------------------//

//CLASE [ 16 / 22] Utilidades de red

    Example:

        ifconfig --> muestra nuestra red e ip
        ping www.google.com --> prueba el ping entre el pc y la pagina
        curl www.google.com --> trae el html de la pagina
        wget www.google.com --> trae y descarga la pagina directamente en nuestra computadora.
        traceroute www.google.com --> imprime todas las computadoras por las que yo transcurro para llegar al google
        netstat -i --> muestra todos los dispositivos de red.

        Tabla de comandos de utilidades de red:
        
        Comando	    Función

        ifconfig	Muestra la configuración de los dispositivos de red
        ping	    Envía paquetes a una dirección para comprobar su conectividad
        curl	    Muestra por consola el archivo devuelto por la dirección
        wget	    Guarda el archivo devuelto por la dirección

//--------------------------------------------------//--------------------------------------------------//

    //CLASE [17 / 22] - Comprimiendo archivos tar y zip

        Example:

            tar -cvf [namefile] --> comprimir un archivo
            tar -cvzf [namefile] --> comprimir un archivo
            rm -r ToCompress
            tar -xzvf [archivoyacomprimido.tar] --> para descomprimir archivos .zip
            tar -xvf [archivoyacomprimido.tar] --> para descomprimir archivos .tar
            zip -r [namearchivo.zip] [nombredelarchivocomprimido] --> paa comprimir con .zip
            unzip [nombrearchivo.zip]

        ##----------## Tabla de comandos tar y zip ##----------##

        Opciones del comando tar:
        Recuerda siempre colocar la opción -f.

            Opción	Función

            c	    Comprimir
            x	    Descomprimir
            z	    Especifica que lo que se va a comprimir o descomprimir tiene extensión “.tar.gz” o “.tgz”
            v	    Muestra lo que está comprimiendo o descomprimiendo

        Comando zip:

        Recuerda que si lo que vas a comprimir es una carpeta tienes que usar la opción -r.

                Comando	    Función

                zip	        Comprimir
                unzip	    Decomprimir

//--------------------------------------------------//--------------------------------------------------//

//CLASE [ 18 / 22] Manejo de procesos

    Tabla de comandos para manejo de procesos en la terminal:

    Example:

        kill [idproceso] -->
        top --> si presiono H detro de top me muestra un menu de ayuda
        buscar y recomeindan comando h top 100% mejor

        Comando	Función

        ps	    Muestra una tabla con los procesos que se están ejecutando
        top	    Muestra una interfaz con los procesos que se están ejecutando más los recursos que consumen información adicional
        kill	Mata el proceso que le indiques


//--------------------------------------------------//--------------------------------------------------//

//CLASE [ 20 / 22] Editores de texto en la terminal

editor de texto bin es el mas popular y el que usan en varias clases de platzi, incluido este Curso

COmandos:

    vim
    Tabla de comandos para uso de Vim:

    Comando	    Función

    vim	        Abre el archivo especificado. Si no existe lo crea
    :q	        Cierra el editor
    :w	        Guarda los cambios
    /búsqueda]	Busca dentro del texto
    dd	        En el modo normal, selecciona una línea y la borra
    
    Example:
    
    vim index.html


//--------------------------------------------------//--------------------------------------------------//

//CLASE [ 21 / 22] Personalizar la terminal de comandos

    Cómo personalizar la terminal de comandos
    Para esto, podemos usar un emulador llamado Tilix. En Tilix podemos tener varias terminales activas.

    1. Instala Tilix
        Tilix es un emulador de terminal. Para instalarlo:

            $ sudo aptinstall tilix

    2. Instala ZSH
        Vamos a usar la Shell ZSH. Para cambiarla:

            $ sudo aptinstall zsh

        Comando para dejar por DEFECTO la shell de bash o zsh:

            $ chsh -s $(which bash)

            $ chsh -s $(which zsh)

        (después de cambiar a zsh apretar la opción 0, para crear un archivo .zshrc en blanco)

        Para cambiar entre bash y zsh en el momento:

            $ exec bash

            $ exec zsh

    3. Personaliza funcionalidades y colores
        Ahora, puedes ponerle funcionalidades y colores con OH-MY-ZSH

        $ sh-c "$(wget https://raw.github.com/ohmyzsh/ohmyzsh/master/tools/install.sh -O -)"

    4. Usa Power Level
        Vamos a instalarle un tema (powerLevel10K):

            $ git clone --depth=1 https://github.com/romkatv/powerlevel10k.git
            ${ZSH_CUSTOM:-$HOME/.oh-my-zsh/custom}/themes/powerlevel10k

        después vamos a entrar al archivo .zshrc:

            $ vim ~/.zshrc

        buscamos y cambiamos la parte que dice ZSH_THEME por esto:

            $ ZSH_THEME="powerlevel10k/powerlevel10k"

        Guardamos y salimos.

        Después instalamos estas 4 fuentes de texto 1 2 3 4

        Cuando salgamos y volvamos a entrar a la terminal nos va a salir el wizard de powerlevel10k para configurar la terminal como quieras, simplemente sigue los pasos.

        Para volver a configurar el tema Powerlevel10k desde el principio en caso de que quieras cambiar algo:

            $ p10k configure
        Aprende más sobre: ¿Qué es un comando?

        Contribución creada con los aportes de: Javier Nicolás Nieto.



//--------------------------------------------------//--------------------------------------------------//
//--------------------------------------------------//--------------------------------------------------//
//--------------------------------------------------//--------------------------------------------------//



