// Room : /open/clan/red_fire/room/room19.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "������" );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	set( "short", "$HIC$��$HIR$������ $HIY$Ǯׯ$HIC$��$NOR$" );
	set( "build", 10325 );
	set( "exits", ([ /* sizeof() == 1 */
  "east" : "/open/clan/red_fire/room/room17.c",
]) );
	set( "long", @LONG

                               $HIR$�� $HIY$Ǯ  ׯ $HIR$��$NOR$

        ������$HIR$������$NOR$��$HIY$Ǯׯ$NOR$����������.....��.....��.....��ֻ���� $HIM$A$NOR$ Ǯ
        ������������ҵ����Ϊ���ɵķ�չ��Ҫ����λ�����ǵ�Ŭ������Ǯ
        �߳�Ǯ�������߳������кõ�����߾��ṩ�������������ɲ��ܽ���
        ������Щ������Ҫ�Ӵ��$HIY$�ʽ�$NOR$���У����Դ�ҿ��԰�Ǯ�������



LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
