// Room: /open/capital/room/r45.c

inherit ROOM;

void create()
{
	 set("short","�����۵�");
	set("long",@LONG
�Ƕ��ĳ�������Ϊ�˱��ھ��ӿ���ͨ�ж��衣�����̵�ʯ���൱
����������ྫ�ɵĻ��ƣ���ʨͷ����˫������ͼ����������Ѿã���
�г���������ѹ��Ե�ʣ����ʯ�嶼�����Ѻۡ�
   
LONG);
  set("outdoors", "/open/capital" );
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r44",
  "north" : __DIR__"r46",
]) );

  set("gopath", "south" );

  setup();
}
