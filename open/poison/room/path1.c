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
  "west" : __DIR__"path2",
  "east" : __DIR__"room2",
]));
  set("light_up", 1);

  setup();
}
