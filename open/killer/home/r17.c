// Room: /open/killer/room/r17.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�����Ǻ�������̳�ĳ��ȣ������ƺ���һЩ���أ�����ҪС��һ�㡣
�����ܵ���⣬�ƺ�Ҳ���������ɱ���������ⲻ��һ���˸ý����ĵط���
������һ������ù��ˣ�����������������պ�һ�㡣

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"floorm.c",
  "out" : __DIR__"doorm.c",
]));
  set("light_up", 10);
  setup();
}