// Room: /open/gsword/room/nghouse.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�ɽ��ɵĴ��� ,�������ڸ����� ,�����ǽ�������ǵ����ɽ��ɵ�
��ɽ��ʦ--��ң��--��սȺħ���龰��������ʦү����Ʈ����һֻľ����
���о���ʹ����˻�Բ���⣬�������������������ߵ���¥���ݾ����ɽ�
�������� -- ������ .�ϱ����ƹܲ�����֧���ʷ� .

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/gsword/room/g2-16.c",
  "south" : "/open/gsword/room/g2-17.c",
  "east" : "/open/gsword/room/g2-14.c",
  "enter" : "/open/gsword/room/g3-2.c",
]));

  set("light_up", 1);

  setup();
}
