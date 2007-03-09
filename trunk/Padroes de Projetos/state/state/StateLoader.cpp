#include "StateLoader.h"
#include "StateActive.h"
#include "StateWaiting.h"

#include <iostream>

namespace state
{
   StateLoader* StateLoader::m_instance = NULL;

   StateLoader::StateLoader()
   {
   }
   //
   StateLoader::~StateLoader()
   {
   }
   //
   StateLoader* StateLoader::Create()
   {
      if ( m_instance == NULL )
      {
         m_instance = new StateLoader();
      }
      return m_instance;
   }
   //
   void StateLoader::Destroy()
   {
      if( m_instance != NULL )
      {

         delete m_instance;
         m_instance = NULL;
      }
   }
   //
   void StateLoader::Execute()
   {
      SetNextState( NULL ); 
      
      std::cout << "Execute do Loader..." << std::endl;
      std::cout << "Volta novamente ao estado Active..." << std::endl;
            
      //Retornar p/ o estado inicial 
      //SetNextState( StateActive::Create() ); 
      SetNextState( NULL ); 
   }
   //
   State::InfoState StateLoader::GetInfoState() const
   {
      return Loader;
   } 
}
