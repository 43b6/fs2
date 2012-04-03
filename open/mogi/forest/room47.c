// room7.1 by roger
inherit ROOM;
#include <ansi.h>
#include <forest.msg>
void create () {
set ("short","ħɭ��");
   set ("long",
     (: print_forest_msg :)
    );

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 4 */
      "north" : __DIR__"room46",
      "south" : __DIR__"room48",
      "east" : __DIR__"room54",
      "west" : __DIR__"room53",
      ]));

        set("objects",([ /* sizeof() == 1 */
   __DIR__"npc/beast" : 1,
      ]));

        setup();
}
void init()
{
  object ob;
  if( interactive( ob= this_player()))

     {
      remove_call_out("greeting");
        call_out("greeting", 0, ob);
   }
}
int greeting (object who)
{
  object room = this_object();
  object mob;
  int i;
  if (random(100)>95)
  room->set("exits/enter","/open/gsword/second/room/broken");
  return 1;
}
