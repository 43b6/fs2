// Room: /open/gsword/room/nghouse.c
inherit ROOM;

void create ()
{
   set ("short", "����");
  set ("long", @LONG
����ĳ��ȸ�����ı������Ե��ֿ�Ķ��ˣ������ǽ�������ǵ���
�ɽ��ɵĿ�ɽ��ʦ����ң�ӡ���սȺħ���龰��������ʦү����Ʈ����һ
ֻľ�������о���ʹ����˻�Բ���⣬���������������������������ȣ�
ͨ�����������ң�
��
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/gsword/room/g1-5.c",
  "south" : "/open/gsword/room/g1-1.c",
  "north" : "/open/gsword/room/g1-4.c",
]));

  set("light_up", 1);

  setup();
}
