// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "��ʯС��");
  set ("long", @LONG
����ͨ�����ŷ����Ψһ��һ����ʯС����С����
���߿��Խ����������ã�С������������������Ĳ�
ƺ���ڲ�ƺ�����ܳ����Կ�����������һ�Զ��鼰�о�
����������ʮ�ֵ���⡣
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"in.c",
  "west" : __DIR__"area_4.c",
  "south" : __DIR__"area.c",
  "east" : __DIR__"area_2.c",
]));

  setup();
}
