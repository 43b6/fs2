// Room: /open/main/room/d10.c

inherit ROOM;

void create ()
{
  set ("short", "ɳĮ");
  set ("long", @LONG
�����һ���޼ʵ�������ɳĮ����������һ���������ƶ�����
���������ȥ, ȴ���������, ��֪������������һ��?
�ϱ����ֳ�ϡϡ����Ĳ�Ƥ, �����Ǳ�Ӧ����ˮ��?
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"d11",
  "west" : __DIR__"r1",
  "south" : __DIR__"s10",
  "north" : __DIR__"d3.c",
]));
  set("outdoors", "/open/main");

  setup();
}
int valid_leave(object me, string dir)
{
if(dir == "up")
if(me->query("combat_exp") < 2400000)
return notify_fail("�����ѧ����̫���ˡ�\n");
     return :: valid_leave(me, dir);
}
