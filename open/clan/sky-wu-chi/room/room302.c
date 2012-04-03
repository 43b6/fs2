inherit ROOM;
void create() {
	set( "short", "$HIC$������װ��ר��$NOR$" );
	set( "owner", "peiyi" );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/tendo/obj/chaosbelt",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount3"  : 1,
		"amount2"  : 1,
		"amount10" : 1,
		"file9"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount4"  : 1,
		"file3"    : "/open/wu/npc/obj/armband",
		"file4"    : "/open/mon/obj/ghost-legging",
		"file10"   : "/daemon/class/fighter/figring",
		"file1"    : "/daemon/class/blademan/obj/shield",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount6"  : 1,
		"amount7"  : 1,
		"amount9"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/mogi/castle/obj/lochagem",
	]) );
	set( "build", 11054 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room226",
	]) );
	set( "long", @LONG
    ������ߵ�С���ӣ���ͷ̽�˽�ȥ������������һ���׼�������
���ĸ߼�װ���������� :

   ( 1) ��������(chaos belt)
   ( 2) ��ɲŮ��(gem)
   ( 3) ����ͷ��(ghost helmet)
   ( 4) ���û�ϥ(ghost legging)
   ( 5) ��������(ghost cloak)
   ( 6) ����������(crazy dragon)
   ( 7) Ϧϼ��ɴ(sun_red_cloth)
   ( 8) ���˲ݻ�(lucky grasslink)
   ( 9) ħ����(magic shield)
   (10) ���ױۻ� (Sun Fire Armband)

����С�����������ӹ���ʱ����װ�����ǲ������׽�����˵�ม�
LONG);
	setup();
	replace_program(ROOM);
}
