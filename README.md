# credit

## SUBJECT :
The aim of this program is to show if the credit card is VISA or Mastercard or INVALID.
This technology is used by Paypal.

## HOW TO LAUNCH :

First, to make the program work on your computer, you must download and extract CS50 library : https://github.com/cs50/libcs50/archive/refs/tags/v10.1.1.zip
Then :
```
cd libcs50-*
sudo make install
```

Clone the repository on your terminal :
```
git clone https://github.com/sarahlesc/credit.git
cd credit
```
Then, to launch the program, you must enter :
```
gcc -lcs50 -lm credit.c && ./a.out
```
Enter the numbers of a credit card.
If it is a VISA, it will return VISA.
If it is a MASTERCARD, it will return MASTERCARD.
If it is invalid, it will return INVALID.
