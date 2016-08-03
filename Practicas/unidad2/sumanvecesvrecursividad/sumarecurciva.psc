SubProceso res<-suma(num,v)
	Si v=1 Entonces
		res<-num
	Sino
		res<-num+suma(num,v-1)
	FinSi
FinSubProceso

Proceso Sumarecursiva
	Escribir 'Dame el valor del numero a sumar'
	Leer num
	Escribir 'Dame el numero de veces a sumar'
	Leer v
	Escribir 'El resultado es ',suma(num,v)
FinProceso

