// Room: /open/main/room/r28.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
����������վ��������һ����ֱ�ĵ�·��������
һ��̨�أ������û��·������ȥ���Ϸ����Ǻ�ب��
½�������ɽɽ����һ���ݣ�׳�۵ľ�ɫ����̾Ϊ��
ֹ����ϧ�Ĵ����Ҳ���·�����ϡ�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"r27",
  "east" : __DIR__"r29",
]) );
  set("outdoors", "/open/main" );     
  setup();
}
