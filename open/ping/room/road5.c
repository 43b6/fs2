// Room: /open/ping/room/road5.c
inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
	set( "build", 44 );
  set ("long", @LONG
������ƽ�ϳǵ�����,ÿ�����˵Ľ���,��������׵����,
Ȼ������İ����ƺ���ϰ�ߵ�ǹ�¹�����, ��Ȼ���е�������
,���ϱ��߾���ƽ�ϳǵ���վ.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/man" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"pingsteal",
  "west" : __DIR__"road6.c",
  "east" : __DIR__"road4",
  "south" : "/open/trans/room/room3",
]));

  setup();
}
