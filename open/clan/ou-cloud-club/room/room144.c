inherit ROOM;
void create() {
	set( "short", "$HIG$ʮ���ؽ���$NOR$" );
	set( "owner", "enter" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/obj/gift/unknowdan",
		"file3"    : "/obj/gift/lingzhi",
		"amount9"  : 1,
		"file10"   : "/obj/gift/lingzhi",
		"file8"    : "/obj/gift/lingzhi",
		"amount5"  : 1,
		"file5"    : "/obj/gift/bingtang",
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/obj/gift/bingtang",
		"file9"    : "/obj/gift/xiandan",
		"file2"    : "/obj/gift/bingtang",
		"amount1"  : 1,
		"file7"    : "/obj/gift/shenliwan",
		"amount10" : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"file6"    : "/obj/gift/xiandan",
		"amount2"  : 1,
	]) );
	set( "build", 10952 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/ou-cloud-club/room/room180",
		"up"        : "/open/clan/ou-cloud-club/room/room145",
	]) );
	set( "long", @LONG
$HIC$ʮ���޵�������    $HIB$��ʮ���ظ����
    $HIR$�ط�һ���˳���    $HIY$����ѧ��������$NOR$

ǽ�Ͽ����Ŷ̶̶�ʮ�����������˴˼����˽�
���޵������¹ʲؽ��ڴ˵����飬���˼����
���¼�ʮ������������֮ɥ��������񽣣���
Ҳ����������������ʱ�䱻�����ڴ��ˣ�

LONG);
	setup();
	replace_program(ROOM);
}
