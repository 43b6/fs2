// Room: /d/snow/eroad1.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ����С��");
  set ("long", @LONG
����һ����ͨ�Ļ���С������������������һ·������ɽ��������
һ���������������ѩͤ��Ľֵ���
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "northeast" : __DIR__"eroad2",
  "west" : __DIR__"sroad1",
  "north" : __DIR__"temple",
]));
  set("outdoors", "snow");

  setup();
}
