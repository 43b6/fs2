// Room: /u/p/poloer/dragon/bc2
inherit ROOM;

void create ()
{
  set ("short", "��ʯС·");
  set ("long", @LONG
����һ����̫ƽ����С·��������һЩС��ʯ�������С·����
û��ʲô�ر�֮���������ߵ�����е��ǳ��Ŀֲ������ǸϿ��뿪��
��

LONG);

  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"bc1",
  "east" : __DIR__"bc3",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
