inherit ROOM;
void create() {
	set( "short", "��˼��" );
	set( "owner", "mad" );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room65.c",
		"east"      : "/open/clan/13_luck/room/room63.c",
		"out"       : "/open/clan/13_luck/room/room61",
		"down"      : "/open/clan/13_luck/room/room116",
		"north"     : "/open/clan/13_luck/room/room64",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
ɱ��ħ�����ഫ������ɽ�ɽ��صĿ�ʯ��������ħˮ�����Ƴ�,ƽʱ�Ǻ�������ɱ��
���Գ�����ɱ������,һ������Ҫ�õ�������ս��������ϯ���������,��Ҫð�ű�׷ɱ
��Σ��,С�������ص��������е�ɱ���ռ�һЩ��ָ,�ղ���������Ϊ����
LONG);
	setup();
	replace_program(ROOM);
}
