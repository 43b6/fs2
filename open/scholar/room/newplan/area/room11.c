// Room: /u/s/sueplan/newplan/area/room11
inherit ROOM;

void create ()
{
  set ("short", "[1;37m����[1;33m��[0m");
  set ("long", @LONG
    ���������������ˣ�����������̫�׽����Ե������ġ�����
ֻ��һλ��û������ǰ����������ġ��������ܾ���Ԫ˧��������������
������ս����û��ս����������ȱ������̫�׽��ǾͰ�δ������������
����磬������פ�������ǡ�
LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "out" : __DIR__"room10.c",
  "north" : __DIR__"jroom.c",
]));

  setup();
}
