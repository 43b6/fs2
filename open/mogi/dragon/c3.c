// Room: /u/p/poloer/dragon/c3
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
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"c1",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
