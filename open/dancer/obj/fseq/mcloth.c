// ���۽�Ʒby cgy(22/10/00)
#include <armor.h>
#include <ansi.h>
inherit CLOTH;
object me=this_player();
int cor;
int ekee=me->query("max_kee",1);
void create()
{
        set_name( HIW "��������С���� " NOR ,({"Chan_cloth","cloth"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value",0);
                set("long","����һ����������������ë�����ϵ�ɢ���ʺ��â��\n");
                set("material","steel");
                set("armor_prop/armor",25);
                set("no_sell",1);
                set("no_auc",1);
                set("no_give",1);
                set("no_put",1);
                set("no_drop",1);
                set("no_get",1);
        }
        setup();
if(me->query("class")=="blademan")  this_object()->set("armor_prop/blade", 5);
if(me->query("class")=="fighter")   this_object()->set("armor_prop/unarmed",5);
if(me->query("class")=="swordsman") this_object()->set("armor_prop/sword",5);
if(me->query("class")=="scholar")   this_object()->set("armor_prop/stabber",5);
if(me->query("class")=="bandit")    this_object()->set("armor_prop/unarmed",5);
                this_object()->set("armor_prop/parry", 10);
                this_object()->set("armor_prop/move", 10);
                this_object()->set("armor_prop/force", 10);
}
void init()
{
     add_action("do_wear","wear");
     add_action("do_remove","remove");
}
int do_wear(string str)
{
     ::wear();
     if( query("equipped") )
     {
        cor = me->query("kar",1);
        cor = cor *2;
message_vision(HIB"$N����������С����������һ��,��������С����˲ʱƮ�������ʽ�$N���֡�\n"NOR,me);
        set_heart_beat(1);
     }
}
int do_remove(string str)
{
   if(str=="Chan_cloth" || str=="all" || str=="cloth")
     if( query("equipped") )
     {
message_vision(YEL"$N��������������С����,����ĺ��Ҳ��֮���š�\n"NOR,me);
        set_heart_beat(0);
     }
}

void heart_beat()
{
  if( !objectp(me) )
        {
        set_heart_beat(0);
        return;
        }
  if( me->is_fighting()&&query("equipped")&&me->query("eff_kee")!=ekee )
  {
    if( random(100) > 55)
    {
    me->receive_curing("kee",cor*10);
    me->receive_heal("kee",cor*10);
message_vision(HIW+"\n��������С���·����ޱȵ�������$N��ʱ����������ˬ��\n"+NOR,me);
    }
  }
  return;
}
