// Room: /open/gsword/room/su3.c

inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
	set( "build", 632 );
  set ("long", @LONG
���������е�����,��������,��������ֵ��˳�,������һ��
Ǯׯ,��������һ���̵�,��Ҳ�������������Щ����.	
LONG);

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/mob/sells2" : 1,
  "/open/gsword/mob/woman" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/gsword/room/su4.c",
  "west" : "/open/gsword/room/subank",
  "south" : "/open/gsword/room/su2.c",
  "east" : "/open/gsword/room/sushop",
]));

  setup();
}
