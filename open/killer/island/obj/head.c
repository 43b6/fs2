inherit ITEM;
void create ()
{
set_name("����ͷ",({"incomplete_corpse's head","head"}));
set_weight(10);
    if(clonep())
        set_default_object(__FILE__);
    else{
	set("value",1);
	set("unit","��");
	setup();
}}
