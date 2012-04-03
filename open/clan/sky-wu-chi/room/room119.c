inherit ROOM;
void create() {
	set( "short", "$HIW$ˮ�ޱ�$NOR$" );
	set( "owner", "bbsman" );
	set( "object", ([
		"file4"    : "/open/scholar/obj/s_wrists",
		"file3"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount6"  : 1,
		"amount9"  : 1,
		"file10"   : "/open/scholar/obj/s_hands",
		"file9"    : "/open/mogi/dragon/obj/sunblade",
		"amount4"  : 1,
		"file1"    : "/open/mogi/village/obj/b_potion",
		"file6"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/obj/gift/lingzhi",
		"amount1"  : 55,
		"amount7"  : 1,
		"amount3"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 10113 );
	set( "exits", ([
		"enter"     : "/open/clan/sky-wu-chi/room/room122.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
$HIC$��ѩ���죬��ѩ�׷ף��������ѩ�����涼�Ǳ��أ���ѩһƬƬ
��Ʈ�䣬���ų����ʵľ�����������е�����̹ǣ���������һ��
С�ݣ���������ůů�Ļ𣬸�����������һ�����󣬶��Ա�����һ��
��������沢�����֣����ǡ�ˮ�ޱ߰����ӡ���$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
