// Room: /open/capital/room/r06.c

inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG
�����������˾��ǵ����벿��, ��������ǲ�׼���˶�����, ټ��
�ĵ�·�յ�����, ӳ�Ŵ��ɫ�ĸߴ�ǽ, ����һ�ݷ�ζ, ������ҪС
�ı𱻷��������лΡ�

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/capital/room/r52",
  "west" : "/open/capital/room/r05",
  "east" : "/open/capital/room/r07",
]));

  set("gopath", "east");

  setup();
}
