// Room: /u/p/poloer/dragon/stree-5
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һƬ�������֣���ľ���Ķ��ǳ��ĸ��ʣ�����ï�ܵ�Ҷ�ӣ���
���ⶼ��ס�ˣ�ʹ�����￴�����������ġ���ľ��Ķ�������ǰ��
��·��ֻ��������ǰ����

LONG);

  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"key_room",
  "east" : __DIR__"stree-4",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
