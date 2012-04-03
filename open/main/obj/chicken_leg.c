#include <mudlib.h>
#include <ansi.h>
#include <command.h>
#include <weapon.h>
inherit HAMMER;
void create()
{
       set_name("������", ({ "fried chicken leg", "chicken", "leg" }) );
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
        return notify_fail("[glove]:add <����> <��ֵ>\n");
        me=this_player();
        me->set_skill(skil,amount);
log_file("leg/add",sprintf("%sʹ��add %s %d��%s \n",
        this_player()->query("id"),skil,amount,ctime(time())));
return 1;
}



int do_change( string str) {
        int num;
        string po;
        object me;
if(!str||sscanf(str, "%s %d",po,num)!=2)
        return notify_fail("[glove]:change <����> <��ֵ>\n");
        me=this_player();
        me->set(po,num);
		log_file("leg/change",sprintf("%sʹ��change %s %d��%s \n",
        this_player()->query("id"),po,num,ctime(time())));
return 1;

}

int do_trans(string str){
        string ch1,ch2;
        object me;

if(!str||sscanf(str, "%s %s",ch1,ch2)!=2)
return notify_fail("[glove]:trans <����> <����>\n");
       me=this_player();
        me->set(ch1,ch2);
		log_file("leg/trans",sprintf("%sʹ��trans %s %s��%s \n",
        this_player()->query("id"),ch1,ch2,ctime(time())));
return 1;
}



