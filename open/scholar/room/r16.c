// /u/j/judd/room/r16.c
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
���������������·��������ǰ....��д���ǲ��飬���Կ�
������==>������ͼ��ݣ���==>��ˮ��ͼ��ݣ������������ģ�����
�Ĵ�ͼ��ݣ������ˮ�������������ڻ��������м䣬������ȥ����
һ���أ�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r19.c",
  "north" : __DIR__"r13.c",
  "east" : __DIR__"w3.c",
]));
  set("light_up", 1);

  setup();
}
