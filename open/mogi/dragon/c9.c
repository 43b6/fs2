// Room: /u/p/poloer/dragon/c9
inherit ROOM;

void create ()
{
  set ("short", "�����Ⱥ��");
  set ("long", @LONG
�����˺�ξͱ������С�ģ�Ҳ����Խ�����׶�Ĺ�����������
ͻȻ�Ƚ����������������Կ���ЩС�����ˣ����������������յе�
������?

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/mob8.c" : 3,
]));
  set("outdoors", "/u/p");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"c7",
  "south" : __DIR__"g1",
  "north" : __DIR__"c7",
]));
  set("evil", 1);
  set("no_transmit", 1);
  set("no_auc", 1);

  setup();
}
