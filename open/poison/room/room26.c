inherit ROOM;

void create ()
{
  set ("short", "С·");
  set ("long", @LONG
�ߵ����� ,�Ѿ����������������ˮ������ ,������һ����ֱ��
ɽ· ,�������ʲô����ס������� .....

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room25",
  "north" : __DIR__"room27",
  "westup" : __DIR__"room32",
]));
  setup();
}


