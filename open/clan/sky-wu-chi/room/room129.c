inherit ROOM;
void create() {
	set( "short", "��ƿ��������3" );
	set( "object", ([
		"amount9"  : 1,
		"file5"    : "/open/magic-manor/obj/dark-soul-dagger",
		"file7"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount2"  : 1,
		"file2"    : "/obj/gift/lingzhi",
		"file4"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount6"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount8"  : 1,
		"amount7"  : 1,
		"file1"    : "/open/capital/obj/blade2",
		"file6"    : "/open/magic-manor/obj/dark-soul-dagger",
		"file9"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount4"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/magic-manor/obj/dark-soul-dagger",
	]) );
	set( "owner", "ywarter" );
	set( "build", 10885 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room126",
	]) );
	set( "long", @LONG
���������������Ķ���,���Ի�����е��ǳ��ľ���..��Ϊ��Щ����
���Ƿǳ�������һЩ����ӵ�е�����,Ҳ���Ǿ���˽ܼ������ȵ�
�����Ĵ�ͷĿ�����õ�����
�� ��΢����Ʈ(lin-cloud-fan)���������(hwa-je-icer)
��ӳ������(fon-sky-sword)��ذӰ��(dark-soul-dagger)
��նаԪ��(evil-gwe-blade)����ذ��(world)

LONG);
	setup();
	replace_program(ROOM);
}
