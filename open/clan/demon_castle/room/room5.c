// Room : /open/clan/demon_castle/room/room5.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "short", "ħ�BѪ����" );
	set( "light_up", 1 );
	set( "build", 7150 );
	set( "clan_room", "��ħ��" );
	set( "exits", ([ /* sizeof() == 6 */
  "north" : "/open/clan/demon_castle/room/room6.c",
  "south" : "/open/clan/demon_castle/room/room7.c",
  "down" : "/open/clan/demon_castle/room/hall",
  "west" : "/open/clan/demon_castle/room/room9.c",
  "up" : "/open/clan/demon_castle/room/room10.c",
  "east" : "/open/clan/demon_castle/room/room8.c",
]) );
	set( "long", @LONG

    [1m[37m������[31m��ħ��[37m�ڵ�[35mѪ��[36m��[37m������������һ���˿��е�[33m��������[37m��[0m
[1m[37m�ഫ����ʮ��ǰ�����г�����һλ�书��Ϊ��ǿ��[32m����[34m����[36m������[37m��[0m
[1m[37mͳ����[32m������[33m��[36m�İ���[33m��[31m��ħʹ[37mΪ�������ս����ϱ�δ����֣�[0m
[1m[37m����ǰ����[31m��ħ��[37m��[31m���ħ[36m������[37m���������������ڴˣ�ר�ĵ�����[0m
[1m[37m��ѧ֮[32m��߾���[37m����֪�����������з��Ҳ��ݣ�Ⱥǿ���ԣ���������[0m
[1m[35mѪ��[36m��[37m�ڵ��ڸ����Ƿ����˶��ٶ�̤��[31mѪ��֮·[37m��[0m

LONG);
	setup();

	}
