def multiplicador():
        n=input("dime que tabla quieres que escriba: ")
        print "tabla del ",n
        for cont in range (1,2012000,1):
            print n, "X",cont, "=", n*cont
multiplicador()
            
