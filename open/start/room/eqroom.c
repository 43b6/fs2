// Room: /open/start/room/eqroom
inherit ROOM;

void create()
{
  set ("short", "���Ŵ�����");
  set ("long", @LONG
������ר�������ӵܶ�һЩ�����ķ��䡣
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"small_house",
]));
  set("no_clean_up", 1);
  setup();
}
