// Room: /open/badman/room/b7
inherit ROOM;

void create ()
{
  set ("short", "��ǰ���");
  set ("long", @LONG
������������ǰ����ľ�ͷ���ϱ����ߵĽֵ�������ϡϡ����
���ƺ���������ɱ֮�����㿴��������һ����ΰ�Ľ����������Ϲ�
��һ��д�š����˹ȡ����Ҷ�ſڻ�ȼ���������ܵĻ�档�ڻ�
�����ҫ�£��Ե��ر����أ�����͸����������

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"b19",
  "north" : __DIR__"b13",
  "west" : __DIR__"g1",
  "east" : __DIR__"b6",
]));
  set("outdoors", "/open/badman");

  setup();
}
