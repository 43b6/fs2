// Room: /open/start/room/s5.c

inherit ROOM;

void create ()
{
  set ("short", "���ƴ�");
	set( "build", 1147 );
  set ("long", @LONG
ƽ������Ĵ�ׯ�����Լ����Ķ���ƽ�������ᣬ
û��ʲô����Ľ�����Զ���Ϸ���ȥ��һƬ�����͵�
����м���ũ���������ڵĸ�����
��ע�⵽�����˸�·�� (sign) ��

LONG);
  set("item_desc", ([ /* sizeof() == 1 */
	"sign" : @ITEM
�����ɴ����϶�, ����, ������, ����, ����
ITEM,
  ]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/start/npc/vendor" : 1,
]));
  set("outdoors", "/open/start");
  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/start/room/s4",
  "south" : "/open/start/room/s8",
  "north" : "/open/start/room/s9",
  "east" : "/open/start/room/s10",
]));

  setup();
}
