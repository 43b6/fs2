// Room: /open/main/room/f2.c

inherit ROOM;

void create()
{
	set("short", "ɭ��");
	set("long",@LONG 
  �⿴������һ���޼ʵ�ɭ�֣����ߺ�ѹѹ��һƬ����
      ������������ϡ�ٵĵط�...
LONG);

  set("outdoors", "/open/main" );

  set("objects",([
      "/open/main/npc/mechoufen" :1,
     ]));
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"f4",
  "west" : __DIR__"f1",
  "east" : __DIR__"F1",
]) );

  setup();
}
