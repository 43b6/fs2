inherit ROOM;
void create() {
	set( "short", "$HIW$�෿$NOR$" );
	set( "owner", "timekiller" );
	set( "object", ([
		"file6"    : "/open/killer/headkill/obj/w_dag",
		"amount8"  : 1,
		"file2"    : "/open/wu/npc/obj/armband",
		"amount5"  : 1,
		"file5"    : "/open/gsword/obj/may_ring",
		"amount1"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/magic-manor/gold/obj/golden-blade",
		"amount10" : 1,
		"amount2"  : 1,
		"file7"    : "/open/gblade/obj/sa-head",
		"file3"    : "/open/gblade/obj/sa-head",
		"amount4"  : 1,
		"file9"    : "/obj/gift/xiandan",
		"file4"    : "/open/magic-manor/obj/hwa-je-icer",
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/mogi/castle/obj/lochagem",
		"amount9"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 13785 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room242",
		"north"     : "/open/clan/sky-wu-chi/room/room222",
	]) );
	set( "long", @LONG
����������è��С���䣬������һ̨СС�ĵ��ԣ��ƺ�������ת��
��.. ԭ����PII - 300MHZ��ʲô����ˣ�������P-II��
�..  ������̨SamSung 753DF��өĻ������ͦ�߼��ģ�
�����е㱾Ǯ�����Ժ�������ִ��ZMud��������ȴû�ڵ���ǰ�棬
һ���Ǹ�������rebot��������ͻȻ�й�����ٺ�.........
͵͵����sui...  ^oo^

LONG);
	setup();
	replace_program(ROOM);
}
