// Room: /open/main/room/r15.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", "	���ﱱ����һƬ��ɭ�֣��Ϸ�����һ���޼ʵĲ�ԭ��
	����������ȥ�������ţ�Ӧ�þ������������ģ�����
	�ĳ�����ˡ�

");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s16",
  "west" : __DIR__"r14",
  "north" : __DIR__"f15",
   "east" : "/open/capital/room/D01",
]) );

  set("outdoors", "/open/main" );


  setup();
}
