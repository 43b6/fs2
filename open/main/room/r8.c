// Room: /open/main/room/r8.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
	set( "build", 10 );
  set ("long", @LONG
���������Կ����ϱ߸���ֱ���ıʼ�ɽ, ��������ǧ�����
ɽ, ��˵��, ��ɽ�����н��ɳ�û, ��������·�ϵ���, �������
���Ž��ɽ������¼�������, Ҳ������Ϊ��Ѱ��, ��֮, ��������
���ð�����, ����_����_��Ȼ�ܿ�, ��������Ǳ���̧ȥ�ֵ�ģ��
����. ��·�ڴ���ͨ���������Ϸ�.
LONG);

 
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"m1",
  "south" : __DIR__"r11",
  "west" : __DIR__"f10",
  "east" : __DIR__"r9",
]));

  setup();
}


