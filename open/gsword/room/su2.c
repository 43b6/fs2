// Room: /open/gsword/room/su2.c

inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
	set( "build", 50 );
  set ("long", @LONG
 �ߵ�����,��Ⱥ��ʼ��������,��������,��������ֵľ���,
������һ������,�����������Щ����,��������������վ,�����
����վ����ͨ����
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/sword_boy" : 1,
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/gsword/room/su3.c",
  "west" : "/open/gsword/room/susteal",
  "south" : "/open/gsword/room/su1.c",
  "east" : "/open/trans/room/room2",
]));

  setup();
}
