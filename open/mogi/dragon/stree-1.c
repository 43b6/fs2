// Room: /u/p/poloer/dragon/stree-1
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һƬ�������֣���ľ���Ķ��ǳ��ĸ��ʣ�����ï�ܵ�Ҷ�ӣ���
���ⶼ��ס�ˣ�ʹ�����￴�����������ġ���ľ��Ķ�������ǰ��
��·��ֻ��������ǰ����

LONG);

  set("objects", ([ /* sizeof() == 3 */
  __DIR__"npc/mob1.c" : 1,
  __DIR__"npc/mob2.c" : 1,
  __DIR__"npc/mob3.c" : 1,
]));
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"stree",
  "east" : __DIR__"stree-2",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
