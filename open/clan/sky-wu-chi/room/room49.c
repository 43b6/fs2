// Room : /open/clan/sky-wu-chi/room/room49.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
    һ�߽�����,����Լ�ŵ�һ����ֵ�[0;1;31m��[1m��[1m��[1m��[1m��[1m��[0m,����е��쳣����,
���ڱ����ǽ��,����һ���� ��[0;1;31m��[1mA[1m��[1m^[1m��[1m��[1m,[1m��[1mw[1m��[1mO[1m��[1m��[1m��[1m~[1m��[1m��[0m�� ���ֳ��������Ĺ���
���Ŀ�����ת�򷿼���Ұ��,�㿴�������[0;1;31m��[1mK[1m��[1mW[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m_[1m��[1mc[0m,
�����߽�����֮ʱ,��Ȼ�ӷ���һ�����һЩ����,��Ȼ���ǡ�[0;1;31m��[1m��[1m��[1m��[1m��[1m��[1m��[1mw[0m��
�㾪�յĶ������,Ҳ�ų�һ���亹,������ֻ����Ҫ�Ͻ��뿪����.

LONG);
	set( "short", "����֮��" );
	set( "build", 10010 );
	set( "light_up", 1 );
	set( "object", ([
		"file4"    : "/open/killer/obj/s_pill",
		"amount10" : 1,
		"file8"    : "/open/killer/obj/dagger",
		"file5"    : "/open/killer/headkill/obj/f_dag",
		"file10"   : "/obj/gift/hobowdan",
		"file3"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/clan/area/home/trap",
		"amount8"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"amount2"  : 57,
		"file2"    : "/open/killer/obj/black",
		"amount1"  : 1,
		"amount4"  : 95,
		"file1"    : "/open/killer/headkill/obj/world_dag",
	]) );
	set( "owner", "luckyneck" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room56",
	]) );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
