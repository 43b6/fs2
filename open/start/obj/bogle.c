//p_human.c by chun 

inherit ITEM;

void create()
{
	set_name("稻草人",({"Bogle","bogle"}) );
	set("long","用稻草作成的假人，是作为吓阻鸟儿啄食稻米之用。\n");
	set("no_get",1);
        setup();
}
