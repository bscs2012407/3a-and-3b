void main(void)
{  //factorial computation 5!= 5.4.3.2.1
long number=1;
  long answer;
  while(number!=0)
{  printf("Enter a number");
   scanf("%ld", &number);
   answer=1;
   while(number>1)
   answer=answer * number--;
   printf("Factorial is %ld", answer);
}
}

