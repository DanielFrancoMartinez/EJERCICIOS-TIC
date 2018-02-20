def pig_latin():
    texto=raw_input(" Escribe un texto extenso ")
    for cont in range(0, len(texto),1):
        if texto[cont]== ' A ' or texto[cont]== ' a ' or texto[cont]== ' E ' :
            print 'u',
        else:
            print texto[cont],
pig_latin()
