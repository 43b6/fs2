inherit ROOM;
void create() {
	set( "short", "���黨԰" );
	set( "build", 10209 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room4",
	]) );
	set( "long", @LONG

    ����ǻƳǴ���Եļ��黨԰��������۹�ȥһ��Ƭ�Ļ����ݲݣ�
ƽ��ʱ���Կ���һЩ�������ǹ�Ů�����ͻ���Ϸ�������۷��໥���ޣ�
�����������Ĵ�ٹ��ˣ������Ļ�ŭ�ţ�����ֻ��һ����ɴ����ԼԼ
���Կ�������ֻ����С�ɰ�����Ů�ǣ��ǵ�Զ�۵������������ġ�

LONG);
	setup();
	replace_program(ROOM);
}
