SubProceso res<-igua(str,cad)
	res<-0
	Para i<-1 Hasta 30 Con Paso 1 Hacer
		Si str[i]= cad[i] Entonces
			res<-1
		Sino
			res<-0
		Fin Si
	Fin Para
	
FinSubProceso

Proceso caden
	Dimension str[30]
	Dimension cad[30]
	
	Escribir "DAME UNA CADENA"
	Leer str;
	Escribir "Dame otra cadena"
	Leer cad;
	Escribir "es igual-->1"
	Escribir "no es igual-->0"
	Escribir " ",igua(str,cad)
FinProceso
