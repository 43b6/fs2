inherit ROOM;
void create() {
	set( "short", "miffy ��¥2-7" );
	set( "object", ([
		"amount5"  : 5000,
		"file4"    : "/open/killer/obj/s_pill",
		"file2"    : "/open/killer/obj/s_pill",
		"file5"    : "/open/killer/obj/s_pill",
		"amount4"  : 4000,
		"amount3"  : 2000,
		"file3"    : "/open/killer/obj/s_pill",
		"amount2"  : 5000,
		"file1"    : "/open/killer/obj/s_pill",
		"amount1"  : 2000,
	]) );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "build", 10080 );
	set( "exits", ([
		"southwest" : "/open/clan/sky-wu-chi/room/room321",
	]) );
	set( "long", @LONG
�����Ƕ�������ҩ��,�������ĵ�ҩ������miffy ���������Ѱ�æ�ռ�����
��Ϊ��ҩ������ȡ��,���Ը��Եô˵�ҩ�����ܿɹ�,���ɴ˳�ȥ�ĵ�ҩ
Ҳ���ܹ������������Ĺ���,��������,��˴˴�¥������ҽ��Ҳ���൱֮�߸ߵ�
���������ĵز�...
LONG);
	setup();
	replace_program(ROOM);
}
