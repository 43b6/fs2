// Room: /d/snow/sroad4.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ��ʯ�ٵ�");
  set ("long", @LONG
����һ������ʵ����ʯ���������������������Ļ�ľ������
��������·����һ�����ʣ����������ν�ѩͤ��ֵ���·�ڡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"sroad3",
  "north" : "/d/cele/sroad1",
]));
  set("outdoors", "snow");

  setup();
}
