alphabet = ["x","y","z","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]

all_new_spell = []
new_sent = []

sentence = "kdssb eluwkgdb"
word = sentence.split()

for i in word:
        spell = i.split()
        for s in i:
            if s in alphabet:
                new_spell = alphabet[alphabet.index(s,3,29)-3]
                all_new_spell.append(new_spell)
        new_word = "".join(all_new_spell)
        new_sent.append(new_word)
        all_new_spell.clear()

final_sent = " ".join(new_sent)   
print(final_sent)
