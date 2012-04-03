inherit ROOM;
void create() {
	set( "short", "miffy ��¥1-3" );
	set( "owner", "miffy" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room318",
	]) );
	set( "object", ([
		"amount7"  : 1,
		"file8"    : "/open/gsword/obj1/karmband",
		"file7"    : "/open/gsword/obj1/khelmet",
		"file2"    : "/open/killer/obj/blood",
		"amount5"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/quests/snake/npc/obj/snake-key-1",
		"file5"    : "/open/poison/obj/stonekey",
		"amount4"  : 1,
		"amount2"  : 1,
		"file10"   : "/open/killer/obj/s_pill",
		"amount1"  : 1,
		"amount6"  : 40,
		"amount9"  : 20000,
		"file4"    : "/open/poison/obj/blue_key",
		"file9"    : "/open/killer/obj/bellstar",
		"file1"    : "/open/snow/obj/snow_token",
		"amount8"  : 1,
		"file6"    : "/open/doctor/pill/f_pill",
		"amount10" : 2000,
	]) );
	set( "light_up", 1 );
	set( "build", 11112 );
	set( "long", @LONG
������miffy ��¥�ĵ�һ��ƫ��,�����ŵĶ��������ڱȽ���ͨ������
���������ǳ�Ϊmiffy ƽ����ȥս��ʱ�Ļ�װ��,������ͬ����һ����
������miffy ��¥��һ��֮3
��������miffy �ڻ�װʱ�ĵ�������,���䷿���������eq �պþ���һ����
��ս��װ..
LONG);
	setup();
	replace_program(ROOM);
}
