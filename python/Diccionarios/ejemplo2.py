pol_esp_dictionary = {
    "kwiat": "flor",
    "woda": "agua",
    "gleba": "tierra",
    "zamek": "castillo"
}

item_1 = pol_esp_dictionary["gleba"]
print(item_1)

item_2 = pol_esp_dictionary.get("woda")
print(item_2)

pol_esp_dictionary["zamek"] = "cerradura"
item = pol_esp_dictionary["zamek"]
print(item)

pol_esp_dictionary.update({"hola": "chao"})
print(pol_esp_dictionary)

pol_esp_dictionary.popitem()
print(pol_esp_dictionary)

for item_ in pol_esp_dictionary:
    print(item_)

for key, value in pol_esp_dictionary.items():
    print("Pol/Esp ->", key, ":", value)