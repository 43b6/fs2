inherit ROOM;
void create() {
	set( "short", "�ݿɵ���" );
	set( "owner", "necker" );
	set( "build", 10434 );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
һ�����ӷ���������ӵ�������
�����沢����һ��������...�����Ƿ���һ�ѹ�
������������Ҫ��ȥ����һ�ѹ�...�������ǰ�ʲô��...
�����߽�һ�Ʋŷ������ǰѰ�����
��������ù���Ȼ����������...��ʱͻȻ����ʮ�Ѽ�������˹���...
ԭ����ѹ�ֻ�Ǹ�����...�ǲ����ǰ����Ļ��ذ���...
LONG);
	setup();
	replace_program(ROOM);
}
