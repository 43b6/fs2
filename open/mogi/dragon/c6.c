// Room: /u/p/poloer/dragon/c6
inherit ROOM;

void create ()
{
  set ("short", "�����ź��");
  set ("long", @LONG
�����˺�ξͱ������С�ģ�Ҳ����Խ�����׶�Ĺ�����������
ͻȻ�Ƚ����������������Կ���ЩС�����ˣ����������������յе�
������?

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/mob8.c" : 2,
]));
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"c5",
  "south" : __DIR__"c8",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
