// Room: /open/capital/room/r56.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�����ڽ��ʳǣ������ֶ��Ǵ�ٹ����ǵ�ס��, ���Ѳ���ر�����
����һ�����ʱ��֮��, �������������ػ�Ѳ������, Ҳ��Ϊ���, ��
��Ҳûʲô���߶���

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r55",
  "east" : __DIR__"r58",
]));
  set("outdoors", "/open/capital");

  setup();
}
