inherit ROOM;
void create() {
	set( "short", "$HIW$��ӡ֮��$NOR$" );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/open/mogi/castle/obj/fire_book",
	]) );
	set( "light_up", 1 );
	set( "build", 11218 );
	set( "exits", ([
		"out"       : "/open/clan/ou-cloud-club/room/room163.c",
		"west"      : "/open/clan/ou-cloud-club/room/room158.c",
		"north"     : "/open/clan/ou-cloud-club/room/room222.c",
		"ghost"     : "/open/clan/ou-cloud-club/room/room264.c",
	]) );
	set( "long", @LONG

    ���Ƶ�֧��,���ϵĽ���,��ʾ�����������Զ��ʷ�Ĺų�,�ɳ�������
�ż����Ļ��̶��ж�,��ʾ�˳Ǿ��Ƿ�ӡ���Ϲ������ķ�ӡ֮��,��˵ǧ��ǰ
����ʱ������������ħ��ս��,�����ս��ĩ�ڱ�ħ��ȫ�湥��,�ֻ��ӳ�
������,�����˼��������Ĵ˴�,�Գ���ս�������,������ʥ�޵�����,
������������ص�ʮ������,���ʮ������֮��,������תս��,�����������
�Ĵ��,ս��,����ʮ��������������,�����ٶ�ʹ��,���ӡ�ڴ˳�...

LONG);
	setup();
	replace_program(ROOM);
}
