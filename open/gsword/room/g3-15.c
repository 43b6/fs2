// Room: /open/gsword/room/g3-15.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����ͨ���ɽ������޾ӵ�ľ������, ���������������ĳ�����, �е�ֻ��
�����û���, �ͺ���Ĺ��ߡ��������ɽ�һֻ�� --- ��˫˫���޾�, ����������
����������ң֮�޾� , ��Ȼ���Ƕ�æ���Ը�������, ���ٻ����޾����������ε� ..

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/gsword/room/g3-24.c",
  "north" : "/open/gsword/room/g3-12",
  "south" : "/open/gsword/room/g3-16.c",
  "east" : "/open/gsword/room/g3-23.c",
]));

  set("light_up", 1);

  setup();
}
