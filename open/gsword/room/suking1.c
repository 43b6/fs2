// Room: /u/s/smore/room/suking/suking1.c

inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG
һ̤��������������ܲ����������ޱ���ΰ����ڸ���
��ס���ߴ�ųߵĴ��ţ�������һͷͷ�·�Ҫ�ƿն�ȥ������
�������۾���������������㣬ʹ�����в��ɵ�����һ������
���������𾴵ĸо�.
LONG);

  set("light_up", 1);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room/suking3",
  "out" : "/open/gsword/room/suking",
]));

  setup();
}
