#include <stdlib.h>
#include <stdio.h>

int compare_int(int *a, int *b)
{
   if (*a < *b)
      return(-1);
   else if (*a == *b)
      return(0);
   else
      return(1);
}

int compare_float(float *a, float *b)
{
   if (*a < *b)
     return(-1);
   else if (*a == *b)
     return(0);
   else
     return(1);
}

int  main()
{
   int vet_int[] = { 51, 23, 2, 44, 45 };
   float vet_float[]={ 21.1, 13.3, 22.2, 34.4, 15.5 };

   int vetSize = 5;

   // Prototipo de stdlibi.h

   // void qsort(void *buf, size_t num, size_t size, 
   //            int (*compare)(const void *, const void *));

   qsort(vet_int, vetSize, sizeof(int),
     (int (*) (const void *, const void *)) compare_int);

   for (int i = 0; i < vetSize; i++)
     printf("%d\t", vet_int[i]);

   putchar('\n');

   qsort(vet_float, vetSize, sizeof(float), 
     (int(*) (const void *,const void *)) compare_float);

   for (int i = 0; i < vetSize; i++)
     printf("%4.1f\t", vet_float[i]);
   
   putchar('\n');

   return 0;
}

