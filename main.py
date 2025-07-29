def swap_case(s):
    # Yeni string oluşturmak için bir boş liste
    result = []
    
    # Her karakteri kontrol et
    for char in s:
        # Eğer karakter büyükse, küçüğe dönüştür
        if char.isupper():
            result.append(char.lower())
        # Eğer karakter küçükse, büyüğe dönüştür
        elif char.islower():
            result.append(char.upper())
        # Eğer karakter harf değilse, olduğu gibi ekle
        else:
            result.append(char)
    
    # Listeyi string olarak birleştir ve döndür
    return ''.join(result)

# Örnek kullanımlar
sample_input_0 = 'HackerRank.com presents "Pythonist 2".'
sample_output_0 = swap_case(sample_input_0)
print(sample_output_0)  # hACKERrANK.COM PRESENTS "pYTHONIST 2".
