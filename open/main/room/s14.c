// Room: /open/main/room/s14.c

inherit ROOM;

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ����أ�����������ɫ�ĸ�
ɽ����ɽ�����ϱ�����Χ���ţ��ƺ�����а��.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"d14",
  "west" : __DIR__"s13",
  "south" : __DIR__"p6",
]));
  set("outdoors", "/open/main");

  setup();
  replace_program(ROOM);
}
