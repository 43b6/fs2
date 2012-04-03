// Room: /open/main/room/r23.c

inherit ROOM;

void create ()
{
  set ("short", "����·��");
  set ("long", @LONG
��������һ��ɽ����, Ҳ�������������, ���ﲻ��, ����
���˵���, �⸽����ɽ������������ҩ�ݳ���, ��˲�ҩ�ݵ�����
��ʿ��Զǧ�����. ��·�ڴ�ͨ�������������Ϸ�.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/bee" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"r22",
  "south" : __DIR__"r30",
  "north" : __DIR__"M10",
  "east" : __DIR__"r24",
]));

  setup();
}
