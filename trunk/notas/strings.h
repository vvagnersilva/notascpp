#ifndef _STRINGS_H_
#define _STRINGS_H_

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;

class Strings
{
   char *p;
   int size;
 public:
   Strings(char *str);
   Strings();
   Strings(const Strings &obj);           // Copy constructor
   ~Strings() {delete [] p;}

   friend ostream &operator<<(ostream &stream, Strings &obj);
   friend istream &operator>>(istream &stream, Strings &obj);

   Strings operator=(Strings &obj);       // assign a Strings object
   Strings operator=(char *s);            // assign a quoted string
   Strings operator+(Strings &obj);       // concatenate a Strings object
   Strings operator+(char *s);            // concatenate a quoted string
   friend Strings operator+(char *s, Strings &obj);
            /* concatenates a quoted string with a Strings object */

   Strings operator-(Strings &obj);       // subtract a Strings object
   Strings operator-(char *s);            // subtract a quoted string

 /* relational operators between Strings objects. Note that the operators could
    just as easily return bool, rather than int */

   int operator==(Strings &obj) {return !strcmp(p, obj.p);}
   int operator!=(Strings &obj) {return strcmp(p, obj.p);}
   int operator<(Strings &obj) {return strcmp(p, obj.p) < 0;}
   int operator>(Strings &obj) {return strcmp(p, obj.p) > 0;}
   int operator<=(Strings &obj) {return strcmp(p, obj.p) <= 0;}
   int operator>=(Strings &obj) {return strcmp(p, obj.p) >= 0;}

 /* relational operators between Strings object and a quoted character string.
    Note that the operators could just as easily return bool, rather than int */

   int operator==(char *s) {return !strcmp(p, s);}
   int operator!=(char *s) {return strcmp(p, s);}
   int operator<(char *s) {return strcmp(p, s) < 0;}
   int operator>(char *s) {return strcmp(p, s) > 0;}
   int operator<=(char *s) {return strcmp(p, s) <= 0;}
   int operator>=(char *s) {return strcmp(p, s) >= 0;}

   int strsize() {return strlen(p);}      // return string size
   void makestr(char *s) {strcpy(s, p);}  // make quoted string from Strings object

   operator char *() {return p;}          // conversion to char
 };

#endif   //_STRINGS_H_
