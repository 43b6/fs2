// Room: /open/ping/room/p3
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
���ȵ�������и�ת��, ͨ��һ�䷿��ȥ, ���䴦������һƿ��,
���Ź��ż���ʫ��, һ��֮���ƺ���������֮��, ����һ�ַǷ�֮�ơ�

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"p6",
  "north" : __DIR__"p4",
  "east" : __DIR__"p2",
]));
  set("light_up", 1);

  setup();
}
