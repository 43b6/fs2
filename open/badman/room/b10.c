// Room: /open/badman/room/b10
inherit ROOM;

void create ()
{
  set ("short", "���˹ȱ����");
  set ("long", @LONG
�㷢�ֱ�������Ⱥ�����������ƺ����Ͻ����ֵĶ࣬��Ϊ���
�Ƕ��˹��ճ���������ģ�����ȫ���˹ȵĳԺ����֡�����������
�����ɵı��飬���������Ҳ�����滺����������������Է���
����úõĹ�һ�䡣
    �㿴��������һ��С������
    ��������������졣

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"r2",
  "west" : __DIR__"b11",
  "east" : __DIR__"b9",
]));
  set("outdoors", "/open/badman");

  setup();
}
