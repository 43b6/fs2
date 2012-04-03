inherit ROOM;
void create() {
	set( "short", "$HIY$Radiohead$NOR$" );
	set( "owner", "devil" );
	set( "light_up", 1 );
	set( "object", ([
		"amount5"  : 1,
		"amount2"  : 1,
		"amount7"  : 20,
		"file10"   : "/open/capital/guard/gring",
		"file3"    : "/obj/gift/xisuidan",
		"file5"    : "/obj/gift/xisuidan",
		"amount8"  : 8,
		"amount10" : 1,
		"file9"    : "/open/killer/headkill/obj/w_dag",
		"amount6"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/killer/headkill/obj/f_dag",
		"file4"    : "/open/sky/obj8/summer_wind",
		"file2"    : "/obj/gift/xisuidan",
		"amount4"  : 1,
		"file6"    : "/open/main/obj/m_cloak",
		"file7"    : "/open/doctor/pill/gnd_pill",
		"file8"    : "/open/fire-hole/obj/p-pill",
		"amount9"  : 1,
		"amount1"  : 1,
	]) );
	set( "build", 10024 );
	set( "exits", ([
		"down"      : "/open/clan/ou-cloud-club/room/room251",
		"out"       : "/open/clan/ou-cloud-club/room/room139.c",
		"up"        : "/open/clan/ou-cloud-club/room/room141.c",
	]) );
	set( "long", @LONG

û�д�ͳý��Ĺ��Ȱ�װ����̨˾���������������Ʒ���ĺ�ҡ��
ʵ���ַ磬ֱ��֤��������Ϊ���ţ��������ҡ�������ˡ��Ĵ���
ʵ����ʵ��������Kid A ��ͬʱ����̨˾�������д�˶�ʮ������
Ʒ����������ʮ����¼��Kid A �С�ʱ���������࣬�����ִ�����
��ѡʮһ����Ʒ�������˵�����ר��Amnesiac������ͬʱ�ڵĴ���
��Amnesiacȴ��Kid A��������������졢�Ļ��ĺ�ҡ�������ͬ�� 

LONG);
	setup();
	replace_program(ROOM);
}
