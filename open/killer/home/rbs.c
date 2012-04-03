#include "/u/c/cage/lib/door.h"
#include <room.h>
inherit ROOM;
void create()
{
  set ("short", "ʯ��");
  set ("long", @LONG
����һ��յ�����ʯ��,���ܿ���һ��,��ֻ����ǰ����һ��ʯ�š� 

LONG);
     set("door/south",([
      "name" : "ʯ��",
      "connect" :  "/open/gblade/room/g1-2",
      "status" : DOOR_CLOSE,
      ]));
     set("exits",([
  "north" : __DIR__"rb.c",]));
   set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);
  setup();
}
void init()
{
  add_action("handle_look" ,"look");
  add_action("handle_open" ,"open");
  add_action("handle_close","close");
}

int handle_look(string str)
{
  if(str == "door")
 return (look_door("south",str));
}

int handle_open(string str)
{
 return (open_door("south",str));
}

int handle_close(string str)
{
 return (close_door("south",str));
}