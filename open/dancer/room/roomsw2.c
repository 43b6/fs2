// Room: /open/dancer/room/roomsw2.c :cgy

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
ҹ��С�������ȣ����߿ɵ����賡���ϱ����Ե�ǽ�ϵ���
����������ĵ������㲻��פ����ͣ������������¸���Ҫ
���ϵı���Ʒ�Ļ��͵��ǰ�....


LONG);
  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/dancer/room/roomsw1.c",
  "west" : "/open/dancer/room/roomsw3.c",
]));

  set("light_up", 1);

  setup();
}
