// Room: /open/ping/room/road6.c
inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
  set ("long", @LONG
������ƽ�ϳǵ�����,ÿ�����˵Ľ���,��������׵����,
Ȼ������İ����ƺ���ϰ�ߵ�ǹ�¹�����, ��Ȼ���е�������
,����Ϸ����Ǿ�Ӫ,פ���سǵĴ��.
�����ƺ���һ��ɭ��,�������е���ɭ!
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"road10",
  "north" : __DIR__"m2",
  "west" : __DIR__"wdoor.c",
  "east" : __DIR__"road5",
]));
  set("outdoors", "/open/ping");

  setup();
}
