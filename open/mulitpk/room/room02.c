// Room: /u/o/ookami/pkroom/room02.c
inherit ROOM;

void create ()
{
  set ("short", "����֮���ִ��᳡");
  set ("long", @LONG
�����ǿ���ռ������ִ��Ļ᳡, ������һ��, ֻ�������Ѽ���
��ǰ�������ֵĹ���, ���������Ѿ������μ�����������, ������һ
�����ڱصõ�����

LONG);

  set("light_up", 1);
  set("no_auc", 1);
        set("no_transmit", 1);

  set("pkroom", 1);
  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"room01.c",
  "south" : __DIR__"room06.c",
  "east" : __DIR__"room03.c",
]));

  setup();
}
