inherit ROOM;
void create() {
	set( "short", "С�ѵ���" );
	set( "object", ([
		"file8"    : "/open/ping/questsfan/obj/diamond_legging",
		"file6"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount5"  : 1,
		"file1"    : "/open/sky/obj6/sun_diamond",
		"amount1"  : 1,
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file5"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount7"  : 1,
		"file2"    : "/open/gsword/obj/yugem",
		"amount9"  : 1,
		"file10"   : "/open/capital/guard/gring",
		"file7"    : "/open/ping/questsfan/obj/diamond_cloak",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
	]) );
	set( "build", 10733 );
	set( "light_up", 1 );
	set( "owner", "anaid" );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
�������С�ѵķ��䣬��������һ������ʮ������ĸо������������Ż�Ƥ���Ƶĵ�̺����ʾ���������˵ķ��ǽ�Ϲ���һ�����˰��С��Ů����Ƭ������д�ż�����~$HIR$�ҵĴ���$NOR$~����������ֱ���һ��ˮ���䣬�����������������û�п������ұߵ�ԭľ�ذ��ϻ����������������ͷ�Ϳɰ��Ĳ�˿��������д��ŵ����Ĺ�����Ӻ󷽵�Ժ��������Ĵ�������Ʈ�ݵ���ذ�ɴ�����⣬��ů�Ľ�ɫ������������������裬����һ������������ʺϴ�Ҿ���һ���ϸϸƷ�衢̸��˵�ص����...��
LONG);
	setup();
	replace_program(ROOM);
}
