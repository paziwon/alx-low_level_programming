include <stdio.h>
include <stdlib.h>
/**
 *main - main block
 *description - Write a program that prints all possible 
 *different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
        int c;
        int d = o;
  
      while (d < 10)
      {
            c=0;
            while (c <10)
            {
                  if (d != c && d < c)
                  {
                          putchar('0' + d);
                          putchar('0' + c);
                    
                          if (c + d != 17)
                          {
                                putchar (',');
                                putchar (' ');
                                       }
                                      }
                                    c++;
                                       }
                                    d++;
                                        }
                               putchar('n\';
                          return (0);
          }          
