// Room: /u/s/sueplan/newplan/area/f11.c
inherit ROOM;

void create ()
{
  set ("short", "[1;37m��ɽɽ��[0m");
  set ("long", @LONG
����������ɽ����������ɽ������ͦ�β��ɸ������ƣ�ɽ���������ֵ�
����͸�ż�������̩Ȼ��ɽ����ҹ�������࣬����������¶Ө��������ľʯ
��ɽȪ�������ֵ����±�����Ȫˮ�Լ���ľ���������࣬���޷紵��ۿ���
������Ů��̬�������������顣
LONG);

  set("outdoors", "/u/s");
  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"f12.c",
  "south" : __DIR__"f10",
  "north" : __DIR__"f15.c",
]));

  setup();
}
