inherit ROOM;
void create() {
	set( "short", "$HIM$������ϵ$NOR$" );
	set( "owner", "lord" );
	set( "item_desc", ([
		"left_11_sword_line" : @ITEM

                          ��$BYEL$����֮·$NOR$��

                     $HIR$��$NOR$�Ľ�$HIR$��$NOR$�� $HIR$���֮�ģ��޽�֮�ģ����｣֮��$NOR$

   $HIM$��$NOR$����$HIM$��$NOR$�� $HIM$���õ��������ý�������������$NOR$

      $HIG$��$NOR$��Թ����$HIG$��$NOR$�� ��֮���߾������ڽ�������������

              $HIC$��$NOR$��������$HIC$��$NOR$�� $HIC$����֮��$NOR$

 $RED$��$NOR$��Ѫ�ε�$RED$��$NOR$�� $RED$�ý�֮������$NOR$��$RED$����$NOR$��

        $MAG$��$NOR$�����쳾$MAG$��$NOR$�� $MAG$�����ˣ����������쳾$NOR$

                    $WHT$��$NOR$����֮��$WHT$��$NOR$�� $WHT$�𽣲�������������$NOR$

    $BLU$��$NOR$��ĩ����$BLU$��$NOR$�� ��$BLU$��$NOR$��

 $HIY$��$NOR$����ͬ��$HIY$��$NOR$�� $HIY$��Ϊ������Ϊ����������á����·���$NOR$

              $HIB$��$NOR$����֮��$HIB$��$NOR$�� $HIB$�����ŵػ�Ȫ֮��������ʼ����$NOR$

      $CYN$��$NOR$®ɽ����һ����$CYN$��$NOR$�� $CYN$���ؾŷ֣���������$NOR$

ITEM,
	]) );
	set( "object", ([
		"file6"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/open/tendo/obj/chaosbelt",
		"amount9"  : 1,
		"file10"   : "/open/prayer/obj/boris-cloth",
		"file8"    : "/open/wu/npc/obj/armband",
		"amount1"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/mogi/dragon/obj/key",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount8"  : 1,
		"file9"    : "/daemon/class/fighter/figring",
		"file7"    : "/open/capital/obj/king-cloak",
		"file1"    : "/open/prayer/obj/boris-boots",
		"amount10" : 1,
		"file2"    : "/open/capital/guard/gring",
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10080 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room239",
	]) );
	set( "long", @LONG
 �����Ǵ�˵�� ���صĻþ� ������ϵ

 $HIM$�������ѣ���������һ�������ۡ����������ڴ˴�ս��һ���Ƶ�
 ���Ǻܿ����ͻᷢ�����̣���Ϊ��Щһ�����Ĵ���ɢ�Ľ���
 �Ա߶���һ��С�ֵĽ�����û��������һ�������ء�$NOR$

     $HIC$��$NOR$
          $HIY$��ߵ�ʮһ������$NOR$(left_11_sword_line)
                                              $HIC$ ��$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
