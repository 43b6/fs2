// Room: /u/p/poloer/dragon/a11-5
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�߽�һ����ԭ������ͨ��һ��ɭ��ѽ���㲻����̾�����Ǳ�Ҳ����ѽ��
ǰ������һ�����֡�

LONG);

  set("light_up", 1);
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"a11-4",
  "enter" : __DIR__"stree",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
