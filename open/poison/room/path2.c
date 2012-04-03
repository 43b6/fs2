// Room: /open/poison/room/path1.c
inherit ROOM;

void create ()
{
  set ("short", "�ܵ�");
  set ("long", @LONG
    ������ڤ��ħ���½��������ܵ������Ծ������ܻ�
�ģ������ܵ�¤����һƬ���Ĺ�â�С�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"path11",
  "east" : __DIR__"path1",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
	"/open/poison/npc/man.c" : 1,
]));

  setup();
}
