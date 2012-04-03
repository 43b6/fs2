// Room: /open/badman/room/b19
inherit ROOM;

void create ()
{
	set("short", "���˹��Ͻ�");
	set("long", "���˹ȵ��Ͻ֡����������ľ��񣬺��������������Ǹ�������
��֮�أ������˶࣬���˵�����ȴ���Ǹ���Į�ı��飻�·��κ���
���ǲ��ɼ����ģ�����������˲������䡣");

  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/dog.c" : 1,
  "/open/badman/npc/boy.c" : 1,
]) );

  set("outdoors", "/open/badman" );

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"b18",
  "north" : __DIR__"b7",
]) );


  setup();
}
