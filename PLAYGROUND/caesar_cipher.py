alphabet = [
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
]


class Ciphering:
    def __init__(self,word,shift_key):
        self.word=word
        self.shift_key=shift_key
    def encryption(self):
        cipher_text=" "
        for i in self.word:
            letter_pos=alphabet.index(i)
            new_letter_pos=letter_pos+self.shift_key%26
            new_letter=alphabet[new_letter_pos]
            cipher_text+=new_letter
        self.cipher_text = cipher_text
        return f"Your statement has been encypted to [{self.cipher_text}]"

class Deciphering(Ciphering):
    def __init__(self,parent_info,cipher_word,cipher_key,choice):
        super().__init__(parent_info.word , parent_info.shift_key)
        self.cipher_word=cipher_word
        self.cipher_key=cipher_key
        self.choice=choice
        self.encryption()
    def decryption(self):
        if self.choice==1:
            plain_text=" "
            for j in self.cipher_word:
                letter_pos=alphabet.index(j)
                new_letter_pos=letter_pos-self.cipher_key%26
                new_letter = alphabet[new_letter_pos]
                plain_text+=new_letter
            return f"Your statement has been decrypted to [{plain_text}]"
        else:
            plain_text=" "
            for k in self.cipher_text:
                letter_pos=alphabet.index(k)
                new_letter_pos=letter_pos+self.shift_key%26
                new_letter=alphabet[new_letter_pos]
                plain_text+=new_letter
            return f"[{self.cipher_text}]Decrypted into [{plain_text}]"



ciphering_obj=Ciphering(None,None)
deciphering_obj=Deciphering(ciphering_obj,None,None,None)
while True:
    method=input(
        "1.Encryption\n"
        "2.Decryption\n"
        "Enter:"
    )
    if method=='1':
        word=input("Enter what to encrypt\n:")
        shift_key=int(input("Enter shift key:"))
        ciphering_obj.word=word
        ciphering_obj.shift_key=shift_key
        print(ciphering_obj.encryption())
    elif method=='2':
        control=input(
            "1.Decrypt something else\n"
            "2.Decrypt what you encrypted earlier\n"
            "Enter:"
        )
        if control=='1':
            word=input("Enter what to encrypt\n:")
            shift_key=int(input("Enter shift key:"))
            deciphering_obj.cipher_word=word
            deciphering_obj.cipher_key=shift_key
            deciphering_obj.choice=1
            print(deciphering_obj.decryption())
        elif control=='2':
           
            print(deciphering_obj.decryption())
        

