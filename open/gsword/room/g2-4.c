// Room: /open/gsword/room/nghouse.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�ɽ��ɵĴ��� ,�������ڸ����� ,�����ǽ�������ǵ����ɽ��ɵ�
��ɽ��ʦ--��ң��--��սȺħ���龰��������ʦү����Ʈ����һֻľ����
���о���ʹ����˻�Բ���⣬�������������������ȳʶ������� ,���߾�
ͷ��һƬҩ�� ,�Ϸ�Ϊ�ɽ�ѧ������ -- ����� .������ҩ�� .

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/gsword/room/g2-2.c",
  "west" : "/open/gsword/room/g2-5.c",
  "south" : "/open/gsword/room/g2-3.c",
  "east" : "/open/gsword/room/g2-1.c",
]));

  set("light_up", 1);

  setup();
}
