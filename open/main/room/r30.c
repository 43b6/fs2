// Room: /open/main/room/r30.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
�����ڻҳ�������ʯ��·�ϣ��������ܿյ�����������أ�
����˵Ĺ¶�����ţ�������һ���ٵ������ϣ���ɵ�ƽ�ϳ�
�������Ѿ���Զ���������ӽ��置��.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"m15",
  "north" : __DIR__"r23",
  "south" : __DIR__"r32",
  "east" : __DIR__"m16",
]));

  set("outdoors", "/open/main");


  setup();
}
