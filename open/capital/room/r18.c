// Room: /open/capital/room/r18.c

inherit ROOM;

void create ()
{
  set ("short", "�ֵ�");
  set ("long", @LONG
�����������ţ������ֱ���һ�����Ӻܳ��ĸ�ǽ����ɺ����ĳ��
ɫ��ǽ�����н��ɫ�������ߣ��൱���ɡ�������ⲻ֪�����ǻ���
�˼ҵĺ�ۡ��

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"r16",
  "south" : __DIR__"r19",
  "east" : __DIR__"ke1.c",
]));
  set("gopath", "north");

  setup();
}
