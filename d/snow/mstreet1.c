// Room: /d/snow/mstreet1.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ѩͤ��ֵ�");
  set ("long", @LONG
������������ѩͤ��Ľֵ��ϣ����߲�Զ����һ��ߴ��Ժ�ӣ���
������һ���ִ����ˣ�������д�š�������ݡ�������ֻ����������
�У��Ǹ���ʮ�߼����Ĺ㳡�����������൱���֡�����������һ���Ʒ�
�������Զ��������ּ����ѿ�������ʲô�֣������Ʒ��������⡣
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"mstreet2",
  "south" : __DIR__"square",
  "west" : __DIR__"bank",
  "east" : __DIR__"school1",
]));
  set("outdoors", "snow");

  setup();
}
