// Room : /open/clan/sky-wu-chi/room/room52.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
�۹����棬�����˷��������˶�¥�������е�
�벻���������ĵط�����������ǰ��������������
�������磬�벻�����۹⿴��Զһ�㣬���ܵõ���
�˵���ᣬ������Ҳ�뵽�Ǹ߱����֣�����������
�ˣ�ɽ����ɽ���������ˡ�

LONG);
	set( "short", "$HIC$ͨ����¥$NOR$" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/wu/npc/obj/armband",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/scholar/obj/icefan",
		"amount1"  : 1,
		"file7"    : "/open/port/obj/wolf_ring",
		"amount10" : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
	]) );
	set( "build", 10005 );
	set( "owner", "conpse" );
	set( "exits", ([
		"down"      : "/open/clan/sky-wu-chi/room/room40",
	]) );
	set( "light_up", 1 );
	set( "item_desc", ([ /* sizeof() == 1 */
  "window" : "������վ - 
    ������������������վ����ֵĳ���, ������ɳĮ�����ն�, ��
����ţ���⳵, ����ֻҪ��еó����ֵĽ�ͨ����������С�
    �����������Ʈ��Ʈȥ��
    ̫���մӶ����ĵ�ƽ������
   ��[14mС����[0m��������С����(Sale girl)




�ߡ�������߿��õ�������վҮ
",
]) );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
