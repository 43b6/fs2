// Room: /open/badman/room/b11
inherit ROOM;

void create ()
{
  set ("short", "���˹ȱ��ؽ�");
  set ("long", @LONG
�㷢�ֱ�������Ⱥ�����������ƺ����Ͻ����ֵĶ࣬��Ϊ���
�Ƕ��˹��ճ���������ģ�����ȫ���˹ȵĳԺ����֡�����������
�����ɵı��飬���������Ҳ�����滺����������������Է���
����úõĹ�һ�䡣

LONG);

   set("objects", ([ /* sizeof() == 1 */
  // "/open/badman/npc/blind.c" : 1,
]));
  set("outdoors", "/open/badman");
   set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"b12",
  "east" : __DIR__"b10",
]));

  setup();
}
