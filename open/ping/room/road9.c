// Room: /open/ping/room/road9
inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
  set ("long", @LONG
������ƽ�ϳǵ�סլ��,��ȺҲϡ�ٶ���,һƬ�����������
���ڿ�����,��֪��˭�ҵ�С�����������������,һֻҰ����·
��������,ע��������������ο�.
LONG);

  set("objects", ([ /* sizeof() == 1 */
"/open/center/npc/dog" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"road11",
  "north" : __DIR__"road8",
  "west" : __DIR__"soldier1.c",
  "east" : __DIR__"inn.c",
]));

  setup();
}
