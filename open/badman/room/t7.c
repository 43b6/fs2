// Room: /open/badman/room/t7
inherit ROOM;

void create ()
{
  set ("short", "�ص�");
  set ("long", @LONG
�����д���һ˿Ѫ��ζ������Ӧ�ÿ쵽��ͷ�ˡ�ǰͷ�Ծ���һ
Ƭ��ڣ��������ĳ��棬������ȷ���ڰ�����ĳ���������ڿ�����
����

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/badman/room/tigerhole",
  "west" : "/open/badman/room/t3",
]));

  setup();
}
