inherit ROOM;
void create() {
	set( "short", "��" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "build", 10034 );
	set( "owner", "holeman" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room298",
	]) );
	set( "long", @LONG
����������ÿֻ����������õĻ������ܵ����Ƶ���
�ˣ����ǿ���������Ļ����Լ�ÿֻ������õĽ���״̬
�Ϳ���֪�������ж��������չ���Щ���벻�����������
�����ڵ����ϳ��������������ƥ�������Լ��������ĵá�
������Щ��׳�����ս�����ڴ˵������������˲�����һ
��δ֪��ս����
LONG);
	setup();
	replace_program(ROOM);
}
