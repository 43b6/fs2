// Room: /open/badman/room/b12
inherit ROOM;

void create ()
{
  set ("short", "���˹ȱ�����");
  set ("long", @LONG
�㷢�ֱ�������Ⱥ�����������ƺ����Ͻ����ֵĶ࣬��Ϊ���
�Ƕ��˹��ճ���������ģ�����ȫ���˹ȵĳԺ����֡�����������
�����ɵı��飬���������Ҳ�����滺����������������Է���
����úõĹ�һ�䡣

������������é�ݴ���ļ�ª���ݡ�

LONG);

  set("objects", ([ /* sizeof() ==  2 */
  "/open/badman/npc/li_three.c" : 1,
  "/open/badman/npc/vagabond" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"b20",
  "south" : __DIR__"b13",
  "east" : __DIR__"b11",
]));

  setup();
}
