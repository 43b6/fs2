// Room: /open/dancer/room/rooms2.c :cgy
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
ҹ��С�������ȣ������ӵ�ҹ�ε��ã����Ե�ǽ�ϵ�����
����������������������̬�����㲻��פ����ͣ����в��ɰ�
�޵����ߵ����漼�ɣ�����̾Ϊ��ֹ�����Ͽɵ����賡��������
�����߼�ϰ����ѵ��������


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west"  : "/open/dancer/room/roomsw4.c",
  "north" : "/open/dancer/room/rooms1.c",
  "south" : "/open/dancer/room/rooms3.c",
]));

  set("light_up", 1);

  setup();
}
