// Room: /open/capital/room/r11.c

inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG
�����������˾��ǵ����벿��, ��������ǲ�׼���˶�����, ټ��
�ĵ�·�յ�����, ӳ�Ŵ��ɫ�ĸߴ�ǽ, ����һ�ݷ�ζ, ������ҪС
�ı𱻷��������лΡ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/cleanman" : 1,
    "/open/start/npc/handson_du" : 1,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r09",
  "east" : __DIR__"r12",
]));
  set("gopath", "east");

  setup();
}
