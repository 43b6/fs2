// Room: /open/capital/room/r08.c

inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG
�����ǽ����ʹ���Ψһͨ��, ��������ʲô���׹��ݻ�������ٹ�
�ȴ�����, �ǲ�׼ƽ���ϰ��ս����ġ��Ϸ��е�¥��, ֱͨһ����̨,
�ǻʵۼ��桢�Ѹ�ĵط�, ������ȥ������?

LONG);

  set("outdoors", "/open/capital");
  set("objects", ([ /* sizeof() == 2 */
  "/open/capital/npc/cleanman" : 1,
  "/open/start/npc/any" : 1,
]));
  set("exits", ([ /* sizeof() == 5 */
  "north" : __DIR__"D04",
  "west" : __DIR__"r07",
  "southup" : __DIR__"tower",
  "east" : __DIR__"r09",
  "south" : __DIR__"r74",
]));
  set("gopath", "east");

  setup();
}
