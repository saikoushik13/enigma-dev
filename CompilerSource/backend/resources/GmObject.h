/*
 * Copyright (C) 2010 IsmAvatar <IsmAvatar@gmail.com>
 * 
 * This file is part of Enigma Plugin.
 * Enigma Plugin is free software and comes with ABSOLUTELY NO WARRANTY.
 * See LICENSE for details.
 */


#include "../sub/MainEvent.h"
#include "../JavaStruct.h"

struct GmObject
{
  String name;
  int id;
  
  int spriteId;
  boolean solid;
  boolean visible;
  int depth;
  boolean persistent;
  int parentId;
  int maskId;

  MainEvent *mainEvents;
  int mainEventCount;
};
