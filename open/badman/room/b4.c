// Room: /open/badman/room/b4
inherit ROOM;

void create ()
{
  set ("short", "ʮ��·��");
  set ("long", @LONG
���ߵ���һ��ʮ��·�ڣ������ֵ��������ϱ�����������ȥ��
������ֱ��ͨ�����˹����Ĵ�����һ·���ƺ��䱸ɭ�ϵ�����
�����Ǳ��Ҵ��ĺá�

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"b5",
  "north" : __DIR__"b8",
  "south" : __DIR__"b14",
  "east" : __DIR__"b3",
]));
  set("outdoors", "/open/badman");

  setup();
}
