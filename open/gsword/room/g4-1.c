// Room: /open/gsword/room/nghouse.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�ɽ��ɵĴ��ȣ��������ڸ����ã������ǽ�������ǵ����ɽ��ɵ�
��ɽ��ʦ����ң�ӡ���սȺħ���龰��������ʦү����Ʈ����һֻľ����
���о���ʹ����˻�Բ���⣬�������������������ȳ��ϱ������ϱ�Ϊ
�ɽ����ӵ�����������ֱ�߿ɴ｣ʿ�����ܱ��� �� �������
 
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room/g4-2.c",
  "south" : "/open/gsword/room/g2-8.c",
]));

  set("light_up", 1);

  setup();
}
