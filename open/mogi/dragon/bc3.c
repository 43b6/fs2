// Room: /u/p/poloer/dragon/bc3
inherit ROOM;

void create ()
{
  set ("short", "��ʯС·");
  set ("long", @LONG
����һ����̫ƽ����С·��������һЩС��ʯ�������С·����
û��ʲô�ر�֮���������ߵ�����е��ǳ��Ŀֲ������ǸϿ��뿪��
��

LONG);

  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/mob5.c" : 1,
  __DIR__"npc/mob4.c" : 1,
]));
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"c1",
  "west" : __DIR__"bc2",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
