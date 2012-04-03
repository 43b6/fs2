// Room : /open/clan/red_fire/room/room3.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "south" : "/open/clan/red_fire/room/room4",
  "north" : "/open/clan/red_fire/room/room5.c",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "红莲教" );
	set( "long", @LONG


                          $HIY$◆◆◆$NOR$  $HIC$大$NOR$    $HIC$厅$NOR$  $HIY$◆◆◆$NOR$


        $HIR$红莲教$NOR$──所有人向往的$HIR$人$HIG$间$HIY$仙$HIC$境$NOR$；据说$HIR$红莲教$NOR$的由来是因为教主当
        年突然领悟到：武学之最高境界并非成为武林盟主或东方不败，因此
        创立本教，一方面希望能让大家到此潜心修炼武学，另一方面也希望
        帮众皆能够帮助弱小；而听说教主因为顿悟武学之高乘，目前闭关修
        炼于$HIR$红莲$HIY$圣域$HIC$天外天$NOR$；且据说教主是一位大美人，看来如果想要一赌
        教主的风采，必定要去$HIY$圣域$NOR$走一回啰。 


LONG);
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "short", "$HIY$【$HIR$红莲$NOR$ $HIC$大厅$HIY$】$NOR$" );
	set( "build", 140 );
	setup();

	}
