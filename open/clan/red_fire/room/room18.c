// Room : /open/clan/red_fire/room/room18.c
inherit "/open/clan/claneqshop.c";  

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "no_transmit", 1 );
	set( "clan_room", "������" );
	set( "short", "$HIY$��$HIR$������ $HIC$װ����$HIY$��$NOR$" );
	set( "build", 10020 );
	set( "exits", ([ /* sizeof() == 1 */
		"west"      : "/open/clan/red_fire/room/room17.c",
]) );
	set( "long", @LONG

                            $HIR$�� $HIC$װ  ��  �� $HIR$��$NOR$

        �ۣ������ô��$HIC$װ����$NOR$ร�����������˺ö������ͷ��ߣ����ǰ���
        ��������ģ����������ѡ���ʺϵ�װ��ʹ�ã���ʱʹ���$HIY$ս������$NOR$
        ��������������࣬����װ����һ�ɴ������������������ɱƬ
        �����޵��֡���ս$HIY$ħ��$NOR$��ħ������$HIR$����$NOR$����$HIB$ħ��$NOR$���񩤩�$HIM$���w$NOR$��
        �߰ɣ�����������



LONG);
	set( "have_reborn", 1 );
	set( "object", ([ /* sizeof() == 1 */
  "obj1" : "/open/ping/obj/cloud.c",
]) );
	set( "no_clean_up", 1 );
	setup();

	}
