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

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room2-5",
  "east" : __DIR__"room2-3",
]));
  set("outdoors", "/open/marksman");

  setup();
}
