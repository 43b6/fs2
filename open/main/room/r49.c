// Room: /open/main/room/r49.c

inherit ROOM;

void create ()
{
  set ("short", "����С·");
  set ("long", @LONG
�����Ѿ��������е�����ˣ���Ȼ���������Ĺ�Ͻ��Χ��
�����ڴ˳����¿��������������ı���. �����ƺ��е�����û
������Լ�С��. ��·�ڴ˳ʶ�����.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"L21",
  "west" : __DIR__"r48",
  "south" : __DIR__"f31",
]));

  set("outdoors", "/open/main");

  setup();
}
