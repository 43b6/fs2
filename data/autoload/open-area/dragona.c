#include <armor.h>
#include <ansi.h>
inherit ARMBANDS;
inherit SSERVER;
object me=this_player();
int cor,con,kar,itt,spi,cps,mexp,texp;
int ekee=me->query("max_kee",1);
void create()
{
        set_name(HIG"��������"NOR,({"dragon-armband"}));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit","��");
        set("value", 0);
        set("material","blacksteel");
        set("long","������ʹ��֮���ۣ���ǿ������������⹦Ч��\n");
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
//		set("thunder",1);
        set("no_steal",1);
		set("no_save",1);
		set("wield_msg", HIG"$N�������������ۣ�˲�����������˲���!!!\n"NOR);
        set("unwield_msg", YEL"$N�����������۾������������½����١�\n"NOR);
        }
        setup();
/*        set("armor_prop/move",  2);
        set("armor_prop/dodge", 3);
        set("armor_prop/parry", 4);
      set("armor_prop/force", 5);
*/      set("armor_prop/armor", 30);
        set("armor_prop/magic", 30);
		set("armor_prop/force",30);
}

int query_autoload()
{
  return 1;
}

/*void init()
{
     add_action("do_wear","wear");
     add_action("do_remove","remove");
}
int do_wear(string str)
{
     if(str=="all" || str=="silver-hawk")
{
      ::wear();
     if( query("equipped") )
     {
if(!me) me=environment();
if(!living(me)) me=this_player();
if(!me) me=previous_object();
if(me)
message_vision(HIC"��������ӥͷ����һ����ʥ������¤����$N��\n"NOR,me);
        set_heart_beat(1);
     }
if(me)
if(!me->query_temp("wear_silver_hawk")) {
if(me->query("class")=="blademan")  me->add_temp("apply/blade", 10);
if(me->query("class")=="fighter")   me->add_temp("apply/unarmed",10);
if(me->query("class")=="swordsman") me->add_temp("apply/sword",10);
if(me->query("class")=="scholar")   me->add_temp("apply/stabber",10);
if(me->query("class")=="bandit")    me->add_temp("apply/unarmed",10);
if(me->query("class")=="marksman")  me->add_temp("apply/archery", 10);
if(me->query("class")=="prayer")    me->add_temp("apply/unarmed",10);
if(me->query("class")=="poisoner")  me->add_temp("apply/whip",10);
if(me->query("class")=="taoist")    me->add_temp("apply/whip",10);
if(me->query("class")=="killer")    me->add_temp("apply/throwing",10);
if(me->query("class")=="doctor")    me->add_temp("apply/stabber", 10);
if(me->query("class")=="bonze")     me->add_temp("apply/unarmed",10);
if(me->query("class")=="officer")   me->add_temp("apply/dagger",10);
if(me->query("class")=="dancer")    me->add_temp("apply/unarmed",10);
me->set_temp("wear_silver_hawk",1);
}
}
}
int do_remove(string str)
{
     if(str=="silver-hawk"||str=="all") {
     if( query("equipped") )
     {
if(!me) me=environment();
if(!living(me)) me=this_player();
if(!me) me=previous_object();
if(me)
message_vision(HIC"$N��������ӥͷ����ʥ��������֮��ȥ��\n"NOR,me);
        set_heart_beat(0);
     }
if(me->query_temp("wear_silver_hawk")==1) {
if(me->query("class")=="blademan")  me->add_temp("apply/blade", -10);
if(me->query("class")=="fighter")   me->add_temp("apply/unarmed",-10);
if(me->query("class")=="swordsman") me->add_temp("apply/sword",-10);
if(me->query("class")=="scholar")   me->add_temp("apply/stabber",-10);
if(me->query("class")=="bandit")    me->add_temp("apply/unarmed",-10);
if(me->query("class")=="marksman")  me->add_temp("apply/archery", -10);
if(me->query("class")=="prayer")    me->add_temp("apply/unarmed",-10);
if(me->query("class")=="poisoner")  me->add_temp("apply/whip",-10);
if(me->query("class")=="taoist")    me->add_temp("apply/whip",-10);
if(me->query("class")=="killer")    me->add_temp("apply/throwing",-10);
if(me->query("class")=="doctor")    me->add_temp("apply/stabber", -10);
if(me->query("class")=="bonze")     me->add_temp("apply/unarmed",-10);
if(me->query("class")=="officer")   me->add_temp("apply/dagger",-10);
if(me->query("class")=="dancer")    me->add_temp("apply/unarmed",-10);
me->delete_temp("wear_silver_hawk");
}
}
}

void heart_beat()
{
object enemy;
int i,rate;
kar = me->query("kar");
con = me->query("con");
cps = me->query("cps");
spi = me->query("spi");
itt = me->query("int");
mexp = me->query("combat_exp")/1000000;
rate = con+spi+kar+mexp;

if( !objectp(me) )
{
set_heart_beat(0);
return;
}
 if( me->is_fighting()&&query("equipped")&&me->query("eff_kee")!=ekee )
  {
    if( random(rate) > 80)
    {
    me->receive_curing("kee",(cor+spi)*2);
    me->receive_heal("kee",(cor+spi)*2);
message_vision(HIW+"\n��ӥͷ��ɢ������ʥ�Ĺ�ԣ�$N��ʱ����������ˬ��\n"+NOR,me);
    }
  }
return;
}
*/
