inherit ROOM;
void create() {
	set( "short", "miffy ��¥2-3" );
	set( "object", ([
		"amount2"  : 50000,
		"file6"    : "/open/killer/obj/hate_knife",
		"file4"    : "/open/killer/obj/hate_knife",
		"file3"    : "/open/killer/obj/hate_knife",
		"file2"    : "/open/killer/obj/hate_knife",
		"amount4"  : 50000,
		"amount5"  : 50000,
		"file7"    : "/open/killer/obj/hate_knife",
		"amount7"  : 50000,
		"amount6"  : 50000,
		"amount3"  : 50000,
		"file5"    : "/open/killer/obj/hate_knife",
	]) );
	set( "build", 10164 );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room321",
	]) );
	set( "long", @LONG
����������ǧ�ź�,������������������miffy ���������Ѱ�æ�ռ�����
��Ϊǧ�ź޵�����ȡ��,���Ը��Եô����������ܿɹ�,���ɴ˳�ȥ������
Ҳ���ܹ������������Ĺ���,ɱ������,��˴˴�¥�����˰�������Ҳ���൱֮�߸ߵ�
���������ĵز�...
LONG);
	setup();
	replace_program(ROOM);
}
