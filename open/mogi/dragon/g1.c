// Room: /u/p/poloer/dragon/g1
inherit ROOM;

void create ()
{
  set ("short", "ħ����");
  set ("long", @LONG
һ�俴������ΰ�Ľ��������֪Ϊʲô�������ܾ�Ȼ��û�а�
������������ǳ���������ѻ���Ͽշ��Ų��Ҳ�ʱ����Ѿ���ڵ���
��������������ë����Ȼ����ϸ�۲���䷿�ݣ������⾹Ȼ�����˵�
��ͷ������ɵģ����ɫ�Ĵ��Ŷ����з���Ѫд���Ʊ⣬����д��
��ħ��� ��

LONG);

  set("outdoors", "/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"c9",
  "enter" : __DIR__"g2",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
