// Room: /open/start/room/s9.c

inherit ROOM;

void create ()
{
  set ("short", "�����");
	set( "build", 1126 );
  set ("long", @LONG
���������ƴ�Ĵ�ڣ�����������뿪���ƴ壬
��˵�ڱ��������гǿ��Ե����ɽ��ɣ������������
��Ե�ҵ�������һ������š�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/main/room/r18",
  "south" : "/open/start/room/s5",
]));

  set("outdoors", "/open/start");

  setup();
}
