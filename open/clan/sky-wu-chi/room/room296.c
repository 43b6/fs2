inherit ROOM;
void create() {
	set( "short", "����װ����" );
	set( "owner", "xman" );
	set( "object", ([
		"file6"    : "/open/magic-manor/obj/magic-sign",
		"amount6"  : 1,
		"amount5"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"amount9"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mogi/castle/obj/sspill",
		"file7"    : "/open/dancer/obj/yuawaist",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 17,
		"amount7"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
	]) );
	set( "build", 10018 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room232.c",
		"north"     : "/open/clan/sky-wu-chi/room/room348",
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
