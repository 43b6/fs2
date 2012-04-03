inherit ROOM;
void create() {
	set( "short", "������" );
	set( "object", ([
		"amount1"  : 3,
		"amount3"  : 37,
		"file1"    : "/open/ping/obj/poison_pill",
		"file3"    : "/open/doctor/pill/gnd_pill",
	]) );
	set( "build", 10035 );
	set( "owner", "jsa" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room186",
		"east"      : "/open/clan/sky-wu-chi/room/room200.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�������������Ѷ�ȥ������ʢ���Ļ���������˿
ɢ�ŵ������㣻��������ɫ����������ζ�ҷ���ʱ����
�����Ŵ�����֦Ҷ���������f�������֣�����Ȼ���Ũ
���ӯ���������������ղ���ʱ���С����������Ⱦ��
֮���Ƶĺɻ�����������ô�ĸ���ʥ�࣬���µ������
ʱ��̽��ͷ�����������Ǹ�����ĵط���
LONG);
	setup();
	replace_program(ROOM);
}
