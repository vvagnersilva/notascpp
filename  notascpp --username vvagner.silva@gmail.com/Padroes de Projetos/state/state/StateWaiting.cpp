#include "StateWaiting.h"
#include "StateActive.h"
#include "StateLoader.h"
#include <iostream>

namespace state
{
   StateWaiting* StateWaiting::m_instance = NULL;
   //
   StateWaiting::StateWaiting()
   {      
   }
   //
   StateWaiting::~StateWaiting()
   {
   }
   //
   StateWaiting* StateWaiting::Create()
   {
      if ( m_instance == NULL )
      {
         m_instance = new StateWaiting();
      }
      return m_instance;
   }
   //
   void StateWaiting::Destroy()
   {
      if( m_instance != NULL )
      { 
         delete m_instance;
         m_instance = NULL;
      }
   }
   //
   void StateWaiting::Execute( )
   {
      SetNextState( NULL );
     
      std::cout<< "Execute do Waiting... " << std::endl;
      
      SetNextState( StateLoader::Create() ); 
   } 
   //
   State::InfoState StateWaiting::GetInfoState() const
   {
      return Waiting;
   } 
}
