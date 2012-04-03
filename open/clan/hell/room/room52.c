inherit ROOM;
void create() {
	set( "short", "$HIW$�����Է� - $HIC$������$NOR$" );
	set( "object", ([
		"file9"    : "/open/wind-rain/obj/bird-blade",
		"amount10" : 1,
		"file2"    : "/daemon/class/blademan/obj/gold-blade",
		"file6"    : "/open/ping/obj/iceger",
		"amount4"  : 1,
		"file1"    : "/open/ping/obj/iceger",
		"amount3"  : 1,
		"file10"   : "/open/ping/obj/cloud_fan",
		"amount6"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"amount9"  : 1,
		"file4"    : "/daemon/class/fighter/figring",
		"amount5"  : 1,
		"file5"    : "/open/gsword/obj/dragon-sword",
		"amount2"  : 1,
	]) );
	set( "item_desc", ([
		"dragon_sword" : @ITEM
�˽����ǲ��ڻƽ���ڣ���˵�����˱���
ʹ������ǿ�������񽣣�������������������
�޷���Ԧ�˽��������ᱻ���������ɣ�����Ҳ
ֻ��[0;1;31m��[1mC[1m��[1m][1;37m��[1m��[1m��[1m��[0m�Ź����ô˽���

ITEM,
	]) );
	set( "build", 10760 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room48",
		"north"     : "/open/clan/hell/room/room48",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�����ǽ�ħ���ַ��������ĵط���������
���ǲ������������������и��������ߴ����
���е�[0;1;31m��[1m��[1m��[1ms[1;37m��[1mM[0m��[0;1;36m��[1m��[1m��[1m][1;35m��[1m��[1m��[1mF[1;37m��[1mC[0m�ȣ������ⷿ����
����õ����Ǵ�˵�лƽ�������ص�

                [0;1m��[1mp[1m��[1m��[1;32m��[1mC[1m��[1ms[1;37m��[1mC[0m(Dragon_sword)


LONG);
	setup();
	replace_program(ROOM);
}
