// Room: /u/m/moner/open/room/r2.c 
inherit ROOM;
 
void create ()
{
  set ("short", "����");
  set ("long", @LONG
    �����Ƿ���ɽկ������, ���߾��Ǵ�����, ����ǽ��������Ĺ���
���Ż��, ����յ������պ��ġ������и�����ͨ�����ء�


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r1.c",
  "east" : __DIR__"r3.c",
]));

  setup();
  replace_program(ROOM);
}
