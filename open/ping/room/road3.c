// Room: /open/ping/room/road3.c
inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
	set( "build", 7 );
  set ("long", @LONG
�������ƽ�ϳ�������, ƽ�ϳ���ش�ƫ��, ���������еĶ���,
����Ҳ��������, �����õĻ�, �㻹�������置���ز��� !
    ��ı�����һ��Ǯׯ, �Ϸ�����һ����͸��ȯ�̵�.     

LONG);


      set("no_kill", 1);
  set("objects", ([ /* sizeof() == 2 */
  "/open/ping/npc/sells2" : 1,
  "/open/ping/npc/woman" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"road4",
  "north" : __DIR__"pingbank.c",
  "south" : __DIR__"loto",  
  "east" : __DIR__"road2",
]));

  setup();
}
