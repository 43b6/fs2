// Room: /open/main/room/r24.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
��������һ��ɽ����, Ҳ�������������, ���ﲻ��, ����
���˵���, �⸽����ɽ������������ҩ�ݳ���, ��˲�ҩ�ݵ�����
��ʿ��Զǧ�����. ��·�ڴ˳ʶ�������.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"M11",
  "west" : __DIR__"r23",
  "south" : __DIR__"m16",
  "east" : __DIR__"r25",
]));

  setup();
}
