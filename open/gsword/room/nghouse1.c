// Room: /open/gsword/room/nghouse.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����ĳ��ȸ�����ı������Ե��ֿ�Ķ��ˣ������ǽ�������ǵ���
�ɽ��ɵĿ�ɽ��ʦ--��ң��--��սȺħ���龰��������ʦү����Ʈ��
��һֻľ�������о���ʹ����˻�Բ���⣬����������������
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room/nghouse2.c",
  "south" : "/open/gsword/room/north",
]));

  set("light_up", 1);

  setup();
}
