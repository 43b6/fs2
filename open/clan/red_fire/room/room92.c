inherit ROOM;
void create() {
	set( "short", "$HIC$������$HIM$ˮˮ$HIC$�Ĺ뷿$NOR$" );
	set( "owner", "edcfr" );
	set( "object", ([
		"amount5"  : 1,
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"file1"    : "/obj/gift/shenliwan",
		"amount8"  : 27,
		"amount4"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"amount7"  : 1,
		"amount10" : 1,
		"file9"    : "/obj/gift/shenliwan",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mogi/castle/obj/ninepill",
		"amount3"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "light_up", 1 );
	set( "build", 10207 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room83",
	]) );
	set( "long", @LONG

   $HIC$ǽ������һ��ʫ
               
                $HIW$�ഺ԰�п�
                 $HIB$��¶���Օ�
                  $HIC$����������
                   $HIY$���������
                    $HIM$���������
                     $HIW$�j�ƻ�Ҷ˥
                      $HIB$�ٴ�������
                       $HIC$��ʱ������
                        $HIY$��׳��Ŭ��
                         $HIM$�ϴ�ͽ�˱�$NOR$


LONG);
	setup();
	replace_program(ROOM);
}
