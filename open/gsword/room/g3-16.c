// Room: /open/gsword/room/g3-15.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����ͨ���ɽ������޾ӵ�ľ������, ���������������ĳ�����, �е�ֻ��
�����û���, �ͺ���Ĺ��ߡ������������Ժ�֮�޾�, ��������������֮�޾� ,
��Ȼ���Ƕ�æ���Ը�������, ���ٻ����޾����������ε� .

LONG);

  set("exits", ([ /* sizeof() == 4 */
    "west" : "/open/gsword/room/g3-22.c",
    "north" : "/open/gsword/room/g3-15",
    "south" : "/open/gsword/room/g3-17",
    "east" : "/open/gsword/room/g3-21.c",
]));

  set("light_up", 1);

  setup();
}
