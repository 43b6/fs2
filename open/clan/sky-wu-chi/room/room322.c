inherit ROOM;
void create() {
	set( "short", "miffy ��¥2-2" );
	set( "object", ([
		"amount7"  : 50000,
		"amount8"  : 50000,
		"file4"    : "/open/killer/obj/bellstar",
		"amount6"  : 50000,
		"amount1"  : 50000,
		"file2"    : "/open/killer/obj/bellstar",
		"file1"    : "/open/killer/obj/bellstar",
		"file5"    : "/open/killer/obj/bellstar",
		"amount4"  : 50000,
		"file6"    : "/open/killer/obj/bellstar",
		"file7"    : "/open/killer/obj/bellstar",
		"file9"    : "/open/killer/obj/bellstar",
		"amount5"  : 50000,
		"amount9"  : 50000,
		"amount2"  : 50000,
		"file8"    : "/open/killer/obj/bellstar",
	]) );
	set( "build", 10077 );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room321",
	]) );
	set( "long", @LONG
�����Ƕ���ɱ��׶��,������������������miffy ���������Ѱ�æ�ռ�����
��Ϊɱ��׶������ȡ��,���Ը��Եô����������ܿɹ�,���ɴ˳�ȥ������
Ҳ���ܹ������������Ĺ���,��ȡɱ��,��˴˴�¥������ɱ��Ҳ���൱֮�߸ߵ�
���������ĵز�...
LONG);
	setup();
	replace_program(ROOM);
}
