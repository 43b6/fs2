// Room: /u/p/poloer/dragon/c7
inherit ROOM;

void create ()
{
  set ("short", "�����Ⱥ��");
  set ("long", @LONG
�����˺�ξͱ������С�ģ�Ҳ����Խ�����׶�Ĺ�����������
ͻȻ�Ƚ����������������Կ���ЩС�����ˣ����������������յе�
������?

LONG);

  set("evil", 1);
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"c5",
  "south" : __DIR__"c9",
  "east" : __DIR__"c9",
]));
  set("outdoors", "/u/p");
  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/mob8.c" : 2,
  __DIR__"npc/mob7.c" : 2,
]));
  set("no_auc", 1);
  set("no_transmit", 1);

  setup();
}
