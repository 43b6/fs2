// Room: /open/main/room/r22.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
��������һ��ɽ����, Ҳ�������������, ���ﲻ��, ����
���˵���, �⸽����ɽ������������ҩ�ݳ���, ��˲�ҩ�ݵ�����
��ʿ��Զǧ�����. ��·�ڴ˳ʶ�������.
LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/main/room/r21",
  "north" : "/open/main/room/m9",
  "south" : "/open/main/room/m15",
  "east" : "/open/main/room/r23",
]));

  setup();
}
