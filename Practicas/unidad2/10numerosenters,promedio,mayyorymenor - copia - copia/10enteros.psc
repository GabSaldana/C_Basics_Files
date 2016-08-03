Proceso diezenteros
	Dimension numeros[10]
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir " Dame un numero"
		Leer numeros[i]
		suma=suma+numeros[i]
		
	Fin Para
	meno=numeros[1]
	mayo=numeros[1]
	Para j<-2 Hasta 10 Con Paso 1 Hacer
		Si mayo<numeros[j] Entonces
			mayo=numeros[j]
			
		Fin Si
		Si meno>numeros[j] Entonces
			meno=numeros[j]
		Fin Si
		
	Fin Para
	promedio=suma/10
	Escribir "El promedio es",promedio
	Escribir "El mayor es",mayo
	Escribir "El menor es",meno
	
	
FinProceso
