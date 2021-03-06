/////////////////////////////////////////////////////////////////
/*
  TangibleCNC.h - Tangible CNC main class
  Created by Danny Leen, October 19, 2020.
*/
/////////////////////////////////////////////////////////////////

#pragma once

#ifndef TangibleCNC_H
#define TangibleCNC_H


/////////////////////////////////////////////////////////////////

#include "Arduino.h"
#include "Database/ServerCommunication.h"
#include "UI/Ui_Menu.h"
#include "Move/Move.h"

//////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////


class TangibleCNC {



  private:
    ServerCommunication ServerCommunicationObj;
    


  public:
    TangibleCNC(String firmware);
    bool setWiFi(String wifiSSID, String wifiPassword);
    bool setFirebase(String hostName, String authKey, String path);
    bool getConfigFirebase();
    bool getModulesFirebase();
    void screenUpdate();
    void loop();
    Ui_Menu Ui_MenuObj;
    
    
};


/////////////////////////////////////////////////////////////////
#endif
/////////////////////////////////////////////////////////////////
