// Room: /open/capital/room/r63.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
������ة�ฮ�ĳ���ڣ������ûʵĻ��ܵ����ʾ�����˵��ݳ���
���٣����ڶ��ӵ��ǳ����׸���ͨ�죬�ɴ˿ɼ�����֮�����ǳ����ͨ
�����ڳ���ӵ����˶���ʲ�����Ҳ������Ϊة��İ����ɡ�

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/capital/room/premier",
  "west" : "/open/capital/room/r62",
  "east" : "/open/capital/room/r64",
]));

  set("outdoors", "/open/capital");

  setup();
}
