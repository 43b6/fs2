#include <armor.h>
#include <ansi.h>
inherit FINGER;
object me=this_player();
int cor,kar,intt,spi,cps;
void create()
{
        set_name(HIR"����֮��"NOR,({"fire-dragon ring"}) );
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit","��");
        set("value", 0);
        set("material","gem");
        set("long","����֮�����ϵĻ�״��Ƭ, ����(wear fire-dragon ring)��װ����\n");
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        set("no_steal",1);
        }
        setup();

//        set("armor_prop/dodge", 5);
        set("armor_prop/parry", 5);
        set("armor_prop/force", 10);
//        set("armor_prop/armor", 10);

}
int query_autoload()
{
 return 1;
}

void init()
{
     if(this_player()==environment()){
     add_action("do_wear","wear");
     add_action("do_remove","remove");
     }
}
int do_wear(string str)
{
     if(living(environment()) && query("equipped"))
       me=environment();
     if(str=="fire-dragon ring" || str=="all")
     ::wear();
     if( query("equipped") )
     {
//        kar = me->query("kar",1);
//       cor = me->query("cor",1);
//        cps = me->query("cps",1);
//        spi = me->query("spi",1);
//        intt = me->query("int",1);
        message_vision(HIR"�����˻���֮�ۺ�һ��ǿ�ҵ�����¤����$N��\n"NOR,me);
        me->set_temp("def_fire1",1);
//        if (me->query("class")!="fighter" && me->query("class")!="blademan"
//            && me->query("class")!="swordsman" && me->query("class")!="bandit")
//        {me->set_temp("kang-power",1);}
     }
}
int do_remove(string str)
{
   if(str=="fire-dragon ring" || str=="all")
     if( query("equipped") )
     {
message_vision(HIR"$N�����˻���֮������Ļ���������ɢ��\n"NOR,me);
me->delete_temp("def_fire1");
//if (me->query("class")!="fighter")
//{me->delete_temp("kang-power");}
     }
}
