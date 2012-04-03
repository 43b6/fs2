inherit ROOM;
void create() {
	set( "short", "�߳�Сվ" );
	set( "object", ([
		"amount4"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file10"   : "/open/dancer/obj/yuawaist",
		"amount8"  : 1,
		"file8"    : "/open/prayer/obj/boris-boots",
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file7"    : "/open/prayer/obj/boris-hat",
		"file4"    : "/daemon/class/fighter/figring",
		"file1"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount1"  : 1,
		"file2"    : "/daemon/class/fighter/figring",
		"amount3"  : 1,
		"amount10" : 1,
		"file3"    : "/open/capital/guard/gring",
		"amount9"  : 6,
		"amount5"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/mogi/castle/obj/ninepill",
	]) );
	set( "build", 10191 );
	set( "light_up", 1 );
	set( "owner", "tsrak" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room98",
		"enter"     : "/open/clan/13_luck/room/room145",
	]) );
	set( "long", @LONG
    �����Ǳ߳ǵķ�����,����ֻ��һ��ľ����һ������
��ϸ��������,������������ﻹ�����������,�ٿ�����
����ʧ��,���Ϸ���һֻɨ�Ѻ�һ����,ɨ���Ͽ��Ź���2002
�������鿴��һ��,��Ƥд�Ÿ߼���ħ��,�������澡��һЩ
�����,һ��С�ľͱ���ҧ��һ��.�����Ա���һ��Сͨ��,
�ƺ�ͨ����һ������,����Ҫ��ȥ��ʱ��,����ͻȻ����һֻ
С�������Ҫ�ſ���....

LONG);
	setup();
	replace_program(ROOM);
}
