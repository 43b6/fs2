// Room: /u/m/moner/open/room/r5.c 
inherit ROOM;
 
void create ()
{
  set ("short", "��¥����");
  set ("long", @LONG

    �����Ƿ���ɽկ������, ���߾��Ǵ�����, ����ǽ��������Ĺ���
���Ż��, ����յ������պ��ġ������и�����ͨ�����ء�


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r6.c",
  "east" : __DIR__"r4.c",
]));

  setup();
  replace_program(ROOM);
}
