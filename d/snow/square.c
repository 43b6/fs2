// Room: /d/snow/square.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m �㳡");
  set ("long", @LONG
������ѩͤ����ǰ�㳡�Ŀյأ�������������Ŵ�ʯ�塣�㳡������
һ��ľͷ��ļ��ӣ���������ķ紵��ɹ���ܣ������ǳ��ƾɡ����ܽ���
��������������Կ���һ���ջ�����������ƺ��ܺá�
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"sroad1",
  "west" : __DIR__"inn",
  "north" : __DIR__"mstreet1",
  "east" : __DIR__"temple",
]));
  set("outdoors", "snow");

  setup();
}
