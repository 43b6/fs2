inherit ROOM;
void create() {
	set( "short", "����" );
	set( "object", ([
		"file9"    : "/open/capital/guard/gring",
		"file7"    : "/open/capital/obj/blade2",
		"file1"    : "/open/magic-manor/obj/maun-shadow-blade",
		"amount4"  : 1,
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file3"    : "/open/magic-manor/obj/maun-shadow-blade",
		"amount9"  : 1,
		"file10"   : "/open/capital/obj/blade2",
		"file8"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file2"    : "/open/capital/guard/gring",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/gblade/obj/dragon_book",
		"amount8"  : 1,
	]) );
	set( "build", 11431 );
	set( "light_up", 1 );
	set( "owner", "holeman" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room305",
	]) );
	set( "long", @LONG
����Ҫ�ƿ�����ʱ��һ��ҫ�۵Ĺ�â���ŷ���ֱ���������
�㲻���������浽����ʲô�����������˷���󣬲�����ԭ
���ղ��ǵ���â�����ղ����ⷿ����ĵ���ɢ�������ģ���
ϸһ���ⷿ����ĵ�ÿ�Ѷ���������������ı�������Ȼ��
�����ȡ����Щ����������Щ����ɢ�����İ���ȴ������֮
�Ӳ��������۽���ǧ�ٵ���Ψ�������ܳƻʡ�
LONG);
	setup();
	replace_program(ROOM);
}
