// Room: /open/wu/room/school18
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����������ݶ�¥���ã��ĸ����䶼�����Ż�ѣ��������յõƻ�ͨ����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/wu/room/school15",
  "north" : "/open/wu/room/school19",
]));
  set("light_up", 1);

  setup();
}
