// Room: /open/gsword/room/nghouse.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�ɽ��ɵĴ��� ,�������ڸ����� ,�����ǽ�������ǵ����ɽ��ɵ�
��ɽ��ʦ--��ң��--��սȺħ���龰��������ʦү����Ʈ����һֻľ����
���о���ʹ����˻�Բ���⣬�������������������ȳʶ������� ,������
һ����¥���� ,���������� ,���߾�ͷ��һƬ���� .

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g2-15.c",
  "east" : "/open/gsword/room/g2-10.c",
]));

  set("light_up", 1);

  setup();
}
