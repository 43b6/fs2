// Room: /u/u/unfinished/room/is14.c
inherit ROOM;

void create ()
{
  set ("short", "���־�ͷ");
  set ("long", @LONG
һ·����, ���ڴ�������������. �����˵�, ���Ȼ����Ķ��߿���һ�Ҹ�
ǳ�Ĵ�ֻ, �˴�����, ������ٵĳ̶�, �ƺ��Ѿ���ǳ������ܾ���. �˵ر���
�������Ǻ�, ����Ӧ����С����������.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"is10",
  "east" : __DIR__"is15.c",
]));
  set("outdoors", "/u/u");

 setup();
  replace_program(ROOM);
}
