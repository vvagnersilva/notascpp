#ifndef _state_
#define _state_

#include <string>

namespace state
{
   class State
   { 
      public:
         enum InfoState {
            Active = 0,
            Waiting = 1,
            Loader = 2
         };

         State* GetNextState() const; 
         virtual InfoState GetInfoState() const = 0;
         virtual void Execute( ) = 0;
      protected:
         void SetNextState( State* );
         State();
         virtual ~State();
      private:
         State* m_stateCurrent;
         InfoState m_infoState;
   };
}
#endif //_state_
