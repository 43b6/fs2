// Room: /open/dancer/room/rooms4.c :cgy
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
ҹ��С�������ȣ������ӵ����賡�����Ե�ǽ�ϵ�����
����������������������̬�����㲻��פ����ͣ����в��ɰ�
�޵����ߵ����漼�ɣ�����̾Ϊ��ֹ�����Ͽɵ����أ��뿪ҹ��
С����

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/dancer/room/rooms3.c",
  "south" : "/open/dancer/room/rooms5.c",
]));

  set("light_up", 1);

  setup();
}
