 Program:

 #include <stdio.h>
 #include <string.h>
 void main()
 {
 char message[] = "Hello World";
 int length = strlen(message);
 printf("Original string: %s", message);
 printf("\nXOR with 0:");
 for (int i = 0; i < length; i++)
 {
 char xored_char = message[i] ^ 0;
 printf("%c", xored_char);
 }
 printf("\n");
 }



 Output:
 Original string: Hello World
 XORwith 0:Hello World
