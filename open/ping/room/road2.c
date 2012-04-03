// Room: /open/ping/room/road2.c
inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
  set ("long", @LONG
�������ƽ��������,ƽ�ϳ���ش�ƫ��,���������еĶ���
,����Ҳ��������,�����õĻ�,�㻹�������置���ز��� !!��
�ı�����һ�ҿ�ջ,�Ϸ�����һ������.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/man.c" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"road3.c",
  "north" : __DIR__"pinghotel",
  "south" : __DIR__"pingshop",
  "east" : __DIR__"road1",
]));

  setup();
}
