// Room: /open/badman/room/b13
inherit ROOM;

void create ()
{
  set ("short", "���˹ȱ�����");
  set ("long", @LONG
�㷢�ֱ�������Ⱥ�����������ƺ����Ͻ����ֵĶ࣬��Ϊ���
�Ƕ��˹��ճ���������ģ�����ȫ���˹ȵĳԺ����֡�����������
�����ɵı��飬���������Ҳ�����滺����������������Է���
����úõĹ�һ�䡣

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"b7",
  "north" : __DIR__"b12",
]));
  set("outdoors", "/open/badman");

  setup();
}
