// Room: /u/p/poloer/dragon/b1
inherit ROOM;

void create ()
{
  set ("short", "�������ж�");
  set ("long", @LONG
������������ܿ��������ӵĹ��죬�е��������ĸо���
�����ɱ�����أ����˸о����ǳ����ѹ���ͬʱҲ�о�������ɱ
�ˡ���Χ����һЩ���˵ĺ��ǣ�ʹ�˲����˺�������

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/mob4.c" : 2,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"b4",
  "up" : __DIR__"ring3",
  "south" : __DIR__"b2",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
