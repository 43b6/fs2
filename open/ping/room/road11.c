// Room: /open/ping/room/road11
inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
  set ("long", @LONG
������ƽ�ϳǵ�סլ��,��ȺҲϡ�ٶ���,һƬ�����������
���ڿ�����,��֪��˭�ҵ�С�����������������,һֻҰ����·
��������,ע��������������ο�.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"road12",
  "north" : __DIR__"road9",
]));
  set("outdoors", "/open/ping");

  setup();
  replace_program(ROOM);
}
