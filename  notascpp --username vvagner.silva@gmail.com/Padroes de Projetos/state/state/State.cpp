#include "State.h"
#include <iostream>

namespace state
{
   //
   State::State()
      : m_stateCurrent( NULL )
      , m_infoState( Active )
   {
   }
   //
   State::~State()
   {
   }
   //
   State* State::GetNextState() const
   {
      return m_stateCurrent;
   }
   //
   void State::SetNextState( State* state )
   {
      m_stateCurrent = state;
   }
}
