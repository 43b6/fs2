inherit ROOM;
void create() {
	set( "short", "С�ײ˵Ķд���" );
	set( "object", ([
		"amount7"  : 1,
		"file7"    : "/open/killer/weapon/k_torch",
		"file3"    : "/open/mogi/castle/obj/sspill",
		"amount6"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/gsword/obj/ring-1",
		"file6"    : "/open/port/obj/wolf_ring",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"file8"    : "/open/capital/room/king/obj/dagger1",
		"file5"    : "/open/gsword/obj/ring-1",
		"file2"    : "/open/love/obj/cloth1",
		"amount3"  : 2,
		"amount8"  : 1,
		"file1"    : "/open/gsword/obj/yuskirt",
	]) );
	set( "owner", "sski" );
	set( "build", 10116 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room227",
		"east"      : "/open/clan/sky-wu-chi/room/room123.c",
	]) );
	set( "long", @LONG
����˼��,�������С�ײ˵ķ��������ĵط���,�����ﶼ��Щ
ʲô������,������Ĵ�������,���Ұ˳ɿ���һ���벻ͨ������
ôȫ����һЩ�д���,����Щ�д�Ϊɶ����С�ײ˵�������..��
�Ͳ���������������һ���д�����,����,��������,����֮����
ֱ��������Ǻñ�����..ԭ������д��ͽ�����֮��(Maple ribbon)

LONG);
	setup();
	replace_program(ROOM);
}
