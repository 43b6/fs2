// Room: /open/start/room/f8.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�㿴��һƬ�����͵ĵ�������г����ŵ��ݵ���ζ��
�Ĵ������ĵ����������ڹ�����ũ���ǣ�������һ����׼��
ũ�徰��������ȥ���Կ������ƴ塣

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/start/npc/hen" : 2,
]));

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/start/room/f3",
  "west" : "/open/start/room/f7",
  "south" : "/open/start/room/f13",
  "east" : "/open/start/room/f9",
]));

  set("outdoors", "/open/start");

  setup();
}
