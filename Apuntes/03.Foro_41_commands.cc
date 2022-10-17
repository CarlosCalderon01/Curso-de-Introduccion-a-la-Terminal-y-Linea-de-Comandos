//--------------------------------------------------/FORO/--------------------------------------------------//
//--------------------------------------------------/FORO/--------------------------------------------------//
//--------------------------------------------------/FORO/--------------------------------------------------//

                            TITULO: 41 comandos de la terminal que debes conocer

    1-) Comandos para mostrar archivos o carpetas:

            Son los primeros 8 comandos que debes aprender.
            Te permiten ver todos los archivos y carpetas existentes en tu computadora.

                Comando	        Descripción

                pwd	            Imprime la ruta en la que te encuentras
                cd [carpeta]	Te lleva la carpeta que le indiques
                cd …	        Te lleva a la carpeta anterior de la que estás
                ls	            Lista los archivos y carpetas
                ls -a	        Lista los archivos incluyendo los ocultos
                ls -S	        Lista los archivos por tamaño, de mayor a menor
                ls -lh	        Lista los archivos y carpetas con info detallada y legible para humanos
                code .	Abre la carpeta donde te encuentras en VSCode

    2-) Comandos para manipular archivos/carpetas

            ¿Quieres crear carpetas, moverlas de lugar o incluso comprimir archivos desde la misma terminal?
            Estos son 11 comandos más que debes aprender.

                Comando	                            Descripción

                mkdir [carpeta]	                    Crea una carpeta con el nombre que le des
                touch [carpeta]	                    Crea un archivo con el nombre y la extensión que le des
                file [carpeta]	                    Muestra las características de un archivo
                cp [archivo] [destino]	            Copia un archivo hacia un nuevo destino
                cp -r [carpeta] [destino]	        Copia una carpeta hacia un nuevo destino
                mv [archivo/carpeta] [destino]	    Mueve una carpeta o archivo hacia un nuevo destino
                rm [archivo]	                    Elimina un archivo
                rm -r [carpeta]	                    Elimina una carpeta y su contenido
                rm -ri [carpeta]	                Elimina una carpeta y su contenido de forma interactiva
                tar -czvf [nombre].tar.gz [carpeta]	Comprime una carpeta
                tar -xzvf [nombre].tar.gz	        Descomprime la carpeta

    3-) Comandos para archivos de texto plano.
        
            Desde la misma terminal puedes ver las líneas que tienen los archivos de texto plano.
            Aquí tienes 7 comandos que te servirán para esta acción.
            Imagínate ver el código que estás escribiendo sin tener que abrir VSCode.

                Comando	                Descripción
                
                head [archivo]	        Muestra las primeras 10 líneas de un archivo de texto
                head -n 20 [archivo]	Muestra las primeras 20 líneas
                tail [archivo]	        Muestra las últimas 10 líneas
                tail -n 20 [archivo]	Muestra las últimas 20 líneas
                less [archivo]	        Explora el contenido del archivo (y para salirte de este modo usas la Q)
                code [archivo]	        Abre un archivo de texto en VSCode
                wc [file]	            Te muestra cuántas líneas, palabras y bits tiene un archivo

    4-) Comandos para buscar archivos/carpetas
        
            ¿Se te perdió el archivo CodigoEmpresaFinalFinalEsteSiEs.js y no sabes cómo encontrarlo?
            ¿O quieres que la terminal te muestre una lista específica de archivos? Si es así, échales un ojo a estos 5 comandos.

                Comando	                        Descripción

                find [carpeta] -name [archivo]	Busca un archivo/carpeta en una ruta específica
                find ./ -name [archivo]	        Busca un archivo/carpeta en la ruta donde te encuentras
                ls *[.txt]	                    Lista los archivos que terminen con esa extensión
                ls [palabra]*	                Lista los archivos que empiecen con esa palabra
                grep -i [palabra] [file]	    Busca en ese archivo la palabra que le especifiques

    5-) Comandos para red e internet

            A través de estos 4 comandos podrás conocer el estado de tu red de internet o simplemente
            hacer un ping para identificar el estado de una página web o servidor.

                Comando	            Descripción

                ifconfig	        Muestra la información de tu red
                ping [ip_dominio]	Consulta la disponibilidad de esa IP en tu red o internet
                wget [id_dominio]	Descarga el archivo o recurso de esa IP o dominio
                netstat -i	        Muestra las interfaces de red y su estado

    6-) Explorador de comandos

            Son 4 comandos que te dejarán ver el manual de instrucciones para cada uno de los comandos que te he mostrado.

                Comando	            Descripción

                man [comando]	    Muestra el manual del comando
                help [comando]	    Muestra ayuda para el comando (solo en Bash)
                whatis [comando]    Muestra un resumen de la función del comando
                sudo [comando]	    Ejecuta un comando como superusuario

    7-) Bonus (o como le decimos en mi país, la ñapa 🤑)

            Qué aburrida sería nuestra vida en programación sin Cowsay, la vaquita que habla en la terminal 😔.
            Comparte una foto en los comentarios con tu frase favorita de Cowsay.

                Comando	                                Descripción

                cowsay [palabras]	                    Muestra una vaca que habla
                cowsay -f dragon-and-cow [palabras]	    Muestra un dragón que habla

//--------------------------------------------------//--------------------------------------------------//
//--------------------------------------------------//--------------------------------------------------//
//--------------------------------------------------//--------------------------------------------------//