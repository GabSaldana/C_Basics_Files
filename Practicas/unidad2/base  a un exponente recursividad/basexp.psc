SubProceso res<-basexp(bas,ex)
	Si ex=0 Entonces
		res<-1
	Sino
		res<-bas*basexp(bas,ex-1)
	FinSi
FinSubProceso

Proceso basexp2
	Escribir 'Dame el valor de la base'
	Leer bas
	Escribir 'Dame el valor de el exponente'
	Leer ex
	Escribir 'el valor es',basexp(bas,ex)
FinProceso

