#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "山路");
  set ("long", @LONG

   你来到了一个细长的的山路之中。四周传来阵阵的杀气。
   北方是一间小庄园，目前还不是看得很清楚。
   在一旁有竖立了一个标示牌(sign)
   

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 3   南方要接回后山的房间中*/
     "north" : __DIR__"hr7.c",
     "south" : __DIR__"hr1.c",   
]));
  set("item_desc", ([ /* sizeof() == 2 */
        "sign":" 前方是通吃小筑，内有迷镇，请速离开\n",
]));
 set("objects",([
  "/open/killer/npc/spy4.c":1,]));
  setup();
}
