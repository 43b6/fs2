// Room: /open/gsword/room/nghouse.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�ɽ��ɵĴ��ȣ��������ڸ����ã������ǽ�������ǵ����ɽ��ɵ�
��ɽ��ʦ����ң�ӡ���սȺħ���龰��������ʦү����Ʈ����һֻľ����
���о���ʹ����˻�Բ���⣬��������������������Ϊ�ͷ����������ϱ�
���죬����Ϊ���ã��ϱ�Ϊ��ʿ�����ܱ��� �� �������

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/gsword/room/g5-7.c",
  "north" : "/open/gsword/room/g5-4.c",
  "south" : "/open/gsword/room/g5-2.c",
  "east" : "/open/gsword/room/g5-6.c",
]));

  set("light_up", 1);

  setup();
}
