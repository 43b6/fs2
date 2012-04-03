inherit ROOM;
void create() {
	set( "short", "[1;31m�ޣ��ޣ���[0m" );
	set( "object", ([
		"file10"   : "/open/magic-manor/obj/lin-cloud-fan",
		"file8"    : "/open/mogi/dragon/obj/key",
		"file7"    : "/open/mogi/castle/obj/ninepill",
		"amount7"  : 2,
		"file2"    : "/open/fire-hole/obj/g-pill",
		"amount1"  : 19,
		"amount3"  : 19,
		"amount5"  : 1,
		"amount2"  : 46,
		"file9"    : "/open/ping/obj/poison_pill",
		"amount10" : 1,
		"amount9"  : 10,
		"file4"    : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"file5"    : "/open/killer/obj/k_ring",
		"file6"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file3"    : "/open/fire-hole/obj/w-pill",
		"amount8"  : 1,
		"file1"    : "/open/fire-hole/obj/r-pill",
		"amount4"  : 1,
	]) );
	set( "owner", "rings" );
	set( "build", 10036 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/ou-cloud-club/room/room230.c",
		"west"      : "/open/clan/ou-cloud-club/room/room33.c",
	]) );
	set( "long", @LONG
����С������ǰ����������һ�����һ���ʯ�ң�����
�Ǵӽ�Ϊ�ϲ��ʯ��͸���������ϸ����ŷ�������Χ��ǽ
�ϣ����棬�������컨�嶼�����������顢��ǳ��һ�ĵ���
����������������ε���Ĵ����Ż���ˡ���ʯ���Ҳ��ǽ
�Ͽ���Ѫ��ļ����֣�
  
  [31m�����ѣ�Ϊħ�ף�ǧ���޵�������һҹ��ħ[0m
  
ͻȻ��һ�������㱳��ɨ�����㲻������һ�������
LONG);
	setup();
	replace_program(ROOM);
}
