inherit ROOM;
void create() {
	set( "short", "С�������������" );
	set( "owner", "puffy" );
	set( "object", ([
		"amount9"  : 1,
		"amount1"  : 10,
		"file4"    : "/open/magic-manor/obj/fire-ball",
		"file2"    : "/open/mogi/castle/obj/seven6-dark-head",
		"file3"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"file8"    : "/open/ping/obj/ra-head",
		"file10"   : "/open/magic-manor/soil/obj/soil-claw",
		"amount3"  : 1,
		"file5"    : "/open/magic-manor/obj/wood-ball",
		"file9"    : "/open/magic-manor/obj/fire-color-ribbon",
		"amount4"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/snow/obj/sky_lin_stone",
		"amount10" : 1,
		"amount8"  : 1,
		"file6"    : "/open/gblade/obj/sa-head",
		"file1"    : "/open/mogi/dragon/obj/power",
	]) );
	set( "build", 10068 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room201",
	]) );
	set( "long", @LONG
    ������С������������
�����ǰһ����ɫ��â����������
���ϰ��Ÿ�ʽ����������
Ҳ�о���ɽׯ��ɵ��������
С��ƾ���Ź�������
�͸����ú��L���˸��ֵ�������������
����fs����Ӧ��û�����ò���������eq�˰�
���⻹�и���master����������
Ҳ����������
ֻҪ�ǲ���save�����Ｘ������
LONG);
	setup();
	replace_program(ROOM);
}
