// Room: /u/s/sueplan/newplan/area/f13.c
inherit ROOM;

void create ()
{
  set ("short", "[1;33m�������[0m");
  set ("long", @LONG

�ۼ�һ�������������ǰ������������Ȼ�����������о���֮��
���ֺ�����������̬֮�����ڳ������м򵥣���˿��֮�Ҷ����ް��
֮���Ρ�

LONG);

  set("light_up ",1);
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"f12",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/room/newplan/npc/master_wone.c" : 1,
]));

  setup();
}
