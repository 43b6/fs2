// Room: /open/wu/room/school15
inherit ROOM;

void create ()
{
  set ("short", "������ݶ�¥");
  set ("long", @LONG
����������ݶ�¥���ã��ĸ����䶼�����Ż�ѣ��������յõƻ�ͨ����
���������ϸ���һ��ͨ����ͨ���������Ů�ķ���
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/wu/room/school20",
  "north" : "/open/wu/room/school18",
  "east" : "/open/wu/room/school16",
  "westdown" : "/open/wu/room/school8",
]));

  set("light_up", 1);
  setup();
}
