// Room: /u/p/poloer/dragon/c1
inherit ROOM;

void create ()
{
  set ("short", "�����Ⱥ��");
  set ("long", @LONG
�����˺�ξͱ������С�ģ�Ҳ����Խ�����׶�Ĺ�����������
ͻȻ�Ƚ����������������Կ���ЩС�����ˣ����������������յе�
������?

LONG);

  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"bc3",
  "south" : __DIR__"c4",
  "west" : __DIR__"c2",
  "east" : __DIR__"c3",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
