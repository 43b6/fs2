// Room : /open/clan/sky-wu-chi/room/room32.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "clan_room", "����޼�" );
	set( "long", @LONG
���ڰ���$HIG$��ľ��������������÷����$NOR$,
            $HIR$��ľ�������������ƹĶ�$NOR$,
            $HIW$�ڰ���Ƕ������֦ľСԲ��$NOR$,
��˵$HIW$˼��$NOR$ֻ�Ǹ�СС������,
�ⷿ�ڵİ��ü�ֱ�ɱȵ���֮�ҵĻ�����,
һ��Ų������ж���,
��˭,��Ȼû��˼��ͬ�����д���,
ԭ�����ϴ�$HIC$����$NOR$,
����һ������,���������������ļҾ�̵��Ų�����,
���˰���,���ڻع������ȵ�{����!������ö���? *_*}
LONG);
	set( "short", "��ʯС· 1111" );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/sky-wu-chi/room/hall.c",
		"south"     : "/open/clan/sky-wu-chi/room/room175",
]) );
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	setup();

	}
