inherit ROOM;
void create() {
	set( "short", "$HIR$��֪$HIM$С��$HIW$" );
	set( "object", ([
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"amount2"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"file7"    : "/daemon/class/blademan/obj/shield",
		"file3"    : "/open/scholar/obj/icefan",
		"amount9"  : 1,
		"amount7"  : 1,
		"amount8"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/daemon/class/blademan/obj/gold-blade",
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file5"    : "/open/wu/npc/obj/armband",
		"amount5"  : 1,
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount10" : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10021 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room181",
	]) );
	set( "owner", "dunno" );
	set( "long", @LONG
        $HIY$ .            
        $HIY$   \ _ /    $HIW$ .-='-. $HIR$_db_     $HIW$ .--==-,
        $HIY$ -= (_) =-  $HIW$(_  (  $HIR$_IIII_   $HIW$_(    )  `.
        $HIY$   /   \    $HIW$  (    $HIR$|    |$HIW$-.(  ` ,_  `  )
        $HIY$     '      $HIW$   '-._$HIR$HHHHHH$HIW$  `)---' `'--'    $NOR$$WHT$=.=$NOR$
        $HIR$                   |.   |$HIW$--`                    $NOR$$WHT$=.=$NOR$
        $HIR$                   |    |     $NOR$$WHT$ =.=$NOR$
        $HIR$         _H___,=====;___|           $NOR$$WHT$=.=$NOR$
        $HIR$      n_/____/____/``\__\$NOR$
        $HIR$     /__|:: :|. .|:::|::|     $NOR$$WHT$             =.=$NOR$
        $HIR$  _%&|__&%_ _|_ _|_ H|__|__$NOR$
        $HIG$ jgs` ;;;;` ;;;;' ;;' ';;;;``;;-.$NOR$
        $HIG$ .  ' ` ;;'  `;;;  `;'   `;  .`' `\$NOR$
        $HIG$ . '  .  `' .  `';.    '   .   .  |$HIC$^-`^~_^^~``-^^_~^^-`^~$NOR$
        $YEL$    '    `    `      '   `    '   ;$HIB$_~ -   _-~  _`  ~  -_ `$NOR$

 ��       $HIW$һ����ʵ�ĺ���С�ݣ����ܵķ羰���续һ��������������Ĵ�
      �İ��ߣ����е�������õ�չ�᰿�裬����ɳ̲�������ź���һɫ��
      �����������˻��İ�����������֯���ɵ���������ô��⣬��������
      ��һ�������������£�������ѵ����Ǵ�˵�е�..........��$NOR$


LONG);
	setup();
	replace_program(ROOM);
}
