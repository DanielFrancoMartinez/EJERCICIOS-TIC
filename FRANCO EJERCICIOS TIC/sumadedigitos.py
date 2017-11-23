def sumadedigitos():
    pares=0
    impares=0
    numero=input("dime un numero")
    while numero>0:
        cifra=numero%10
        if cifra%2==0:
            pares=pares+1
        else:
            impares=impares+1
        numero=numero/10
    print "tiene",pares,"cifra pares""y tiene",impares,"cifras impares"
sumadedigitos()
