inherit ROOM;
void create() {
	set( "short", "װ����" );
	set( "owner", "zxcv" );
	set( "light_up", 1 );
	set( "build", 11442 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room140",
	]) );
	set( "long", @LONG
�����ǺٺٺǺǷ�װ���ɵط�,�����ڷ��źٺٺǺ�ƽʱ����ʱ������װ��,��Ȼ�����ϵȻ�,��ȴ���úٺٺǺ�������,������ź���,����֮צ,����ѥ,���˿��.ħ����,��֮����.���м�,...............�ȵ�,���������и��ʺϺٺٺǺǴ���װ����ָ��
LONG);
	setup();
	replace_program(ROOM);
}
