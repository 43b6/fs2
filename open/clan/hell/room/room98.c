inherit ROOM;
void create() {
	set( "short", "$HIC$���Ʒ�$NOR$" );
	set( "owner", "creed" );
	set( "build", 10104 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room99",
		"west"      : "/open/clan/hell/room/room97",
	]) );
	set( "long", @LONG
��������ֻ���Լ�����һ��ͻ����ɽ���Ե�������,
ֻ��������֨֨�����ţ�����Ҫ���Ѱ�, ��ʱ�㿴������
�м����������治֪ͨ���δ�, ��������������������
ȥ, �������������������??
  ��[33m��˧[0m������(Master kal)
  ��[36mа��[0m��ʯ֮��(Shen)

LONG);
	setup();
	replace_program(ROOM);
}
