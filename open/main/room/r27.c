// Room: /open/main/room/r27.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", "	����������վ��������һ����ֱ�ĵ�·��������
	��̨�أ������û��·������ȥ���Ϸ��Ǻ�ب��
	½�������ɽɽ����׳�۵ľ�ɫ����̾Ϊ��ֹ��


");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/center/room/road4",
  "east" : __DIR__"r28",
]) );
  set("outdoors", "/open/main" );

  setup();
}
