// Room: /open/capital/room/r27.c

inherit ROOM;

void create()
{
	set("short","����۵�");
	set("long",@LONG
�����ĳ�������Ϊ�˷��������������ͨ���صؿ��ٵ�ʯ����
��·���൱������һ���ͬ�����屶���࣬����ʮ����ǰ���������
����ʱ���������������۵����ƣ��;����������ѡ�·���������Ŵ���
�������ǺͳǶ������۵�Ψһ�Ĳ�ͬ��

LONG);

  set("outdoors", "/open/capital" );

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"r28",
  "north" : __DIR__"r26",
]) );

  set("gopath", "north" );

  setup();
}
