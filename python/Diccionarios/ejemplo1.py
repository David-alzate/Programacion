dictionary = {"cat": "gato", "perro": "chien", "caballo": "cheval"}
words = ['gato', 'leon', 'caballo']



for word in words:
    if word in dictionary:
        print(word, "->", dictionary[word])
    else:
        print(word, "No esta en el diccionario")
