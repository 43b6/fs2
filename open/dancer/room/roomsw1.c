// Room: /open/dancer/room/roomsw1.c :cgy

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
ҹ��С�������ȣ����������賡���ϱ����Ե�ǽ�ϵ���
����������ĵ������㲻��פ����ͣ������ɵ����¸���
Ҫ���ϵı���Ʒ�Ļ��͵��ǰ�....


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/dancer/room/rooms3.c",
  "west" : "/open/dancer/room/roomsw2.c",
]));

  set("light_up", 1);

  setup();
}
