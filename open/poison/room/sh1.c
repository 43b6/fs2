// Room: /u/r/ranko/room/sh1.c
inherit ROOM;

void create ()
{
  set ("short", "���");
  set ("long", @LONG
�˴�һ�ҿڱ��������꣬�������Ÿ�ʽ��������ʳ���ϰ岻
ʱ�����ؽ�������������÷�ˮ���죬�����϶��ҵĵ�ζ�ϣ�����
����ζ��ʱ�ӹ���Ʈ�����������˲���ʳָ�󶯡��������в��ٴ�
���ڴ˴������ˣ�����������������������������ǡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"v2-1.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/mer1.c" : 1,
]));
  set("light_up", 1);

  setup();
}
