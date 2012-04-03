inherit ROOM;
void create() {
	set( "short", "С��������" );
	set( "owner", "cong" );
	set( "object", ([
		"file4"    : "/open/soldier/obj/blood",
		"amount9"  : 1,
		"amount8"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/capital/obj/blade2",
		"file10"   : "/obj/gift/bingtang",
		"amount1"  : 1,
		"file3"    : "/open/quests/snake/npc/obj/snake_gem",
		"amount10" : 1,
		"file2"    : "/open/beggar/obj/gstaff",
		"file8"    : "/open/magic-manor/obj/master_snake_head",
		"amount7"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/japan/obj/super-blade",
		"file9"    : "/open/magic-manor/obj/golden-ball",
		"file6"    : "/open/magic-manor/obj/master_snake_head",
		"file7"    : "/open/magic-manor/obj/master_snake_head",
		"amount6"  : 1,
	]) );
	set( "build", 10176 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room99",
	]) );
	set( "long", @LONG
����һС��ר�õı����� , ������Ÿ�ʽ�����ı��� , Ϊ
���������Ϊ��ȫ֮�� , �㿴��������ֵı��� , ��ν������
���� ,���������� , ���� ,��Ҳ��Ϊ�Լ�ѡ������������ , ��
�������� .����Կ���(list)�ι�һ������ı��� ?

LONG);
	setup();
	replace_program(ROOM);
}
