// Room: /open/capital/room/r72.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
���ھ��ǵ�������, ���ϲ�ʱ�п�����, ��ʾ�������ֽ�ͨ��
��æ��·�������Ǿ�����, ������������·�Ķ����Ǿ���ֱ�����
��˾, ר�Ÿ���ƽ��Ľ������, �������������һ�빲������Ļ�,
�뵽����˾�Ǽǽ��ɡ�

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"r34",
  "north" : __DIR__"r71",
  "west" : __DIR__"soldier_room",
  "east" : __DIR__"merry",
]));
  set("outdoors", "/open/capital");

  setup();
}
