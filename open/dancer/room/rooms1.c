// Room: /open/dancer/room/rooms1.c :cgy

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
ҹ��С�������ȣ������ӵ�ҹ�ε��ã����Ե�ǽ�ϵ�����
����������������������̬�����㲻��פ����ͣ����в��ɰ�
�޵����ߵ����漼�ɣ�����̾Ϊ��ֹ�����Ͽɵ����賡��


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/dancer/room/start.c",
  "south" : "/open/dancer/room/rooms2.c",
]));

  set("light_up", 1);

  setup();
}
