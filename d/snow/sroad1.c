// Room: /d/snow/sroad1.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ѩͤ��ֵ�");
  set ("long", @LONG
������ѩͤ��Ľֵ���������һ�����ֵĹ㳡���ϱ�����С·ͨ��
һ�����ӣ���������һ��С������ɽ��ͨ��ɽ�ϣ�������һ���Ƚ�խ��
�ֵ����β�������֮�䴫������Ȯ�͡�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"square",
  "west" : __DIR__"sroad2",
  "east" : __DIR__"eroad1",
]));
  set("outdoors", "snow");

  setup();
}
