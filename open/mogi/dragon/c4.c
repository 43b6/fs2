// Room: /u/p/poloer/dragon/c4
inherit ROOM;

void create ()
{
  set ("short", "�����Ⱥ��");
  set ("long", @LONG
�����˺�ξͱ������С�ģ�Ҳ����Խ�����׶�Ĺ�����������
ͻȻ�Ƚ����������������Կ���ЩС�����ˣ����������������յе�
������?

LONG);

  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/mob8.c" : 1,
  __DIR__"npc/mob7.c" : 1,
]));
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"c1",
  "south" : __DIR__"c5",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
