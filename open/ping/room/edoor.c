// Room: /open/ping/room/edoor.c

inherit ROOM;

void create ()
{
  set ("short", "ƽ�ϳǶ���");
  set ("long", @LONG
����ǰ��һ�����ɸߵĳ���,�����ÿ���д�� __ƽ�ϳ�__ ,
������Ǳ����Ϸ��ص�ƽ�ϳ�,���������ڴ�פ������,��������
��Ϊ�Ͻ��Ļ���,�����˴��СС��ս��,�ѷ����ೡ.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/guard-d1" : 1,
]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"road1.c",
  "east" : "/open/main/room/r42",
]));

  setup();
}
