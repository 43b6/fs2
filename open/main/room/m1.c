// Room: /open/main/room/m1.c

inherit ROOM;

void create ()
{
  set ("short", "����");
	set( "build", 10 );
  set ("long", @LONG
�뿪�˵�·,��������һ������,΢΢�ķ��������,������
ô��û��,����ֻ��ãã��«��������. ��·��������Ϸ���
��.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/butterfly" : 1,
  "/obj/source/faint":2,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"f9",
  "south" : __DIR__"r8",
  "east" : __DIR__"r6",
]));

  setup();
}
