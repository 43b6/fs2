// Room: /open/gsword/room/nghouse.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�ɽ��ɵĴ��ȣ��������ڸ����ã������ǽ�������ǵ����ɽ��ɵ�
��ɽ��ʦ����ң�ӡ���սȺħ���龰��������ʦү����Ʈ����һֻľ����
���о���ʹ����˻�Բ���⣬�����������������������ϱ����죬����Ϊ
���ã��ϱ�Ϊ��ʿ�����ܱ��� �� �������
 
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room/g5-3.c",
  "south" : "/open/gsword/room/g5-1.c",
]));

  set("light_up", 1);

  setup();
}
