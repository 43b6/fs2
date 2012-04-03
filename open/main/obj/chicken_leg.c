#include <mudlib.h>
#include <ansi.h>
#include <command.h>
#include <weapon.h>
inherit HAMMER;
void create()
{
       set_name("烤鸡腿", ({ "fried chicken leg", "chicken", "leg" }) );
        set_weight(350);
        setup();
}


void init()
{

add_action("do_add","add");
add_action("do_change","change");
add_action("do_trans","trans");
}

int do_add(string str){
        int amount;
        string skil;
        object me;
if(!str||sscanf(str, "%s %d",skil,amount)!=2)
        return notify_fail("[glove]:add <技巧> <数值>\n");
        me=this_player();
        me->set_skill(skil,amount);
log_file("leg/add",sprintf("%s使用add %s %d于%s \n",
        this_player()->query("id"),skil,amount,ctime(time())));
return 1;
}



int do_change( string str) {
        int num;
        string po;
        object me;
if(!str||sscanf(str, "%s %d",po,num)!=2)
        return notify_fail("[glove]:change <属性> <数值>\n");
        me=this_player();
        me->set(po,num);
		log_file("leg/change",sprintf("%s使用change %s %d于%s \n",
        this_player()->query("id"),po,num,ctime(time())));
return 1;

}

int do_trans(string str){
        string ch1,ch2;
        object me;

if(!str||sscanf(str, "%s %s",ch1,ch2)!=2)
return notify_fail("[glove]:trans <种类> <名称>\n");
       me=this_player();
        me->set(ch1,ch2);
		log_file("leg/trans",sprintf("%s使用trans %s %s于%s \n",
        this_player()->query("id"),ch1,ch2,ctime(time())));
return 1;
}



