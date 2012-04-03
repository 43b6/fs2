inherit ROOM;
void create() {
	set( "short", "$HIY$��ƽ����Ժ�� $CYN$����$NOR$" );
	set( "owner", "lonsan" );
	set( "light_up", 1 );
	set( "object", ([
		"amount8"  : 1,
		"file7"    : "/open/killer/obj/k_ring",
		"amount6"  : 1,
		"amount9"  : 1,
		"file5"    : "/open/gsword/obj/may_ring",
		"amount1"  : 1,
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 1,
		"amount7"  : 1,
		"file2"    : "/open/mogi/castle/obj/lochagem",
		"amount5"  : 1,
		"amount2"  : 1,
		"file10"   : "/open/tendo/obj/luboot",
		"file6"    : "/open/mogi/dragon/obj/key",
		"file4"    : "/open/tendo/obj/chaosbelt",
		"file8"    : "/daemon/class/blademan/obj/shield",
		"amount4"  : 1,
		"file1"    : "/open/poison/obj/feather",
		"amount10" : 1,
		"file3"    : "/open/mogi/castle/obj/lochagem",
	]) );
	set( "build", 10738 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room140",
		"enter"     : "/open/clan/sky-wu-chi/room/room139",
	]) );
	set( "long", @LONG
�������ܲ���С����ͷ�����Կ���һ����Ժ��������������֮�У�����һƬ��
����ͣ�ֻ��ż������ϸϸ�Ķ���������Ժ���������ϴ���ʯ�����ɰ�ɫ��ǽ��Χ
����������Ժ�����ڴ����Ա���һ����ɫ�������ͤ���ƺ�������ʱ������ұ����
��������ϸһ�ƣ����Է��ִ������ø߼��ĺ���ľ���ƣ�ʮ�ּ�̣����ϵ�̵���
���Ӹ�������Ͽε��龰�������Ϸ���һ���ڵ׽��ֵ����ң�����д��

                *********************************
                *                               *       
                *          $HIY$ƽ �� �� Ժ$NOR$          *
                *                               *
                *********************************

�ĸ����֣��ʷ�����Ʈ�ݣ��ּ��ۻ����������ó����������ֱʡ����ſ��Ա�����
һ�Ź��棬��������Ժ�ߣ��뽫���������������Աߵļ��ϡ���
LONG);
	setup();
	replace_program(ROOM);
}
