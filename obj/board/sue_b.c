 

inherit BULLETIN_BOARD;

void create()
{
        set_name("留言簿",({"board"}));
set("location","/open/scholar/room/r17");
		set("board_id","sue_b1");
        set("long","这是一本用来记事的留言簿。\n");
        setup();
      set("capacity",100);
		set("master",({"hide","anmy","babe"}));
}
