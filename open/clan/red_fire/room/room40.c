// Room : /open/clan/red_fire/room/room40.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$��$HIR$���� $HIM$������$HIY$��$NOR$" );
	set( "owner", "reuben" );
	set( "object", ([
		"amount5"  : 1,
		"file5"    : "/open/killer/headkill/obj/world_dag",
		"file10"   : "/open/wind-rain/obj/star-hammer",
		"file3"    : "/open/mogi/dragon/obj/power",
		"file4"    : "/open/quests/snake/npc/obj/snake-key-1",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount4"  : 1,
		"file8"    : "/open/killer/headkill/obj/world_dag",
		"amount6"  : 1,
		"amount2"  : 1,
		"file6"    : "/open/quests/snake/npc/obj/snake_gem",
		"amount1"  : 1,
		"file2"    : "/open/quests/snake/npc/obj/snake-key-1",
		"file9"    : "/open/quests/snake/npc/obj/snake_gem",
		"file7"    : "/open/killer/headkill/obj/world_dag",
		"amount7"  : 1,
		"file1"    : "/open/quests/snake/npc/obj/snake-key-1",
		"amount10" : 1,
		"amount9"  : 1,
	]) );
	set( "build", 10960 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "long", @LONG
������$HIR$������$NOR$��$HIM$������$NOR$��������ȥ��ͨ��һ��$HIW$��ʯ·$NOR$�������ῴ��
һ��·�꣬�����Ƿֱ�ͨ���ϡ����������ɵ�ͨ·�����������������ϣ�
������˵����İ���֮ǰ������$HIR$��õ$NOR$��������ʱ�����һ�������Ϊʱ��Ϊ
��С�¶��������������˶��׷׵����˽�������Ȼ�º����������֣�
��������Ϊ�˲���ʹ�����ķ���ͬʱ�뿪��$HIR$����$NOR$......��


LONG);
	set( "clan_room", "������" );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 3 */
		"west"      : "/open/clan/red_fire/room/room41.c",
		"east"      : "/open/clan/red_fire/room/room39.c",
		"up"        : "/open/clan/red_fire/room/room46.c",
]) );
	setup();

	}
