// Room: /u/p/poloer/dragon/stree-3
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һƬ�������֣���ľ���Ķ��ǳ��ĸ��ʣ�����ï�ܵ�Ҷ�ӣ���
���ⶼ��ס�ˣ�ʹ�����￴�����������ġ���ľ��Ķ�������ǰ��
��·��ֻ��������ǰ����

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/mob2.c" : 2,
]));
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"stree-2",
  "south" : __DIR__"stree-4",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
