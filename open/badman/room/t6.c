// Room: /open/badman/room/t6.c

inherit ROOM;

void create ()
{
  set ("short", "�ص�");
  set ("long", @LONG
���ߵ��˵ص��ľ�ͷ��΢���Ĺ��ߴӶ������˽�����������Ȼ
�޷����㿴�������ܣ����ǸϿ����뿪�����ɭ�ĵص��ɡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/badman/room/t5",
  "out" : "/open/badman/room/b0",
]));

  setup();
}
