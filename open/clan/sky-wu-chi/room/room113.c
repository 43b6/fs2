// Room : /open/clan/sky-wu-chi/room/room113.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "cmkroom", 1 );
	set( "item_desc", ([ /* sizeof() == 1 */
  "sign" : "�����ǡ�ʥ��̡�̫��(James) ���С�
",
]) );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 3 */
		"enter"     : "/open/clan/sky-wu-chi/room/room114.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
]) );
	set( "short", "С����������С��" );
	set( "object", ([
		"amount4"  : 1,
		"amount7"  : 1,
		"file7"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount9"  : 1,
		"file8"    : "/open/magic-manor/obj/dark-soul-dagger",
		"file6"    : "/open/magic-manor/obj/evil-kill-claw",
		"file1"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount10" : 1,
		"file2"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount3"  : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"file3"    : "/open/magic-manor/obj/dark-soul-dagger",
		"file5"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 10003 );
	set( "owner", "heronotme" );
	set( "light_up", 1 );
	set( "long", @LONG
�㲻֪�������߽���һ�����ص�С�������㿴��Զ������һ����
��..�Ͳ���������ǣ����ǰ������ֱ��������..��ǰ����һ������
����С�ݣ���ʱ�����������Ų����Ԥ��..����ð�亹��ͬʱ����
��Զ��С�����и�һ[33mľ��(sign)[0m�������ƺ�д��Щʲô�֣���������
�˲���ǰ��֪�����㿿��ʱ��о���һ������ֱ�����㡣

����������������$HIW$(�˵�����һ�ɺ�ǿ�������)$NOR$
LONG);
	set( "no_transmit", 1 );
	set( "clan_room", "����޼�" );
	setup();

	}
