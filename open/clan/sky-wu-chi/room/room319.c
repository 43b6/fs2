inherit ROOM;
void create() {
	set( "short", "miffy ��¥1-2" );
	set( "object", ([
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount4"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
	]) );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "build", 10017 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room318",
	]) );
	set( "long", @LONG
������miffy ��¥�ĵ�һ��ƫ��,�����ŵĶ��������ڱȽ���ͨ������
���������ǳ�Ϊmiffy ƽ����ȥս��ʱ�Ļ�װ��,������ͬ����һ����
������miffy ��¥��һ��֮2
��������miffy �ڻ�װʱ�ĵڶ�����,���䷿���������eq �պþ���һ����
��ս��װ..
LONG);
	setup();
	replace_program(ROOM);
}
