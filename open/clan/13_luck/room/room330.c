inherit ROOM;
void create() {
	set( "short", "������ɢ" );
	set( "owner", "woan" );
	set( "object", ([
		"amount7"  : 1,
		"amount5"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"file7"    : "/obj/gift/hobowdan",
		"amount4"  : 1,
		"amount6"  : 1,
		"file4"    : "/obj/gift/lingzhi",
		"file6"    : "/obj/gift/lingzhi",
		"file3"    : "/obj/gift/lingzhi",
		"file2"    : "/obj/gift/lingzhi",
		"file1"    : "/obj/gift/lingzhi",
		"amount1"  : 1,
		"file5"    : "/obj/gift/xiandan",
	]) );
	set( "build", 10926 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room329",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
    
    ��������[0;1;33m��[1m��[1m��[1m��[0m�������ϵ�ʱ���Ҳ���������ϸ��ӵ�Ц
�ݡ���ԭ�������ң�������ĳ�ŵ��������ֻ�����������С�
�Ҹ�������������ף�ص�ʱ��ֻ����֪���Ҷ���˼����ơ�
�Ҳ����ٿ��㣬��һ�۶���ʹ����ʹ֪�����������ֻ�ͷ����
����֪��[0;1;5;32m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5mH[1;5m��[1;5m��[0m��[0;1;31m��[1mI[1m��[1m��[0m��ֻ�������˲��У������һ��죬
[0;1;30m��[1m��[1m��[1md[0m�������У���û����[0;1;34m��[1m��[1m��[1m��[0m�Ľ�ڡ�ԭ�������[0;1;5;32m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5mH[1;5m��[1;5m��[0m��
[0;1;31m��[1mI[1m��[1m��[0m���һ������ʲô���������ס��[0;1;36m��[1m��[1m��[1mS[0m���ַſ������ߣ�
��һ�θ���[0;1;31m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m�� 


LONG);
	setup();
	replace_program(ROOM);
}
