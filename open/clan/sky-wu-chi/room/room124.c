inherit ROOM;
void create() {
	set( "short", "��ƿ��EQ�ղ���" );
	set( "object", ([
		"amount9"  : 1,
		"file5"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount2"  : 1,
		"file7"    : "/open/magic-manor/obj/evil-kill-claw",
		"file2"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount10" : 1,
		"amount6"  : 1,
		"file4"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount3"  : 1,
		"file3"    : "/open/magic-manor/obj/maun-shadow-blade",
		"amount8"  : 1,
		"amount7"  : 1,
		"file1"    : "/open/magic-manor/fire/obj/fire-fan",
		"file6"    : "/open/magic-manor/obj/hwa-je-icer",
		"file10"   : "/open/magic-manor/obj/lin-cloud-fan",
		"amount4"  : 1,
		"file9"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount5"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/magic-manor/obj/evil-kill-claw",
	]) );
	set( "light_up", 1 );
	set( "owner", "ywarter" );
	set( "build", 10228 );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room117.c",
		"east"      : "/open/clan/sky-wu-chi/room/room125",
	]) );
	set( "long", @LONG
����ķ��ߺͱ�������֮�����������е�����˼��,�о�����Ҫ��
���FS������������EQ��WP���ռ�������..�㿴�ڿ����㿴����һ��ָ
��..Ҫ��������������Ҫ�����ߵ�������..Ҫ������ľ�������..��
��һЩ��֪���Ķ���ʱ��Ҳ��Ҫ����²���..��Ϊ������Ҳ��֪����ɶ
ô�ô� ...

LONG);
	setup();
	replace_program(ROOM);
}
