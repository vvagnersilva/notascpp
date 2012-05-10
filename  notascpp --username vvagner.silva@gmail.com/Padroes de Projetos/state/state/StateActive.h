#ifndef _stateactive_
#define _stateactive_

#include "State.h"

namespace state
{
   class StateActive: public State
   {
      public:
         static StateActive* Create();
         static void Destroy();
         InfoState GetInfoState() const;
         void Execute( );
      protected:
      private:
         StateActive();
         virtual ~StateActive();
         StateActive& operator=( const StateActive& );

         static StateActive* m_instance;
   };
}
#endif //_stateactive_
