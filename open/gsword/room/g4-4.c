// Room: /open/gsword/room/g4-4.c
inherit ROOM;

void create ()
{
  set ("short", "��¥��¥");
  set ("long", @LONG
�������ɽ��ɵ���¥��һ����ͭ������������Ϸ��������и�С¥��
���϶�¥��ÿ���ɽ��ɳ����òͣ������ʱ����ͭ���ӵ����죬����
����ȫɽ������Զ�������гǣ�Ҳ�����������������

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : "/open/gsword/room/g4-5.c",
  "north" : "/open/gsword/room/g5-10",
]));

  set("light_up", 1);

  setup();
}
