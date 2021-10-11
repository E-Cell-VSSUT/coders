# IBAN ( International Bank Account Number ) Validator
'''
An IBAN-compliant account number consists of:
-->a two-letter country code taken from the ISO 3166-1 standard (e.g., FR for France, GB for Great Britain, DE for Germany, and so on)
-->two check digits used to perform the validity checks - fast and simple, but not fully reliable, tests, showing whether a number is invalid (distorted by a typo) or seems to be good;
-->the actual account number (up to 30 alphanumeric characters - the length of that part depends on the country)

The standard says that validation requires the following steps (according to Wikipedia):
(step 1) Check that the total IBAN length is correct as per the country.
(step 2) Move the four initial characters to the end of the string (i.e., the country code and the check digits)
(step 3) Replace each letter in the string with two digits, thereby expanding the string, where A = 10, B = 11 ... Z = 35;
(step 4) Interpret the string as a decimal integer and compute the remainder of that number on division by 97; If the remainder is 1, the check digit test is passed and the IBAN might be valid.
'''


def country_length(name):
    if name == 'INDIA':
        return 'IN'
    elif name == 'USA' or name == 'UNITED STATES':
        return 'US'
    elif name == 'UK' or name == 'GREAT BRITAIN':
        return 'GB'
    elif name == 'GERMANY':
        return 'DE'


iban = input("Enter IBAN, please: ")
iban = iban.replace(' ', '')
country = input('Enter your country: ').upper()
iban_len = country_length(country)
if not iban.isalnum():  # checking for special characters in IBAN
    print('Invalid characters entered')
elif len(iban) < 15:  # checking if the length is less than 15
    print('IBAN enetered is too short')
elif len(iban) > 31:  # checking if the length is greater than 15
    print('IBAN enetered is too long')
else:
    # checking the iban after adding the first four characters to the end of iban
    iban = (iban[4:] + iban[0:4]).upper()
    iban2 = ''
    for ch in iban:
        if ch.isdigit():
            iban2 += ch
        else:
            iban2 += str(10 + ord(ch) - ord('A'))
    iban = int(iban2)
    if iban % 97 == 1:
        print("IBAN entered is valid.")
    else:
        print("IBAN entered is invalid.")
