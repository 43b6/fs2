// Room: /open/capital/room/r20.c

inherit ROOM;

void create()
{
	set("short","����㳡");
	set("long",@LONG
һ�����͵Ĺ㳡������ȥ��һ���ܿ�ĳ�����������ȥ����һ��
��С�ĺ�ͬ���㳡������ǰ���ҳ��ĵ��񣬵�������Χ����С�������
�׳����С���Ȼ�Ȳ��϶��У�����ȥ��Զ�����������������������̯
�ӣ�һ��ȫ�����ǣ������ǵ��в��ֵģ�ǧ��ٹ֣����ڿ��ŶȾͼ���
�����ˡ�

LONG);

  set("outdoors", "/open/capital" );

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r21",
  "north" : __DIR__"r19",
]) );

  set("gopath", "north" );

  setup();
}
