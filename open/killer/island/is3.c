// Room: /u/u/unfinished/room/is3.c
inherit ROOM;

void create ()
{
  set ("short", "С���ϰ�");
  set ("long", @LONG
С�������϶�, �����Ǹ��ʵ�ʯ��, �����Ǵ�ֻ��ǳ�ĵط�, ��������һƬ
����, �о�ʮ����ɭ. �˵�ʮ�ֿտ�, ���ֻ��Щ�����С��ʯ. �ϱߺ����Ͽ�
�õ�����ͻ���Ľ�ʯ, Ҳ�ѹִ�ֻ�����˳嵽�˵ش��׻����.
LONG);

  set("outdoors", "/u/u");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"is4.c",
  "west" : __DIR__"is2",
]));

  setup();
}
