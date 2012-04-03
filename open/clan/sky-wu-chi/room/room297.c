inherit ROOM;
void create() {
	set( "short", "ʥ��װ����" );
	set( "owner", "gifa" );
	set( "object", ([
		"file10"   : "/open/mogi/castle/obj/fire-king-head",
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"file7"    : "/open/mogi/castle/obj/fire-king-head",
		"file9"    : "/open/mogi/castle/obj/fire-king-head",
		"amount2"  : 1,
		"amount10" : 1,
		"file8"    : "/obj/gift/xisuidan",
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/gsword/obj/yuskirt",
		"amount6"  : 1,
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"amount5"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/tendo/obj/chaosbelt",
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"amount8"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/ping/obj/gold_hand",
	]) );
	set( "build", 10124 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room237",
	]) );
	set( "long", @LONG
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    %%                                         %%
    %% ############       ###############      %%
    %% #                  #             #      %%
    %% #                  #             #      %%
    %% #                  #             #      %%
    %% #                  #             #      %%
    %% #                  #             #      %%
    %% ############       #             #      %%
    %% #                  #             #      %%
    %% #                  #             #      %%
    %% #                  #             #      %%
    %% #                  #   ######### #      %%
    %% #                  #  #        ######   %%
    %% ############       ###############  ### %%
    %%                                         %%
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
LONG);
	setup();
	replace_program(ROOM);
}
