// Room: /open/poison/room/room6
inherit ROOM;

void create ()
{
  set ("short", "ǰ��");
  set ("long", @LONG
������ڤ��ħ�̵�ǰ��ڲ�����������һƬ�Ʋʣ���
�����԰������ŵ�̾��ɵ�̴ľ�Σ��м���������Ż�����
̫ʦ�Σ������ǽ��������Ӵ���������۽�����������ĵ�
����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"road15",
  "north" : __DIR__"road16",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/poison/npc/visitor.c" : 1,
  "/open/poison/npc/greeter" : 1,
]));
  set("light_up",1);

  setup();
}
