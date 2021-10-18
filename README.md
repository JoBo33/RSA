# RSA

## What is RSA 

RSA is a procedure to generate and encrypt digital signatures. Furthermore, RSA is a asynchronous process so one have to have a public and a private key to encrypt and decrypt messages. As one can see from the name, the public key is known to everyone who needs it for encryption. The matching private key should just know the one who is getting the message to decrypt the message.

## The procedure

### Create keys
First one need to choose 2 primenumbers p and q (the higher the numbers, the safer is the encryption). After that one have to multiply the numbers.
> n = p * q  

The next step is the Euler's phi function.  
> phi(n) = (p-1)(q-1)  

Than one have to find a relatively prime number e where the biggest common factor is equal to one.
> bcf(e, \varphi(n)) = 1

If one chooses such an e, then e is invertible in Z/phi(n) * Z. Thus one can calculate an element d in N inverse to e with the following formula:
> e * d = 1 mod * phi(n)

So, the public key consists of n and e and the private key consists of p,q and d.

### Encoding / decoding

To handle the message, one have to convert the message with help of the ascii-values to an integer. The message will be encoded in different parts. Every part has a length of 4.
If x is the message, the sender can encode the message with the public key of the receiver by 
> y = x^e

To decode the message the receiver can use the following formula
> x = y^d mod n

As one can see in the formula, the receiver has to use the personal private key to decode the message. 
Finally, one have to convert the integers back to strings.

## GUI 
![RSA GUI](https://github.com/JoBo33/RSA/blob/main/GUI%20Example.png "RSA GUI")


