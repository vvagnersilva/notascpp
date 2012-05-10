#ifndef _context_
#define _context_

#include "State.h"

namespace state
{
   class Context
   {
      public:
         Context();
         virtual ~Context();
         State::InfoState GetInfoCurrentState( ) const;
         void Execute( );
      private:
         State* m_state;
   };
}
#endif //_context_
