// Room: /open/gsword/room/nghouse.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�ɽ��ɵĴ��� ,�������ڸ����� ,�����ǽ�������ǵ����ɽ��ɵ�
��ɽ��ʦ--��ң��--��սȺħ���龰��������ʦү����Ʈ����һֻľ����
���о���ʹ����˻�Բ���⣬�������������������ȳʶ������� ,���߾�
ͷ��һƬҩ�� ,���Ϸ�һ������ ,���Ǵ���� .

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g2-6.c",
  "east" : "/open/gsword/room/g2-4.c",
]));

  set("light_up", 1);

  setup();
}
