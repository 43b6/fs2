// Room: /u/u/unfinished/room/is13.c
inherit ROOM;

void create ()
{
  set ("short", "ɳ̲");
  set ("long", @LONG
С���Ķ�����. ���粻ǿ, ɳ̲��������з������, ����ʮ�ֺ�г, ��һ
����Ϣ�ĺõط�. �����з����֮��, �˴���û�������ر������. �����Ѳ���
ɳ̲����, �Ǳ����ʯ���ذ�, ���߸���ֱ�����ұ��Ե��൱�վ�.
LONG);

  set("outdoors", "/u/u");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"is8.c",
  "west" : __DIR__"is12",
]));

  setup();
}
