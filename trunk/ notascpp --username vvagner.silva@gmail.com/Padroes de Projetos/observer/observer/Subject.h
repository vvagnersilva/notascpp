#ifndef _subject_
#define _subject_

#include "Observer.h"

namespace subject
{
   class Subject
   {
      public:

         virtual void registerObserver(observer::Observer* o);
         virtual void removeObserver(observer::Observer* o);
         virtual void notifyObservers();

      protected:
      private:
    };
}
#endif //_subject_
