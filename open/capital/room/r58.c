// Room: /open/capital/room/r58.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�����������Ե��ﲼ��˾����ר�Ź�����ڲ������ν��ײ��Լ���
�����۵����⣬�����������, �������ҵط���������, ���ｫ���ṩ
����������Ѷ��

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"M10",
  "west" : __DIR__"r56",
  "east" : __DIR__"r59",
]));
  set("shoyr", "������");
  set("outdoors", "/open/capital");

  setup();
}
