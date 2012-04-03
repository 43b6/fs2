// Room: /open/poison/room/road12
inherit ROOM;

void create ()
{
  set ("short", "石阶");
  set ("long", @LONG
石阶的两旁设有大大的马道，供马车及驿马行走，道路
两旁种满了樱树桃木，春天时树上开满红花，整条石阶一片
火红，犹如一条火红的赤龙。
LONG);

  set("outdoors", "/open/poison");

  set("exits", ([ /* sizeof() == 2 */
  "southdown" : "/open/poison/room/road11",
  "northup" : "/open/poison/room/road13",
]));

  setup();
}
