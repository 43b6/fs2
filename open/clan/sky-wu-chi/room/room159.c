inherit ROOM;
void create() {
	set( "short", "$HIC$��$NOR$������$HIC$��$NOR$С��" );
	set( "owner", "srat" );
	set( "light_up", 1 );
	set( "build", 10000 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room24",
	]) );
	set( "long", @LONG
С�¼���ǿ�ķ����Ҿ����ڴ��ˣ�����ķ�����Ϊ����С
�������õ��ģ����Ը��Ե�������Ҫ������ֻ�д���ֵʱ��
��������ƽ���Ǻ����õ��ģ����ﲻ����С�¹��������ĵط�
֮һ�����ǲ����ñ������Ľ��ء�������Ȼ�����������ʱ��
����������

LONG);
	setup();
	replace_program(ROOM);
}
