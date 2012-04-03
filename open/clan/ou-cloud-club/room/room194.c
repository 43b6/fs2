inherit ROOM;
void create() {
	set( "short", "$HIG$��$HIY$��$HIC$��$HIR$ɱ$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"amount10" : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount6"  : 1,
		"file5"    : "/daemon/class/fighter/armband",
		"amount5"  : 1,
		"amount7"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"amount9"  : 1,
		"file10"   : "/open/killer/obj/k_ring",
		"amount8"  : 1,
		"file3"    : "/daemon/class/blademan/obj/shield",
		"file4"    : "/open/dancer/obj/yuawaist",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "light_up", 1 );
	set( "build", 10495 );
	set( "owner", "nickm" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room193",
		"west"      : "/open/clan/ou-cloud-club/room/room195",
	]) );
	set( "long", @LONG

$HIG$       ...           $HIY$       ''::'''     $HIC$      ......:'''     $HIR$      ...    ...$NOR$
$HIG$   ':. ::'           $HIY$   ::...:::'::'::: $HIC$        :: ::'...    $HIR$  ':..:'  ::''::$NOR$
$HIG$     ::: ....::'''   $HIY$  ''' :::::::.     $HIC$     ..:'' ''''::'   $HIR$   .::'::.::  ::$NOR$
$HIG$  ..:'::    :::      $HIY$     ::'::'......  $HIC$     ::.... ..:''    $HIR$  '' :::..:'  '''''$NOR$
$HIG$     .::: ..:::...   $HIY$   ..::::''::: ::  $HIC$        ::' ::...    $HIR$  ...::.:'...::::$NOR$
$HIG$    :::::   '::      $HIY$     '::...::''::  $HIC$    '::'''''''' ''   $HIR$ ''..::::  ':.::$NOR$
$HIG$ .:'' :::    :: .... $HIY$    ::::.:':::'::  $HIC$      ::  '::   '::. $HIR$  .:'::::.. :::.$NOR$
$HIG$    ..::'''''''''''''$HIY$ .....:::''::  ::  $HIC$   ::  ':.    ':..   $HIR$ .:' ::  ..:' :::..$NOR$
$HIG$     '''             $HIY$      :: .:' ':::  $HIC$   ''    ''':::'''   $HIR$     ''        '''$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
