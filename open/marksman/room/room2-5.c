// Room: /open/marksman/room/room2-4
inherit ROOM;

void create ()
{
  set ("short", "ʯ��С��");
  set ("long", @LONG
һ����ʯ����������ɵ�С����������˼��ƺ�
    Խ��Խ���������Զ��һ���������и���
    ��Զ����
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"room2-4",
//  "south" : "/open/scholar/room/newplan/area/f1.c",
  "east" : __DIR__"room1-1",
]));
  set("outdoors", "/open/marksman");

  setup();
}
