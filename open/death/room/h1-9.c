// Room: /open/death/room/h1-9    edit by Pokai
inherit ROOM;

void create ()
{
  set ("short", "第一殿--通道");
  set ("long", @LONG
你看到前方不远处有座城门，门上一个石匾刻着：‘往第二殿’四
个大字；你发现城门下的守备格外地森严，守卫们对来往的孤魂野鬼都
会详加调查，对稍微可疑的鬼魂都不会放行。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"h1-5",
  "south" : __DIR__"h1-10",
]));
  set("light_up", 1);

  setup();
}
