// Room: /open/poison/room/room18
inherit ROOM;

void create ()
{
  set ("short", "ħ����");
  set ("long", @LONG
������ڤ��ħ��Ĳ�������ͬ��������������
�챦��������ɴ�ҹ����װ�ζ��ɵľ޻����񷢳���ʵĹ�
â������ħ�������һƬ���֮�С�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"room1",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/left_hufa.c" : 1,
]));
  set("light_up", 1);

  setup();
}
