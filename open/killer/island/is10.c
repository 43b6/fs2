// Room: /u/u/unfinished/room/is10.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������ïʢ������֮��, ��Ҷ�ڱ�������, ɭ����һƬ�ڰ�, �����ܲ�ʱ��
�����춯��Ľ���, ���������Ŀռ�������������ɭ����. ��Ұ�޵ĺ�������,
����Լ��������Ķ�����Щ����ˮ������. ���ߵĵ����ƺ��Ƚϸ���, ���ڱ���
�������ֵĳ���.
LONG);

  set("outdoors", "/u/u");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"is14.c",
  "east" : __DIR__"is11.c",
  "south" : __DIR__"is6",
]));

  setup();
}
