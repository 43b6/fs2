// Room: /open/gsword/room/nghouse.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����ĳ��ȸ�����ı������Ե��ֿ�Ķ��ˣ������ǽ�������ǵ���
�ɽ��ɵĿ�ɽ��ʦ����ң�ӡ���սȺħ���龰��������ʦү����Ʈ����һ
ֻľ�������о���ʹ����˻�Բ���⣬���������������������и���㳡
��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/gsword/room/g1-3.c",
  "north" : "/open/gsword/room/g2-12.c",
]));

  set("light_up", 1);

  setup();
}
