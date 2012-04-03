#include <armor.h>
#include <ansi.h>
inherit FINGER;
inherit SSERVER;
object me=this_player();
int cor,kar,itt,spi,cps,mexp,texp;
void create()
{
        set_name(HIB"ħ������"NOR,({"mdragon-ring"}));
        set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit","��");
        set("value", 0);
        set("material","gem");
        set("long","�˽�Ϊħ���۾����Ƴɣ���ǿ���������\n");
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        set("no_steal",1);
        }
        setup();
        set("armor_prop/move",  2);
        set("armor_prop/dodge", 3);
        set("armor_prop/parry", 4);
        set("armor_prop/force", 5);
        set("armor_prop/armor", 10);
}

int query_autoload()
{
  return 1;
}

void init()
{
     add_action("do_wear","wear");
     add_action("do_remove","remove");
}
int do_wear(string str)
{
     if(str=="all" || str=="mdragon-ring")
{
      ::wear();
     if( query("equipped") )
     {
if(!me) me=environment();
if(!living(me)) me=this_player();
if(!me) me=previous_object();
if(me)
message_vision(HIB"������ħ�������һ��а�������¤����$N��\n"NOR,me);
        set_heart_beat(1);
     }
if(me)
if(!me->query_temp("have_basic_skill")) {
if(me->query("class")=="blademan")  me->add_temp("apply/blade", 5);
if(me->query("class")=="fighter")   me->add_temp("apply/unarmed",5);
if(me->query("class")=="swordsman") me->add_temp("apply/sword",5);
if(me->query("class")=="scholar")   me->add_temp("apply/stabber",5);
if(me->query("class")=="bandit")    me->add_temp("apply/unarmed",5);
if(me->query("class")=="marksman")  me->add_temp("apply/archery", 5);
if(me->query("class")=="prayer")    me->add_temp("apply/unarmed",5);
if(me->query("class")=="poisoner")  me->add_temp("apply/whip",5);
if(me->query("class")=="taoist")    me->add_temp("apply/whip",5);
if(me->query("class")=="killer")    me->add_temp("apply/throwing",5);
if(me->query("class")=="doctor")    me->add_temp("apply/stabber", 5);
if(me->query("class")=="bonze")     me->add_temp("apply/unarmed",5);
if(me->query("class")=="officer")   me->add_temp("apply/dagger",5);
if(me->query("class")=="dancer")    me->add_temp("apply/unarmed",5);
me->set_temp("have_basic_skill",1);
}
}
}
int do_remove(string str)
{
     if(str=="mdragon-ring"||str=="all") {
     if( query("equipped") )
     {
if(!me) me=environment();
if(!living(me)) me=this_player();
if(!me) me=previous_object();
if(me)
message_vision(HIB"$N������ħ������а���������ʱ��ʧ��\n"NOR,me);
        set_heart_beat(0);
     }
if(me->query_temp("have_basic_skill")==1) {
if(me->query("class")=="blademan")  me->add_temp("apply/blade", -5);
if(me->query("class")=="fighter")   me->add_temp("apply/unarmed",-5);
if(me->query("class")=="swordsman") me->add_temp("apply/sword",-5);
if(me->query("class")=="scholar")   me->add_temp("apply/stabber",-5);
if(me->query("class")=="bandit")    me->add_temp("apply/unarmed",-5);
if(me->query("class")=="marksman")  me->add_temp("apply/archery", -5);
if(me->query("class")=="prayer")    me->add_temp("apply/unarmed",-5);
if(me->query("class")=="poisoner")  me->add_temp("apply/whip",-5);
if(me->query("class")=="taoist")    me->add_temp("apply/whip",-5);
if(me->query("class")=="killer")    me->add_temp("apply/throwing",-5);
if(me->query("class")=="doctor")    me->add_temp("apply/stabber", -5);
if(me->query("class")=="bonze")     me->add_temp("apply/unarmed",-5);
if(me->query("class")=="officer")   me->add_temp("apply/dagger",-5);
if(me->query("class")=="dancer")    me->add_temp("apply/unarmed",-5);
me->delete_temp("have_basic_skill");
}
}
}

void heart_beat()
{
object enemy;
int i;
kar = me->query("kar");
cor = me->query("cor");
cps = me->query("cps");
spi = me->query("spi");
itt = me->query("int");
mexp = me->query("combat_exp");
if( !objectp(me) )
{
set_heart_beat(0);
return;
}
if( me->is_fighting()&&query("equipped")&&me->is_busy() )
{
enemy = offensive_target(me);
if(enemy){
texp = enemy->query("combat_exp");
if(enemy->query("class")=="scholar"&&userp(enemy)) mexp=mexp*3/4;
if(!userp(enemy)) mexp=mexp*1.5;
if(mexp-texp<0) mexp=30;
else if(mexp-texp>=5000000) mexp=80;
else if(mexp-texp>=4000000) mexp=70;
else if(mexp-texp>=3000000) mexp=60;
else if(mexp-texp>=2000000) mexp=50;
else if(mexp-texp>=1000000) mexp=40;
else mexp=35;
if(mexp>random(100)) {
if(random(cor+cps+itt) > 85-random(kar*2+spi))
{
me->delete_busy();
message_vision(HIW+"\nħ�������Ȼɢ����һ��а���������ʹ$N�忪�����ϱ���֮Ѩ����\n"+NOR,me);
}
}
}
}
return;
}
