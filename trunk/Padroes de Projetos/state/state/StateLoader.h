#ifndef _stateloader_
#define _stateloader_

#include "State.h"

namespace state
{
   class StateLoader : public State
   {
      public:
         static StateLoader* Create();
         static void Destroy();
         InfoState GetInfoState() const;
         void Execute( );

      protected:
      private:
         StateLoader();
         virtual ~StateLoader();
         StateLoader& operator=( const StateLoader& );
         
         static StateLoader* m_instance;
   };
}
#endif //_stateloader_
