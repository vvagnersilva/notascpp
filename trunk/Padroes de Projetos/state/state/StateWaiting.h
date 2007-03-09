#ifndef _statewaiting_
#define _statewaiting_

#include "State.h"

namespace state
{
   class StateWaiting : public State
   {
      public:
         static StateWaiting* Create();
         static void Destroy();
         InfoState GetInfoState() const;
         void Execute( );

      private:
         StateWaiting();
         virtual ~StateWaiting();
         StateWaiting& operator=( const StateWaiting& );
      
         static StateWaiting* m_instance;
   };
}
#endif //_statewaiting_
