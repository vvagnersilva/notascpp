#include "Context.h"
#include "StateActive.h"
#include "StateWaiting.h"
#include "StateLoader.h"

#include <iostream>

namespace state
{
   Context::Context()
      : m_state( StateActive::Create() )
   {
   }
   //
   Context::~Context()
   {
      // destroy all the states
      StateActive::Destroy();
      StateWaiting::Destroy();
      StateLoader::Destroy();
   }
   //
   void Context::Execute()
   {
      std::cout << "Execute do Context..." << std::endl;
      
      m_state->Execute();
          
      while( m_state->GetNextState() != NULL )
      {
         m_state = m_state->GetNextState();
         m_state->Execute();
      }
   }
   //
   State::InfoState Context::GetInfoCurrentState() const
   {
      return m_state->GetInfoState();
   }
}
