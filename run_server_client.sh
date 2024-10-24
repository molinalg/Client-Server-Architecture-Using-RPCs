#!/bin/bash

# Exportar la variable de entorno LD_LIBRARY_PATH con el path de la libreria
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$(pwd)

# Iniciar el ejecutable del servidor en background con el puerto 8080
./servidor_ejev3 &

# Esperar a que el servidor arrance antes de iniciar el cliente
sleep 1

# Iniciar el ejecutable del cliente
export IP_TUPLAS=localhost
./cliente_ejev3

# Dar permisos de ejecucion al script de shell y a los ejecutables de servidor y cliente
chmod +x run_server_client.sh
chmod +x servidor_ejev3
chmod +x cliente_ejev3

# Terminar el proceso servidor
killall -9 servidor_ejev3