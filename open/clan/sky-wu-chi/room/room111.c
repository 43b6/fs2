 inherit ROOM;

void create()
{
        seteuid(getuid());
        set( "long", @LONG
�㲻֪�������߽���һ�����ص�С�������㿴��Զ������һ����
��..�Ͳ���������ǣ����ǰ������ֱ��������..��ǰ����һ������
����С�ݣ���ʱ�����������Ų����Ԥ��..����ð�亹��ͬʱ����
��Զ��С�����и�һ$YEL$ľ��(sign)$NOR$�������ƺ�д��Щʲô�֣���������
�˲���ǰ��֪�����㿿��ʱ��о���һ������ֱ�����㡣
����������������$HIW$(�˵�����һ�ɺ�ǿ�������)$NOR$

LONG);
        set( "no_transmit", 1 );
        set( "cmkroom", 1 );
        set( "no_clean_up", 0 );
        set( "exits", ([ /* sizeof() == 2 */
		"enter"     : "/open/clan/sky-wu-chi/room/room112.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
]) );
        set( "clan_room", "����޼�" );
        set( "item_desc", ([ /* sizeof() == 1 */
  "sign" : "�����ǡ�ʥ��̡�̫��(James) ���С�
",
]) );
	set( "short", "���ˣ�����С��" );
	set( "owner", "lazycancer" );
	set( "object", ([
		"amount9"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file5"    : "/daemon/class/blademan/obj/ublade",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"amount10" : 1,
		"file3"    : "/open/snow/obj/figring",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/snow/obj/figring",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/poison/obj/blue_key",
	]) );
	set( "build", 10001 );
	set( "light_up", 1 );
        setup();

        }

