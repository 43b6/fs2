// Room: /open/wu/room/school16
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����������ݶ�¥���á�������������ȵĽ��䣬�����Ե���һ������
����������͸��һЩ�ƹ⣬�㲻�ɵ���ȥ��һ��������
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/wu/room/school15",
  "east" : "/open/wu/room/school17",
]));

  set("light_up", 1);
  setup();
}
