// Room: /open/ping/room/road4.c
inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
	set( "build", 32 );
  set ("long", @LONG
�ߵ�����,����ƽ�ϳǵĵ���������,����ʯ�����������
,�����ɵ�������,����ү������������,������������Ļ�,Ҳ��
���Թ�ȥ����,��������ƽ������,��Ҳ�����������Щ��Ʒ.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/woman" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"road8",
  "north" : __DIR__"road7.c",
  "west" : __DIR__"road5.c",
  "east" : __DIR__"road3",
]));

  setup();
}
