inherit ROOM;
void create() {
	set( "short", "miffy ��¥2-6" );
	set( "object", ([
		"file2"    : "/open/killer/obj/black",
		"amount2"  : 45,
		"amount6"  : 1,
		"file3"    : "/open/quests/snake/npc/obj/snake-key-1",
		"amount3"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/quests/snake/npc/obj/snake-key-1",
		"amount1"  : 1,
		"file6"    : "/open/quests/snake/npc/obj/snake-key-1",
		"file1"    : "/open/killer/obj/blood",
	]) );
	set( "light_up", 1 );
	set( "owner", "miffy" );
	set( "build", 11406 );
	set( "exits", ([
		"southeast" : "/open/clan/sky-wu-chi/room/room321",
	]) );
	set( "long", @LONG
���������������﷿,�������Ķ���������miffy ���������Ѱ�æ�ռ�����
��Ϊ��Щ��������ȡ��,���Ը��Եô���������ܿɹ�,���ɴ˳�ȥ������
Ҳ���ܹ������������Ĺ���,�ϳ�ת��,��˴˴�¥����������Ҳ���൱֮�߸ߵ�
���������ĵز�...
LONG);
	setup();
	replace_program(ROOM);
}
