// Room: /open/main/room/m23.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������һ�����ʵ�ɽ, ��ȫ�Ҳ���·������ȥ, ��˵��ʱ����
���˳�û, ���г��˽бʼ�ɽ֮��, ����һ�����ƽз�����, ����
��һ��ʯͷ��һ�����Ľ�ӡ, ��Ϊ�ɼ���, ֻ������ֻ�Ǵ�˵��
��, ����û����ȥ��, ����������ĸ�Ե��?!
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"m15",
  "east" : __DIR__"r32",
  "south" : __DIR__"s25",
  "west" : __DIR__"house.c",
]));
  set("outdoors", "/open/main");

  setup();
}
