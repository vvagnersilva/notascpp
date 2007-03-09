#include "Context.h"
#include "StateActive.h"
#include "StateWaiting.h"
#include "StateWaiting.h"

#include <iostream>

namespace state
{
   StateActive* StateActive::m_instance = NULL;
   //
    StateActive::StateActive()
   {
   }
   //
   StateActive::~StateActive()
   {
   }
   //
   StateActive* StateActive::Create()
   {
      if ( m_instance == NULL )
      {
         m_instance = new StateActive();
      }
      return m_instance;
   }
   //
   void StateActive::Destroy()
   {
      if( m_instance != NULL )
      {
         delete m_instance;
         m_instance = NULL;
      }
   }
   //
   void StateActive::Execute()
   {
      SetNextState(NULL); 

      std::cout << "Execute do Active..." << std::endl;
      
      SetNextState( StateWaiting::Create() );
   }
   //
   State::InfoState StateActive::GetInfoState() const
   {
       return Active;
   } 
}
