// Room: /u/m/moner/room/room13.c
inherit ROOM;

void create ()
{
  set ("short", "С·");
  set ("long", @LONG

����һ������ʯ�̳ɵ���С��, ��ǰͨ����Ժ, ����������, ����
��ֲ�ŷ�������, �������ζ������ǰ�С�
    ���һ����Ĵ�������, ��֪��������֨֨�Ĵ�����

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"room14.c",
  "south" : __DIR__"room10.c",
]));
  set("outdoors", "wind");

  setup();
}
