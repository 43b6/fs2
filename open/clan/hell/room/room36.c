inherit ROOM;
void create() {
	set( "short", "$HBCYN$�쾧���$NOR$" );
	set( "light_up", 1 );
	set( "build", 10349 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room29",
	]) );
	set( "long", @LONG
��˵��������õ�װ��,�羧װ��ȫ��,��Ȼ�����������Ƶ�,����ʵ��������
������˵,��ʵҲ�ǲ���ķ���װ��.���԰���ƽʱ�ر�׼�����״���װ��,���ڴ˽�
����,�ð�����͵�����ǽ�����ʱ�����������ȡ,���Ķ��˿��Ű����Ķ���,ϣ��
����ʹ��������Զ��黹

LONG);
	setup();
	replace_program(ROOM);
}
