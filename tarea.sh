#!/bin/bash

g++ -std=c++11 main.cpp
echo "Recomendacion 447 iteraciones"
./a.out $1 
python grafica.py
rm datos.txt
rm a.out
echo "Los archvos: 'datos.txt' y 'a.out' fueron eliminados."
echo "Finalizado exitosamente."
echo " "