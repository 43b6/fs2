// Room: /u/m/moner/open/room/room14.c 
inherit ROOM;
 
void create ()
{
  set ("short", "����");
  set ("long", @LONG

    �����Ƿ���ɽկ������, ���߾��Ǵ�����, ����ǽ��������Ĺ���
���Ż��, ����յ������պ��ġ�


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"r9.c",
  "south" : __DIR__"r10.c",
  "east" : __DIR__"r7.c",
]));

  setup();
  replace_program(ROOM);
}
