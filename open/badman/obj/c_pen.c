// c_pen.c by powell

#include </open/open.h>

inherit COMBINED_ITEM;

void create()
{
	set_name("炭笔",({"pen"}));
	set("long","一支由树枝烧制而成的碳笔, 可用来到处涂鸦 (write)。\n");
 	set("unit","支");
	set("base_unit","支");
	set("value", 10000);
 	set("base_weight", 45);
	set_amount(1);
	setup();
}
void init()
{
	add_action("do_write","write");
}
int do_write(string arg)
{
	object ob=environment(this_player());
	if (arg == 0 ){
	tell_object(this_player(),"炭笔的用法是 -- write xxxxxx \n");
	return 1;
	}
	if (ob->query("can_write") != 1){
	tell_object(this_player(),"喂!!  你以为这里是哪儿啊??\n"+
	                          "随便到处乱涂鸦会被围殴喔..\n");
	return 1;
	}
        if (ob->query("word")){
        message_vision("$N吐了一些口水在手掌上, 将墙上原有的字迹抹去...\n\n",this_player() );
        
//  以下是要给任务用的, 可是任务还没写好  :P        
/*      if (this_player()->query_temp("") <   ){
       	tell_object(this_player(),"你突然发觉墙角有一行小字(words)..\n");
        this_player()->set_temp("", );
        }
*/         
        } 
        message_vision("$N在墙上写上 :\n"+arg+"\n\n",this_player());
	ob ->set("word",arg);
	ob ->set("writer",this_player()->query("name"));
	tell_object(this_player(),"啊..这笔的品质可真是@#$%\n"+
				  "用没两下就不能用了, 你随手便把笔丢了..\n");
	add_amount(-1);
	return 1;
}
