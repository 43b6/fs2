inherit ROOM;
void create() {
	set( "short", "���ֵ�" );
	set( "owner", "biwem" );
	set( "object", ([
		"amount3"  : 200,
		"file4"    : "/open/doctor/pill/human_pill",
		"file3"    : "/open/doctor/pill/gnd_pill",
		"file1"    : "/open/doctor/pill/sky_pill",
		"file2"    : "/open/killer/obj/s_pill",
		"file10"   : "/open/doctor/pill/gnd_pill",
		"amount10" : 36,
		"amount2"  : 5,
		"amount4"  : 201,
		"amount1"  : 514,
	]) );
	set( "build", 12237 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room278",
	]) );
	set( "long", @LONG
������·��̤������֮�ء���ɣ���£�һ����ƽ֮�¡�
��ֽ�������������׺��档һ����������ʦɱ������
��Ȫ���ݣ�����̸�����ס���Ŀãã���б������ζ��
�ν��Ĺˣ��ϳ�ǿ�̺���������Գ�������ҹ���¡�
�������䣬Ī���ж����ᡣ������Ҷ����������Ѫ׹��
LONG);
	setup();
	replace_program(ROOM);
}
