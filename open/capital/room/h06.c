// Room: /open/capital/room/h06.c

inherit ROOM;

void create ()
{
  set ("short", "��ȵ��ͬ");
  set ("long", @LONG
�����ȵ��ͬ, ��������ҡҷ, �Ĵ���ɨ�ĸɸɾ�������ϸ����һ
��, �������ƺ�������һ��Ũ����ҩζ, ��ʱ��ŷ���ԭ���ϱ߾���һ
��ҩ��, ������д���ǡ�����ҩ�ꡱ, ��ͷ���в���������ץҩ������
��

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"medical",
  "west" : __DIR__"r67",
  "east" : __DIR__"h08",
]));
  set("outdoors", "/open/capital");

  setup();
}
