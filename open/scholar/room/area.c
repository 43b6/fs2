// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "��ʯС��");
  set ("long", @LONG
����ͨ�����ŷ����Ψһ��һ����ʯС����С����
�Ϸ������ŵĴ��ţ���С������������������Ĳ�ƺ
���ڲ�ƺ�����ܳ����Կ�����������һ�Զ��鼰�о���
��������ʮ�ֵ���⡣
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"area_3.c",
  "north" : __DIR__"area2.c",
  "south" : __DIR__"r24.c",
  "east" : __DIR__"area_1.c",
]));

  setup();
}
