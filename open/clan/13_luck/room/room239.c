inherit ROOM;
void create() {
	set( "short", "����-�����" );
	set( "object", ([
		"amount2"  : 45,
		"amount10" : 1,
		"file8"    : "/open/capital/guard/gring",
		"file9"    : "/open/capital/guard/gring",
		"file2"    : "/open/ping/obj/poison_pill",
		"amount4"  : 8,
		"amount8"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/magic-manor/obj/fire-color-ribbon",
		"amount6"  : 1,
		"file5"    : "/open/magic-manor/obj/hwa-je-icer",
		"file4"    : "/open/mogi/castle/obj/blood-water",
		"file3"    : "/open/fire-hole/obj/p-pill",
		"amount3"  : 47,
		"file10"   : "/open/capital/guard/gring",
		"amount9"  : 1,
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 55,
		"amount5"  : 1,
		"file7"    : "/open/magic-manor/obj/fire-color-ribbon",
	]) );
	set( "owner", "dancer" );
	set( "build", 10299 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room238",
	]) );
	set( "long", @LONG

�������������������ֹ�Ľ�����ʿ�������һ������,�����ϡ������
���ͻὫֹ����ղ�������,������������ش�Σ��ʱ������������Կ�
��,ֹʱ��һ�����������ڱ����ϵ�����������ֱ�����Զ��ʱ��������
�����������������,����������(THIEF)-�������� ������������(TKC)-
ʥ������ ˮ�����շ���(SUFAYA)-ħ���� �ÿ�,ԭ�������ղ���ֹ.

LONG);
	setup();
	replace_program(ROOM);
}
