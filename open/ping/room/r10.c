// Room: /u/m/moner/open/room/r10.c 
inherit ROOM;
 
void create ()
{
  set ("short", "����");
  set ("long", @LONG

    �����Ƿ���ɽկ������, ���߾��Ǵ�����, ����ǽ��������Ĺ���
���Ż��, ����յ������պ��ġ�


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"room14.c",
  "out" : __DIR__"r11.c",
]));

  setup();
  replace_program(ROOM);
}
