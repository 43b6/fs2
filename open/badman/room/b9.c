// Room: /open/badman/room/b9
inherit ROOM;

void create ()
{
  set ("short", "���˹ȱ�����");
  set ("long", @LONG
�㷢�ֱ�������Ⱥ�����������ƺ����Ͻ����ֵĶ࣬��Ϊ���
�Ƕ��˹��ճ���������ģ�����ȫ���˹ȵĳԺ����֡�����������
�����ɵı��飬���������Ҳ�����滺����������������Է���
����úõĹ�һ�䡣
    ���������ߵķ��䴫������ߺ�����������кܶ��˾ۼ����ǡ�
    ������������Ϸ����졣

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/rogue" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"b10",
  "south" : __DIR__"b8",
  "east" : __DIR__"r5",
]));

  setup();
}
