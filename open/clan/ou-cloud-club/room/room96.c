// Room : /open/clan/ou-cloud-club/room/room96.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "short", "$HIM$ħŮ���о���$NOR$" );
	set( "owner", "jenova" );
	set( "object", ([
		"amount5"  : 1,
		"file6"    : "/open/ping/questsfan/obj/diamond_hands",
		"amount2"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount1"  : 1,
		"amount9"  : 1,
		"amount3"  : 1,
		"file5"    : "/open/ping/questsfan/obj/diamond_armor",
		"file9"    : "/open/capital/obj/gold_pill",
		"amount7"  : 1,
		"file10"   : "/obj/gift/lingzhi",
		"file2"    : "/open/ping/questsfan/obj/diamond_belt",
		"amount8"  : 2850,
		"file3"    : "/open/ping/questsfan/obj/diamond_boots",
		"file7"    : "/open/ping/questsfan/obj/diamond_cloak",
		"file8"    : "/obj/poison/five_poison",
		"file4"    : "/open/ping/questsfan/obj/diamond_legging",
		"amount10" : 1,
		"amount6"  : 1,
	]) );
	set( "build", 10200 );
	set( "exits", ([
		"up"        : "/open/clan/ou-cloud-club/room/room87",
	]) );
	set( "long", @LONG

    �Ͼɵĳ���,�����˺���һ��ҳ�,������ŵ�,��һ�޹���������
��ҩˮ,���޹������˱�ʾ,��Щҩˮ������һ��Ŭ���о������Ľᾧ,��
ȷ,���㿴��������������˹Ž��������ҽѧ�鼮�Ĵ����ʱ,�Ͳ�����
���޹�������֮������,��ʵ���ﻹ��һ����Ϊ��֪������,��˵������ĳ
���޴��������Ȫˮ������,�����޹�����Ĳ���һλ�򵥵�����.

LONG);
	set( "no_clean_up", 0 );
	setup();

	}
