// Room: /open/center/room/drug.c

inherit ROOM;

void create ()
{
  set ("short", "ҩ��");
  set ("long", @LONG
����һ̤�����ҩ��, һ��Ũ���ҩ��ζ�����˱Ƕ���, �ڵ�����ұ�
�ѷ���һ�Ѷ���δ���������ҩ��, ��ߵĵ��ϰ���������æ���к�����,
�������Լ����Щ��ֵ�����, ������ѧͽ���������Ż����ڴ���ҩ�İ�!
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/center/room/road2",
]));

  set("light_up", 1);

  setup();
}
